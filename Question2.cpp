#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

#define PSLEEP  100
#define CSLEEP  100
#define MAX  10
#define MIN  0

using namespace std;

// Global variables
std::mutex mu;
std::condition_variable cond;
std::unique_lock<std::mutex> lock1;

static const int num_of_threads = 6;

class Buffer {
  private:
    int count;
    std::mutex mut;
  public:
    Buffer () : count(0) {};

    void put(){
        std::unique_lock<std::mutex> lock1 (mut);
        std::thread::id this_id_1 = std::this_thread::get_id();
        if (count == 10) {
            std::cout << "Buffer is full, producer thread " << this_id_1 << " is suspended." << endl;
            while (count == 10) {
                cond.wait(lock1);
            }
        }
        count++;
        std::cout << "producer thread " << this_id_1 << ", count = " << count << endl;
        cond.notify_all();
    }

    int get(){
        std::unique_lock<std::mutex> lock1 (mut);
        std::thread::id this_id = std::this_thread::get_id();
        if (count == 0) {
            std::cout << "Buffer is empty, consumer thread " << this_id << "is suspended." << endl;
            while (count == 0) {
                cond.wait(lock1);
            }

        }
        count--;
        std::cout << "consumer thread " << this_id << ", count = " << count << endl;
        cond.notify_all();
        return 1;
    }


};

class TClass {
  public:

    TClass(Buffer& buffer) : bufferone(buffer) {}

    void prods(void){

        for (int k=0;k<100;k++) {
            bufferone.put();
            std::this_thread::sleep_for(std::chrono::milliseconds(PSLEEP));
        }

    }

    void cons(void) {

        for (int l=0;l<100;l++) {
            bufferone.get();
            std::this_thread::sleep_for(std::chrono::milliseconds(CSLEEP));
        }

    }

  private:
    int y;
    Buffer& bufferone;
};

int main() {
    Buffer buf;
    TClass tc(buf);
    std::thread producer1(&TClass::prods,&tc);
    std::thread producer2(&TClass::prods,&tc);
    std::thread producer3(&TClass::prods,&tc);
    std::thread consumer1(&TClass::cons,&tc);
    std::thread consumer2(&TClass::cons,&tc);

    std::cout << "All threads initiated." << endl;

    producer1.join();
    producer2.join();
    producer3.join();
    consumer1.join();
    consumer2.join();

    std::cout << "All threads terminated." << endl;
    return 0;
}

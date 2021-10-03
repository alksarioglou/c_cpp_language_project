#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

static const int num_of_threads = 6;

std::mutex m_mutex;

class TClass {
  public:
    TClass(int x) : y(x){};
    void run(){
        std::thread::id this_id = std::this_thread::get_id();
        std::unique_lock<std::mutex> locker (m_mutex);
        for (int i=0;i<5;i++) {
            std::cout << "Hello, I am thread " << this_id << ", y = " << y << "\n";
            y++;
        }
    }
  private:
    int y;
};

int main() {
    TClass tc(0);
    std::thread t[6];

    for (int k=0;k<num_of_threads;k++) {
        t[k] = std::thread(&TClass::run, std::ref(tc));
    }

    std::cout << "All threads initiated. \n";

    for (int n=0;n<num_of_threads;n++) {
        t[n].join();
    }


    std::cout << "All threads terminated. \n";

}

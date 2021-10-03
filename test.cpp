#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <map>
#include <random>
#include <chrono>
#include <vector>

using namespace std;

//global constants:
int const MAX_NUM_OF_CHAN = 6; //number of AdcInputChannels
int const MAX_NUM_OF_THREADS = 6;
int const DATA_BLOCK_SIZE = 20;

//global variables:
std::mutex mu;
std::condition_variable cond;
std::unique_lock<std::mutex> map_locker;

// Map of threads IDs and int
std::map<std::thread::id, int> threadIDs;

void accessmap (int id){
    threadIDs.insert(std::make_pair(std::this_thread::get_id(), id));
    //cout << "Thread: " << std::this_thread::get_id() << " , ID: " << id << endl;
}

int search_function (int iden) {

    accessmap(iden);
    std::map <std::thread::id, int>::iterator it = threadIDs.find(std::this_thread::get_id());
    if (it == threadIDs.end()) {
        //cout << "Int value not found" << endl;
        return -1;
    }
    else {
        //cout << "For thread: " << std::this_thread::get_id() << " , ID: " << it->second << endl;
        return it->second;
    }

}

int findid(int id) {
    std::unique_lock<std::mutex> map_locker(mu);
    accessmap(id);
    std::map <std::thread::id, int>::iterator it = threadIDs.find(std::this_thread::get_id());
    if (it == threadIDs.end()) {
        cout << "not found" << endl;
        return -1;
    }
    else {
        cout << it->second << endl;
        return it->second;
    }
    cond.notify_all();

}

void printid (int iden) {

    cout << iden << endl;

}

int main () {
/*    std::thread the_threads[MAX_NUM_OF_THREADS]; //array of threads

    for (int m = 0; m < MAX_NUM_OF_THREADS; m++) {
        the_threads[m] = std::thread(printid,m);
    }

    for (int i = 0; i < MAX_NUM_OF_THREADS; i++) {
        the_threads[i].join();
    } */

    std::mt19937 gen(time(0));
    std::uniform_int_distribution<> dis(100,500);
    int n = dis(gen);
    cout << n << endl;

    return 0;
}


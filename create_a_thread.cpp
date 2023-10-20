#include <iostream>
#include <thread>

void threadfunction(){
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout << "Finished Work in Thread function." << std::endl;
}

int main(){
    // create thread function
    std::thread t (threadfunction);
    // Do something in main
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    std::cout << "Finished Work in Main function." << std::endl;
    // Waits for the thread to finish
    t.join();
    return 0;
}
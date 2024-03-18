#include <iostream>
#include <thread>
#include <chrono>

static bool s_Finished = false;

void DoWork() {
    while (!s_Finished) {
        std::cout << "working \n" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

int main() {
    std::thread worker(DoWork);
    std::cin.get();
    s_Finished = true;
    worker.join(); // the parent thread will pause its execution until the child thread completes.
    std::cin.get();
    return 0;
}

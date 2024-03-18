//
// Created by nisha on 2/9/2024.
//

#include "iostream"
#include "thread"

bool run = true;

void something(){
    using namespace std::literals::chrono_literals;
    std::cout << "Thread ID:" << std::this_thread::get_id() <<std::endl;

    while (run)

}

int main (int argc, char const *argv[]){

}

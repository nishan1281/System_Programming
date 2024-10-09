cmake_minimum_required(VERSION 3.28)
project(MVVM)

set(CMAKE_CXX_STANDARD 17)

add_executable(MVVM main.cpp
        include/model/Person.h
        src/model/Person.cpp
        include/viewmodel/PersonViewModel.h
        src/viewmodel/PersonViewModel.cpp
        include/view/ConsoleView.h
        src/view/ConsoleView.cpp)

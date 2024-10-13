//
// Created by nisha on 10/12/2024.
//
// src/main.cpp
#include <iostream>
#include "../include/Journal.h"
#include "../include/PersistenceManager.h"

int main() {
    Journal journal{"Dear Diary"};
    journal.add("I ate a bug");
    journal.add("I cried today");

    PersistenceManager::save(journal, "diary.txt");

    std::cout << "Entries saved to diary.txt." << std::endl;
    return 0;
}

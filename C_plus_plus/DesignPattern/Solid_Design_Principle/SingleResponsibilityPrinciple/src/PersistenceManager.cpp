//
// Created by nisha on 10/12/2024.
//
// src/PersistenceManager.cpp
#include "../include/PersistenceManager.h"

#include <fstream>

void PersistenceManager::save(const Journal& j, const std::string& filename) {
    std::ofstream ofs(filename);
    for (const auto& entry : j.getEntries()) {
        ofs << entry << std::endl; // Write each entry to the file
    }
}

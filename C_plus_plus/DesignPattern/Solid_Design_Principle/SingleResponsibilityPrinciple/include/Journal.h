//
// Created by nisha on 10/12/2024.

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Journal {
public:
    explicit Journal(const std::string& title);
    void add(const std::string& entry);
    const std::vector<std::string>& getEntries() const; // New method to access entries

private:
    std::string title;
    std::vector<std::string> entries;
};

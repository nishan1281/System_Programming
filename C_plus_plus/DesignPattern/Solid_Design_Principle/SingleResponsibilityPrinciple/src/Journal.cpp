//
// Created by nisha on 10/12/2024.
//

#include "../include/Journal.h"
#include <boost/lexical_cast.hpp>

Journal::Journal(const std::string& title) : title{title} {}

void Journal::add(const std::string& entry) {
    static int count = 1;
    entries.push_back(boost::lexical_cast<std::string>(count++) + ": " + entry);
}

const std::vector<std::string>& Journal::getEntries() const {
    return entries;
}
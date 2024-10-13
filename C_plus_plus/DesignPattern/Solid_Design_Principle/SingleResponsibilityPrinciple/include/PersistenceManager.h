//
// Created by nisha on 10/12/2024.
//

#pragma once
#include "Journal.h"

class PersistenceManager {
public:
    static void save(const Journal& j, const std::string& filename);
};
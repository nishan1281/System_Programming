//
// Created by nisha on 5/25/2024.
//

#include <bits/valarray_array.h>

#include "iostream"
#include "fstream"
#include "array"
#include "string"

// Define the Record structure
struct Record {
    std::string name;
    int age;
    double score;

    // Constructor
    Record(const std::string& n, int a, double s) : name(n), age(a), score(s) {}
};

int main() {
    // Initialize the std::array with Record objects
    std::array<Record, 3> records = {{
        {"nishan", 16, 5.00},
        {"nupur", 14, 2.8},
        {"dihan", 8, 3.5}
    }};

    std::fstream f ("records.dat", std::ios::out | std::ios::binary);

    if (f)
    {
        f.write(reinterpret_cast<char*>(&records), 3*sizeof(Record));
        f.close();
    }

    else
    {
        std::cerr << "Error opening file for writing." << std::endl;
    }

}
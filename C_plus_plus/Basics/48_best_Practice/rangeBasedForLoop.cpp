//
// Created by nisha on 5/4/2024.
//
#include <iostream>
#include <vector>

// Dummy model class
class Model {
public:
    void update(int x) {
        std::cout << "Updating model with: " << x << std::endl;
    }
};

// Function using range-based for loop
void method(const std::vector<int>& data, Model& model) {
    for (const auto& x : data) {
        model.update(x);
    }
}

int main() {
    // Sample data
    std::vector<int> data = {1, 2, 3, 4, 5};

    // Create a model object
    Model model;

    // Call the method with the data and model
    method(data, model);

    return 0;
}

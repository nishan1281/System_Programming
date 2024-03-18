//
// Created by nisha on 2/23/2024.
//
#include "iostream"

#include <iostream>

class Singleton {
public:
    // Static method to access the singleton instance
    static Singleton& getInstance() {
        // Create the instance if it doesn't exist
        if (!instance) {
            instance = new Singleton();
        }
        return *instance;
    }

    // Public method to demonstrate functionality
    void showMessage() {
        std::cout << "Hello from Singleton!" << std::endl;
    }

    // Delete copy constructor and assignment operator
    Singleton(const Singleton&) = delete;
    void operator=(const Singleton&) = delete;

private:
    // Private constructor to prevent direct instantiation
    Singleton() {}

    // Private static member variable to hold the single instance
    static Singleton* instance;
};

// Initialize static member variable
Singleton* Singleton::instance = nullptr;

int main() {
    // Access the singleton instance
    Singleton& singleton = Singleton::getInstance();

    // Use the singleton object
    singleton.showMessage();

    // Attempt to create another instance (will return the existing one)
    Singleton& anotherSingleton = Singleton::getInstance();
    anotherSingleton.showMessage();

    return 0;
}

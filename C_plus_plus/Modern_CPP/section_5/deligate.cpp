#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Main constructor
    Person(const std::string& name, int age) : name(name), age(age) {
        std::cout << "Person created: " << name << ", " << age << " years old." << std::endl; //implementation
    }

    // Delegating constructor with default age
    Person(const std::string& name) : Person(name, 0) { /*not to write implementation */}

    // Delegating constructor with default name and age
    Person() : Person("Unknown", 0) { /*not to write implementation */}

    };

int main() {
    Person p1("Alice", 30); //output: Person created: Alice, 30 years old.
    Person p2("Bob");  //output:Person created: Bob, 0 years old.
    Person p3;  //output: Person created: Unknown, 0 years old.

    return 0;
}

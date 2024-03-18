//
// Created by nisha on 2/16/2024. This example is usefull to understand emplanc_back
// in push_back we need to creat object first then push in vector from last like
// if there is 1,2,3 then after push_back 4, vector will be as = 1,2,3,4
//

#include <iostream>
#include <vector>
#include <string>

class Person {

private:
    std::string name;
    int age;

public:

    // constructor using member initializer list

    Person (std::string _name, int _age) : name(_name), age (_age){}

    // general way of constructor
//    Person(std::string name, int age){
//        this->name = name;
//        this->age = age;
//    }

    // As created object having private variable we cannot access them without getter.
    // sometime const used after getName() const {} to confirm variables are not changeable
    // during access. But in this case during looping const keyword need to use before auto.


    std::string getName () const{
        return this->name; //in modern c++, it is return name;
    }

    int getAge() const {
        return this->age;
    }

};

int main(){
    std::vector<Person> people;

    // To include data in people vector, Using push_back() with a created object

    std::cout << "Using push back(): \n";
    Person person1("Alice", 30);
    people.push_back(person1);

    Person person2("Robin", 20);
    people.push_back(person2);

    // Print the vector data using a range-based for loop
    std::cout << "Using range-based for loop:\n";
    for (const auto& p : people){

        std::cout << "Name: " << p.getName() << ", Age: " << p.getAge() << std::endl;
    }

    return 0;
}
//std::cout << "\nUsing emplace_back():\n";
//people.emplace_back("Bob", 25);
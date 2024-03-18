/*Created by nisha on 2/16/2024.
 * Here we will short code against push_back example
 * Target- to avoid getter we will use "initializer list constructor"
 * [special type of constructor that allows you to initialize the member variables of
 *a class directly from the constructor's parameter list. ]
 * emplace_Back method to push object in vector but without creating object first
 * this method will allow creation and pushing object in single method.

*/

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
//    Person(std::string name, int age){
//        this->name = name;
//        this->age = age;
//    }

    // alternative of above constructor but not good:

    Person(std::string name_, int age_) : name(name_), age(age_) {}

    // As created object having private variable we cannot access them without getter.
    // sometime const used after getName() const {} to confirm variables are not changeable
    // during access. But in this case during looping const keyword need to use before auto.


    std::string getName () const{
        return this->name;
    }

    int getAge() const {
        return this->age;
    }

};

int main(){
    std::vector<Person> people;

    // To include data in people vector, Using emplace_back() with a temporary object

    std::cout << "Using emplace_back(): \n";
    people.emplace_back("Alice", 30);
    people.emplace_back("Robin", 20);


    // Print the vector data using a range-based for loop
    std::cout << "Using range-based for loop:\n";
    for (const auto& p : people){

        std::cout << "Name: " << p.getName() << ", Age: " << p.getAge() << std::endl;
    }

    return 0;
}
//std::cout << "\nUsing emplace_back():\n";
//people.emplace_back("Bob", 25);
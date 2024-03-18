//
// Created by nisha on 2/9/2024.
//

#include "iostream"
#include "memory"   //for smart pointer

/*std::unique_ptr: This smart pointer represents exclusive ownership of a dynamically
allocated object. It ensures that the owned object is deleted when
the unique_ptr goes out of scope.

std::shared_ptr: Can be copied.

std::weak_ptr: This smart pointer provides a non-owning reference to an object managed
by a shared_ptr. It allows you to observe or access the object without affecting its
lifetime. Weak pointers are useful for breaking cycles in reference-counted structures
to prevent memory leaks.
 */

class Person{
public:
    Person(){
        std::cout << "Person was created" << std::endl;
    }

    //Not required if smart pointer used
//    ~Person(){
//        std::cout << "Person was destroyed" << std::endl;
//    }

    void sayHello(){
        std::cout << "Hello there!" << std::endl;
    }
};

int main (int argc, char const *argv[]){

    //One way to make unique pointer. Not better way
    {
        std::unique_ptr <Person> person (new Person());
        person->sayHello();
    }

    //Another way to make unique pointer. Better way
    {
        std::unique_ptr <Person> person1 = std::make_unique<Person>();
        std::unique_ptr<Person> person2 = person1; //not possible
    }

    // shared pointer
    std::shared_ptr<Person> person3 = std::make_shared<Person>();
    std::shared_ptr<Person> person4 = person3;  // possible.
    std::unique_ptr<Person> person4 = person3;  // not possible.

    return 0;
}
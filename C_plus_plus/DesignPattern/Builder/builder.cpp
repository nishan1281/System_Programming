//
// Created by nisha on 10/20/2024.
//
// When to Use Builder Pattern:
// When an object needs to be created with a large number of optional parameters.
// When you want to separate the construction of a complex object from its representation.
// When you want to ensure that an object is correctly constructed with all required fields.
// Key Components:
// Builder: This is an interface or abstract class with methods to build parts of the product.
// ConcreteBuilder: This implements the Builder interface and provides specific implementations of the steps for constructing the product.
// Product: The final object that will be constructed.
// Director: This class is responsible for orchestrating the construction process. It uses the Builder to assemble the product.

#include "iostream"
#include "sstream"
#include "vector"



struct HtmlElement
{
    std::string name, text;
    std::vector<HtmlElement> element;
    std::min
};




//need recurive structure in c++
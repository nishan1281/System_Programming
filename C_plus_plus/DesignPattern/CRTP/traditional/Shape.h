//
// Created by nisha on 4/5/2024.
//
#ifndef SHAPE_H
#define SHAPE_H

// Define a base class for geometric shapes
class Shape {
public:
    //define a virtual function to calculate the area
    virtual double calculateArea() const = 0;

    /* explanation
     * virtual: Indicates that the function is virtual, meaning it can be overridden
     * by derived classes.
     * const: Indicates that the function does not modify the object's state.
     * = 0: Denotes that this is a pure virtual function,
     * and it must be overridden by derived classes.
     */
};

#endif
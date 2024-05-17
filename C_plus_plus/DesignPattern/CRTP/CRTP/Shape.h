//
// Created by nisha on 4/5/2024.
//

#ifndef SHAPE_H
#define SHAPE_H

// Define a base class template for geometric shapes
template <typename T>

class Shape{

public:
    double calculateArea() const {
        return static_cast <const T*> (this)->area();
    }

};

#endif

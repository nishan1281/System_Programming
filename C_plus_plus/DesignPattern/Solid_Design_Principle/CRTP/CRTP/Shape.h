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
        // Adding extra functionality: Log before calling area()
        std::cout << "Calculating area in derived class..." << std::endl;
        return static_cast <const T*> (this)->area();

        /*this points to the current object, and static_cast<const T*>(this) tells the compiler
         *to treat this object as if it’s of type T, the derived class.
         *->area():
           Once the this pointer is cast to const T*, ->area() calls the area function defined
           in the derived class T.

        This is CRTP (Curiously Recurring Template Pattern), where we work on derived class method*/
    }

};

#endif

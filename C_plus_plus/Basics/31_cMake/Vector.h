//
// Created by nisha on 2/9/2024.
//

#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
public:
    int  x, y;

    Vector();
    Vector(int x, int y);

    //operator Overloading. Here, class name then operator and "-,+,*,/" for arithmetic operation.

    Vector operator-(Vector vec1);
};

#endif

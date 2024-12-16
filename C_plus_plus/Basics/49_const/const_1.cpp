//
// Created by nisha on 11/2/2024.
//

#include <valarray>

#include "iostream"

class Point
{
private:
    int x, y; //coordinate of the point.

public:
    Point (int _x, int _y): x(_x), y(_y){}

    //to change the co-ordinate:
    void move(int dx, int dy)
    {
        x += dx;
        y += dy;
    }

    //to identify the co-ordinate
    void print () const
    {
        std::cout << "Point: (" << x << ", " << y << ")\n";
    }

    double distance (const Point& other) const
    //const to other confirm not changing the other variables.
    //const at funtion means it will not change object variable
    //The double distance(const Point& other) const function uses const Point& to
    //pass a reference to the other object, avoiding a copy and thereby improving memory
    //efficiency. The const within the parentheses ensures that the other object
    //is not modified within the function, as it is accessed by reference.
    //The const after the function signature guarantees that this method does not
    //modify any member variables of the current object.
    {
        int dx = other.x - x;
        int dy = other.y -y;
        return std::sqrt(dx*dx+dy*dy);
    }
};

int main()
{
    Point p1{3,4};
    Point p2{6,8};

    p1.print();
    p2.print();

    p1.move(2, 3);
    p1.print();

    double dist = p1.distance(p2);

    const Point p3{1, 2};
    p3.print();

    // p3.move(1,1); // Error: cannot call non-const member function on const object

    return 0;
}

















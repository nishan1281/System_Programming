/* Created by nisha on 2/21/2024.
*Operator overloading in C++ allows you to redefine how operators behave when
 *used with objects of your custom classes. By overloading operators, you can change
 *their functionality to suit the specific needs of your class, making your code
 * more intuitive and expressive.
*/

#include "iostream"

class Point{
private:
    int x, y;

public:
    Point(int x_, int y_) : x(x_), y (y_){}

    Point operator+(const Point& other) const {
        return Point(x+ other.x, y + other.y);
    }

    void display() const {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

int main(){

    Point p1(1, 2);
    Point p2 (3, 4);

    Point result = p1 + p2; //using overloaded + operator
    result.display();
}


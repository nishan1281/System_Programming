/*
* std::ostream is a base class representing output streams, used for general output operations.
* std::ostringstream is a subclass of std::ostream specifically designed for outputting
* data to strings. It provides functionality to build strings in memory.
*/

#include <iostream>

class Point {
private:
    int x_;
    int y_;

public:
    Point(int x, int y) : x_(x), y_(y) {}

    friend std::ostream& operator<<(std::ostream& out, const Point& point);
};

std::ostream& operator<<(std::ostream& out, const Point& point) {
    out << "Point(" << point.x_ << ", " << point.y_ << ")";
    return out;
}

int main() {
    Point p1(3, 4);
    std::cout << "Coordinates of p1: " << p1 << std::endl;

    Point p2(-1, 7);
    std::cout << "Coordinates of p2: " << p2 << std::endl;

    return 0;
}

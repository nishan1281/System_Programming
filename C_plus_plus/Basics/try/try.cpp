




#include <iostream>

// Abstract class for Shapes
class Shape {
public:
    // Pure virtual function for calculating area
    virtual double area() const = 0; // Interface method

    // Pure virtual function for drawing the shape
    virtual void draw() const = 0;   // Interface method
};

// Derived class for Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Implementing the area method
    double area() const override {
        return 3.14159 * radius * radius; // Area of a circle
    }

    // Implementing the draw method
    void draw() const override {
        std::cout << "Drawing a Circle with radius: " << radius << std::endl;
    }
};

// Derived class for Rectangle
class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Implementing the area method
    double area() const override {
        return width * height; // Area of a rectangle
    }

    // Implementing the draw method
    void draw() const override {
        std::cout << "Drawing a Rectangle with width: " << width << " and height: " << height << std::endl;
    }
};

int main() {
    Shape* shapes[2]; // Array of Shape pointers

    shapes[0] = new Circle(5.0); // Creating a Circle object
    shapes[1] = new Rectangle(4.0, 6.0); // Creating a Rectangle object

    // Using the abstract class interface
    for (int i = 0; i < 2; ++i) {
        shapes[i]->draw(); // Call draw method
        std::cout << "Area: " << shapes[i]->area() << std::endl; // Call area method
    }

    // Clean up memory
    delete shapes[0];
    delete shapes[1];

    return 0;
}


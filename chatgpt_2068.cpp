In C++, you can define the Shape class as an abstract base class with pure virtual functions to calculate the area and display the shape information. Then, you can create derived classes Triangle and Rectangle that inherit from the Shape class and implement their specific area calculations. Here's the complete code:

```cpp
#include <iostream>
using namespace std;
class Shape {
public:
    // Constructor
    Shape() {}

    // Virtual destructor
    virtual ~Shape() {}

    // Pure virtual function to calculate the area (to make the class abstract)
    virtual double calculateArea() const = 0;

    // Virtual function to display shape information
    virtual void displayInfo() const = 0;
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    // Constructor
    Triangle(double base, double height) : base(base), height(height) {}

    // Calculate the area of the triangle
    double calculateArea() const override {
        return 0.5 * base * height;
    }

    // Display triangle information
    void displayInfo() const override {
        std::cout << "Triangle - Base: " << base << ", Height: " << height << std::endl;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double length, double width) : length(length), width(width) {}

    // Calculate the area of the rectangle
    double calculateArea() const override {
        return length * width;
    }

    // Display rectangle information
    void displayInfo() const override {
        std::cout << "Rectangle - Length: " << length << ", Width: " << width << std::endl;
    }
};

int main() {
    Triangle triangle(5.0, 8.0);
    Rectangle rectangle(4.0, 6.0);

    std::cout << "Area of ";
    triangle.displayInfo();
    std::cout << " is: " << triangle.calculateArea() << std::endl;

    std::cout << "Area of ";
    rectangle.displayInfo();
    std::cout << " is: " << rectangle.calculateArea() << std::endl;

    return 0;
}
```

In this code, the Shape class serves as an abstract base class with the pure virtual functions `calculateArea()` and `displayInfo()`. The derived classes Triangle and Rectangle override these functions and provide their specific implementations for calculating the area and displaying their information. The `main()` function creates instances of the Triangle and Rectangle classes and calls their member functions to display the area.
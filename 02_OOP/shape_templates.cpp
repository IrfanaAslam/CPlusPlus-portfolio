/*
Program: Shape Templates
Concepts: templates, abstract base classes, generic programming
Author: Irfana Aslam
*/
#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override { return 3.14159265 * radius * radius; }
};

class Rectangle : public Shape {
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override { return width * height; }
};

template <typename T>
T maxValue(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    Circle c(5);
    Rectangle r(4, 6);

    cout << "Circle area: " << c.area() << endl;
    cout << "Rectangle area: " << r.area() << endl;

    cout << "Max(int): " << maxValue(3, 7) << endl;
    cout << "Max(double): " << maxValue(3.5, 2.1) << endl;

    return 0;
}

/*
Program: Sphere Volume and Surface Area
Concepts: floating-point arithmetic, common pitfalls (integer division)
Author: Irfana Aslam
*/
#include <iostream>
using namespace std;

int main() {
    double radius, volume, area;
    const double pi = 3.14159265358979;

    cout << "Enter radius: ";
    cin >> radius;

    // Using 4.0/3 (not 4/3) avoids integer-division truncation
    volume = (4.0 / 3) * pi * radius * radius * radius;
    area = 4 * pi * radius * radius;

    cout << "Surface area: " << area << endl;
    cout << "Volume: " << volume << endl;

    return 0;
}

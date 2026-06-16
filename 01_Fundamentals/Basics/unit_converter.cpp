/*
Program: Unit Converter
Concepts: functions, menus, loops
Author: Irfana Aslam
*/
#include <iostream>
using namespace std;

double celsiusToFahrenheit(double c) { return c * 9.0 / 5.0 + 32; }
double kmToMiles(double km) { return km * 0.621371; }
double kgToPounds(double kg) { return kg * 2.20462; }

int main() {
    int choice;
    double value;

    cout << "1. Celsius to Fahrenheit\n2. Kilometers to Miles\n3. Kilograms to Pounds\n";
    cout << "Choose conversion: ";
    cin >> choice;

    cout << "Enter value: ";
    cin >> value;

    switch (choice) {
        case 1: cout << value << " C = " << celsiusToFahrenheit(value) << " F" << endl; break;
        case 2: cout << value << " km = " << kmToMiles(value) << " miles" << endl; break;
        case 3: cout << value << " kg = " << kgToPounds(value) << " lb" << endl; break;
        default: cout << "Invalid choice" << endl;
    }

    return 0;
}

#include <iostream>  // Include input-output stream library
using namespace std; // Use the standard namespace

int main() {
    float radius, surface, area, pi; // Declare variables for radius, surface (volume), area (surface area), and pi
    pi = 3.14; // Assign value to pi (approximation)

    // Prompt user to enter the radius of the sphere
    cout << "Enter radius: ";
    cin >> radius; // Take radius input from the user

    // Calculate the volume of the sphere
    // BUG: (4/3) performs integer division and results in 1. Should be 4.0/3 or 4/3.0 to avoid integer division
    surface = ((4/3) * pi * radius * radius * radius); 

    // Calculate the surface area of the sphere
    area = (4 * pi * radius * radius); 

    // Output the surface area
    cout << "Area: " << area << endl;

    // Output the volume (incorrectly labeled as 'Circumference')
    cout << "Cirumference: " << surface << endl; 

    return 0; // Indicate successful program termination
}

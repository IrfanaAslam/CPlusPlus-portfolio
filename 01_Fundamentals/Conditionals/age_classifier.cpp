/*
Program: Age Classifier
Concepts: nested conditionals
Author: Irfana Aslam
*/
#include <iostream>
using namespace std;

string classify(int age) {
    if (age < 0) return "Invalid age";
    if (age <= 12) return "Child";
    if (age <= 19) return "Teenager";
    if (age <= 59) return "Adult";
    return "Senior";
}

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    cout << classify(age) << endl;
    return 0;
}

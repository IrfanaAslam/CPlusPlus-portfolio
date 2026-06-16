/*
Program: Grade Calculator
Concepts: else-if ladders
Author: Irfana Aslam
*/
#include <iostream>
using namespace std;

char gradeFor(int marks) {
    if (marks >= 90) return 'A';
    else if (marks >= 80) return 'B';
    else if (marks >= 70) return 'C';
    else if (marks >= 60) return 'D';
    else return 'F';
}

int main() {
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;

    cout << "Grade: " << gradeFor(marks) << endl;
    return 0;
}

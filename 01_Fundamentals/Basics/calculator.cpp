/*
Program: Simple Calculator
Concepts: switch statements, functions, basic I/O
Author: Irfana Aslam
*/
#include <iostream>
using namespace std;

double calculate(double a, double b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0) {
                cout << "Error: division by zero" << endl;
                return 0;
            }
            return a / b;
        default:
            cout << "Error: unknown operator" << endl;
            return 0;
    }
}

int main() {
    double a, b;
    char op;

    cout << "Enter expression (e.g. 3 + 4): ";
    cin >> a >> op >> b;

    cout << "Result: " << calculate(a, b, op) << endl;
    return 0;
}

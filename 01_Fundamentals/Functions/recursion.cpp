/*
Program: Recursion Examples
Concepts: factorial and GCD via recursion
Author: Irfana Aslam
*/
#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int n;
    cout << "Enter a number for factorial: ";
    cin >> n;
    cout << n << "! = " << factorial(n) << endl;

    int a, b;
    cout << "Enter two numbers for GCD: ";
    cin >> a >> b;
    cout << "GCD = " << gcd(a, b) << endl;

    return 0;
}

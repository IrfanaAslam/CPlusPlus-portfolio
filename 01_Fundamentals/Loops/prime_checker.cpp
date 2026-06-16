/*
Program: Prime Checker
Concepts: loops, sqrt optimization
Time Complexity: O(sqrt n)
Author: Irfana Aslam
*/
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << n << (isPrime(n) ? " is prime" : " is not prime") << endl;
    return 0;
}

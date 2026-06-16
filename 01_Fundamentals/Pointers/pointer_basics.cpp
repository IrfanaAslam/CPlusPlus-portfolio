/*
Program: Pointer Basics
Concepts: pointers, references, pass-by-reference
Author: Irfana Aslam
*/
#include <iostream>
using namespace std;

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    int *p = &x;

    cout << "x = " << x << ", *p = " << *p << endl;

    swapByReference(x, y);
    cout << "After swapByReference: x = " << x << ", y = " << y << endl;

    swapByPointer(&x, &y);
    cout << "After swapByPointer: x = " << x << ", y = " << y << endl;

    return 0;
}

/*
Program: Dynamic Memory Allocation
Concepts: new/delete, dynamic arrays
Author: Irfana Aslam
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++) arr[i] = i * i;

    cout << "Squares: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    delete[] arr;
    return 0;
}

/*
Program: Array Operations
Concepts: arrays, sum/average/max/min
Author: Irfana Aslam
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int sum = 0, maxVal = arr[0], minVal = arr[0];
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
        if (arr[i] < minVal) minVal = arr[i];
    }

    cout << "Sum: " << sum << endl;
    cout << "Average: " << (double)sum / n << endl;
    cout << "Max: " << maxVal << endl;
    cout << "Min: " << minVal << endl;

    return 0;
}

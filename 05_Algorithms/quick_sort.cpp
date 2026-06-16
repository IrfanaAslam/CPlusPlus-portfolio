/*
Program: Quick Sort
Concepts: divide and conquer, in-place partitioning
Time Complexity: O(n log n) average, O(n^2) worst case
Author: Irfana Aslam
*/
#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) swap(arr[++i], arr[j]);
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int> &arr, int low, int high) {
    if (low >= high) return;
    int pivotIndex = partition(arr, low, high);
    quickSort(arr, low, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, high);
}

int main() {
    vector<int> arr = {10, 80, 30, 90, 40, 50, 70};

    quickSort(arr, 0, (int)arr.size() - 1);

    cout << "Sorted: ";
    for (int n : arr) cout << n << " ";
    cout << endl;

    return 0;
}

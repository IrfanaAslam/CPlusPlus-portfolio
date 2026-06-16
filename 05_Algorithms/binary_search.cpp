/*
Program: Binary Search
Concepts: divide and conquer on sorted arrays
Time Complexity: O(log n)
Author: Irfana Aslam
*/
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int> &arr, int target) {
    int lo = 0, hi = (int)arr.size() - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15};
    int target = 11;

    int idx = binarySearch(arr, target);
    if (idx != -1) cout << "Found " << target << " at index " << idx << endl;
    else cout << target << " not found" << endl;

    return 0;
}

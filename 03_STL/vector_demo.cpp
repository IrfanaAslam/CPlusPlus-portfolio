/*
Program: Vector Demo
Concepts: std::vector, algorithms (sort, find)
Author: Irfana Aslam
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {5, 2, 8, 1, 9, 3};

    sort(nums.begin(), nums.end());

    cout << "Sorted: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    auto it = find(nums.begin(), nums.end(), 8);
    if (it != nums.end())
        cout << "Found 8 at index " << (it - nums.begin()) << endl;

    nums.push_back(100);
    nums.erase(nums.begin());

    cout << "After modification: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    return 0;
}

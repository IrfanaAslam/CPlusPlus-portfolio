/*
Program: Fibonacci Generator
Concepts: loops, vectors
Time Complexity: O(n)
Author: Irfana Aslam
*/
#include <iostream>
#include <vector>
using namespace std;

vector<long long> fibonacci(int n) {
    vector<long long> sequence;
    long long a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        sequence.push_back(a);
        long long next = a + b;
        a = b;
        b = next;
    }
    return sequence;
}

int main() {
    int n;
    cout << "How many Fibonacci terms? ";
    cin >> n;

    for (long long term : fibonacci(n))
        cout << term << " ";
    cout << endl;

    return 0;
}

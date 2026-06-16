/*
Program: Statistics Toolkit
Concepts: numerical computing, descriptive statistics on datasets
Author: Irfana Aslam
*/
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

double mean(const vector<double> &data) {
    double sum = 0;
    for (double x : data) sum += x;
    return sum / data.size();
}

double variance(const vector<double> &data) {
    double m = mean(data);
    double sum = 0;
    for (double x : data) sum += (x - m) * (x - m);
    return sum / data.size();
}

double standardDeviation(const vector<double> &data) {
    return sqrt(variance(data));
}

double median(vector<double> data) {
    sort(data.begin(), data.end());
    size_t n = data.size();
    if (n % 2 == 0) return (data[n / 2 - 1] + data[n / 2]) / 2.0;
    return data[n / 2];
}

int main() {
    vector<double> dataset = {23.1, 45.6, 12.0, 78.3, 34.5, 56.7, 19.8, 67.2};

    cout << "Dataset size: " << dataset.size() << endl;
    cout << "Mean: " << mean(dataset) << endl;
    cout << "Median: " << median(dataset) << endl;
    cout << "Variance: " << variance(dataset) << endl;
    cout << "Standard deviation: " << standardDeviation(dataset) << endl;

    return 0;
}

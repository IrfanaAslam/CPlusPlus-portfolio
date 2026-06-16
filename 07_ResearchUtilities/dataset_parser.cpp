/*
Program: CSV Dataset Parser
Concepts: file handling, string parsing, structured data loading
Author: Irfana Aslam
*/
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

vector<vector<string>> parseCSV(const string &filename) {
    vector<vector<string>> rows;
    ifstream file(filename);
    string line;

    while (getline(file, line)) {
        vector<string> row;
        stringstream ss(line);
        string cell;
        while (getline(ss, cell, ','))
            row.push_back(cell);
        rows.push_back(row);
    }
    return rows;
}

int main() {
    string filename = "sample_dataset.csv";

    ofstream sample(filename);
    sample << "name,age,score\n";
    sample << "Irfana,26,91.5\n";
    sample << "Ali,29,82.3\n";
    sample.close();

    auto rows = parseCSV(filename);

    cout << "Parsed " << rows.size() << " rows:\n";
    for (const auto &row : rows) {
        for (const auto &cell : row)
            cout << cell << " | ";
        cout << endl;
    }

    return 0;
}

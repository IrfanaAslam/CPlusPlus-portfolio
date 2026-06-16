/*
Program: Matrix Basics
Concepts: 2D arrays, transpose
Author: Irfana Aslam
*/
#include <iostream>
using namespace std;

const int ROWS = 3, COLS = 3;

void printMatrix(int m[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int matrix[ROWS][COLS];
    cout << "Enter " << ROWS * COLS << " values:\n";
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            cin >> matrix[i][j];

    cout << "Matrix:\n";
    printMatrix(matrix);

    int transposed[COLS][ROWS];
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            transposed[j][i] = matrix[i][j];

    cout << "Transpose:\n";
    printMatrix(transposed);

    return 0;
}

/*
Program: Matrix Operations Toolkit
Concepts: 2D vectors, operator overloading, numerical computing building blocks
Author: Irfana Aslam
*/
#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

class Matrix {
private:
    vector<vector<double>> data;
    int rows, cols;

public:
    Matrix(int rows, int cols) : rows(rows), cols(cols), data(rows, vector<double>(cols, 0)) {}

    double& at(int r, int c) { return data[r][c]; }
    double at(int r, int c) const { return data[r][c]; }

    Matrix operator+(const Matrix &other) const {
        if (rows != other.rows || cols != other.cols)
            throw invalid_argument("Matrix dimensions must match for addition");
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                result.at(i, j) = data[i][j] + other.at(i, j);
        return result;
    }

    Matrix operator*(const Matrix &other) const {
        if (cols != other.rows)
            throw invalid_argument("Inner dimensions must match for multiplication");
        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < other.cols; j++)
                for (int k = 0; k < cols; k++)
                    result.at(i, j) += data[i][k] * other.at(k, j);
        return result;
    }

    Matrix transpose() const {
        Matrix result(cols, rows);
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                result.at(j, i) = data[i][j];
        return result;
    }

    void print() const {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++)
                cout << data[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    Matrix a(2, 2);
    a.at(0, 0) = 1; a.at(0, 1) = 2;
    a.at(1, 0) = 3; a.at(1, 1) = 4;

    Matrix b(2, 2);
    b.at(0, 0) = 5; b.at(0, 1) = 6;
    b.at(1, 0) = 7; b.at(1, 1) = 8;

    cout << "A + B:\n"; (a + b).print();
    cout << "A * B:\n"; (a * b).print();
    cout << "A transposed:\n"; a.transpose().print();

    return 0;
}

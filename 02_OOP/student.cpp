/*
Program: Student class
Concepts: classes, encapsulation, constructors
Author: Irfana Aslam
*/
#include <iostream>
#include <vector>
using namespace std;

class Student {
private:
    string name;
    vector<int> marks;

public:
    Student(string name) : name(name) {}

    void addMark(int mark) { marks.push_back(mark); }

    double average() const {
        if (marks.empty()) return 0;
        int total = 0;
        for (int m : marks) total += m;
        return (double)total / marks.size();
    }

    void display() const {
        cout << "Student: " << name << ", Average: " << average() << endl;
    }
};

int main() {
    Student s("Irfana");
    s.addMark(85);
    s.addMark(90);
    s.addMark(78);
    s.display();

    return 0;
}

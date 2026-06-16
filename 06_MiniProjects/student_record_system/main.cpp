/*
Program: Student Record System
Concepts: classes, STL containers, sorting, file handling
Author: Irfana Aslam
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

class StudentRecord {
private:
    string name;
    int rollNo;
    vector<double> grades;

public:
    StudentRecord(string name, int rollNo) : name(name), rollNo(rollNo) {}

    void addGrade(double grade) { grades.push_back(grade); }

    double gpa() const {
        if (grades.empty()) return 0;
        double total = 0;
        for (double g : grades) total += g;
        return total / grades.size();
    }

    string getName() const { return name; }
    int getRollNo() const { return rollNo; }

    void display() const {
        cout << "Roll #" << rollNo << " - " << name << " - GPA: " << gpa() << endl;
    }
};

class RecordSystem {
private:
    vector<StudentRecord> students;

public:
    void addStudent(const StudentRecord &s) { students.push_back(s); }

    void rankByGPA() {
        sort(students.begin(), students.end(), [](const StudentRecord &a, const StudentRecord &b) {
            return a.gpa() > b.gpa();
        });
    }

    void displayAll() const {
        for (const auto &s : students) s.display();
    }

    void exportToFile(const string &filename) const {
        ofstream out(filename);
        for (const auto &s : students)
            out << s.getRollNo() << "," << s.getName() << "," << s.gpa() << "\n";
    }
};

int main() {
    RecordSystem system;

    StudentRecord a("Irfana", 101);
    a.addGrade(3.8); a.addGrade(3.9);

    StudentRecord b("Ali", 102);
    b.addGrade(3.2); b.addGrade(3.5);

    StudentRecord c("Sara", 103);
    c.addGrade(4.0); c.addGrade(3.95);

    system.addStudent(a);
    system.addStudent(b);
    system.addStudent(c);

    system.rankByGPA();

    cout << "Ranked student records:\n";
    system.displayAll();

    system.exportToFile("student_records.csv");
    cout << "\nRecords exported to student_records.csv" << endl;

    return 0;
}

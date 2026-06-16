/*
Program: Employee Inheritance
Concepts: inheritance, virtual functions, polymorphism
Author: Irfana Aslam
*/
#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    double baseSalary;

public:
    Employee(string name, double baseSalary) : name(name), baseSalary(baseSalary) {}
    virtual double calculatePay() const { return baseSalary; }
    virtual void display() const {
        cout << name << " earns " << calculatePay() << endl;
    }
    virtual ~Employee() {}
};

class Manager : public Employee {
private:
    double bonus;

public:
    Manager(string name, double baseSalary, double bonus)
        : Employee(name, baseSalary), bonus(bonus) {}

    double calculatePay() const override { return baseSalary + bonus; }
};

int main() {
    Employee e("Ali", 50000);
    Manager m("Irfana", 60000, 15000);

    Employee *staff[] = {&e, &m};
    for (Employee *p : staff)
        p->display();

    return 0;
}

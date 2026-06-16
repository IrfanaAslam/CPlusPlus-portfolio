/*
Program: Bank Account
Concepts: encapsulation, operator overloading, exception handling
Author: Irfana Aslam
*/
#include <iostream>
#include <stdexcept>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;

public:
    BankAccount(string owner, double balance = 0) : owner(owner), balance(balance) {}

    void deposit(double amount) {
        if (amount <= 0) throw invalid_argument("Deposit must be positive");
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount > balance) throw runtime_error("Insufficient funds");
        balance -= amount;
    }

    double getBalance() const { return balance; }

    BankAccount& operator+=(double amount) {
        deposit(amount);
        return *this;
    }
};

int main() {
    BankAccount acc("Irfana", 100);

    acc.deposit(50);
    acc += 25;

    try {
        acc.withdraw(1000);
    } catch (const runtime_error &e) {
        cout << "Error: " << e.what() << endl;
    }

    cout << "Balance: " << acc.getBalance() << endl;
    return 0;
}

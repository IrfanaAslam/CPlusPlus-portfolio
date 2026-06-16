/*
Program: Stack (custom implementation)
Concepts: LIFO, array-backed stack
Time Complexity: O(1) push/pop
Author: Irfana Aslam
*/
#include <iostream>
using namespace std;

class Stack {
private:
    int data[100];
    int top;

public:
    Stack() : top(-1) {}

    bool isEmpty() const { return top == -1; }

    void push(int value) {
        if (top >= 99) { cout << "Stack overflow\n"; return; }
        data[++top] = value;
    }

    int pop() {
        if (isEmpty()) { cout << "Stack underflow\n"; return -1; }
        return data[top--];
    }

    int peek() const { return isEmpty() ? -1 : data[top]; }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top: " << s.peek() << endl;
    cout << "Pop: " << s.pop() << endl;
    cout << "Pop: " << s.pop() << endl;
    cout << "Top: " << s.peek() << endl;

    return 0;
}

/*
Program: Queue (custom implementation)
Concepts: FIFO, circular buffer
Time Complexity: O(1) enqueue/dequeue
Author: Irfana Aslam
*/
#include <iostream>
using namespace std;

class Queue {
private:
    int data[100];
    int front, rear, count;

public:
    Queue() : front(0), rear(-1), count(0) {}

    bool isEmpty() const { return count == 0; }

    void enqueue(int value) {
        if (count >= 100) { cout << "Queue full\n"; return; }
        rear = (rear + 1) % 100;
        data[rear] = value;
        count++;
    }

    int dequeue() {
        if (isEmpty()) { cout << "Queue empty\n"; return -1; }
        int value = data[front];
        front = (front + 1) % 100;
        count--;
        return value;
    }
};

int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout << "Dequeue: " << q.dequeue() << endl;
    cout << "Dequeue: " << q.dequeue() << endl;

    q.enqueue(4);
    cout << "Dequeue: " << q.dequeue() << endl;
    cout << "Dequeue: " << q.dequeue() << endl;

    return 0;
}

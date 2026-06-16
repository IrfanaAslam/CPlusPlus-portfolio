/*
Program: Singly Linked List
Concepts: pointers, dynamic nodes, insertion/deletion/reversal
Time Complexity: O(n) traversal, O(1) head insert
Author: Irfana Aslam
*/
#include <iostream>
using namespace std;

struct Node {
    int value;
    Node *next;
    Node(int v) : value(v), next(nullptr) {}
};

class LinkedList {
private:
    Node *head;

public:
    LinkedList() : head(nullptr) {}

    void pushFront(int value) {
        Node *node = new Node(value);
        node->next = head;
        head = node;
    }

    void pushBack(int value) {
        Node *node = new Node(value);
        if (!head) { head = node; return; }
        Node *cur = head;
        while (cur->next) cur = cur->next;
        cur->next = node;
    }

    void reverse() {
        Node *prev = nullptr, *cur = head;
        while (cur) {
            Node *next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        head = prev;
    }

    void print() const {
        Node *cur = head;
        while (cur) {
            cout << cur->value << " -> ";
            cur = cur->next;
        }
        cout << "nullptr" << endl;
    }

    ~LinkedList() {
        Node *cur = head;
        while (cur) {
            Node *next = cur->next;
            delete cur;
            cur = next;
        }
    }
};

int main() {
    LinkedList list;
    list.pushBack(1);
    list.pushBack(2);
    list.pushBack(3);
    list.pushFront(0);

    cout << "List: ";
    list.print();

    list.reverse();
    cout << "Reversed: ";
    list.print();

    return 0;
}

/*
Program: Binary Search Tree
Concepts: recursion, tree traversal (in-order)
Time Complexity: O(log n) average insert/search, O(n) worst case
Author: Irfana Aslam
*/
#include <iostream>
using namespace std;

struct Node {
    int value;
    Node *left, *right;
    Node(int v) : value(v), left(nullptr), right(nullptr) {}
};

class BST {
private:
    Node *root;

    Node* insert(Node *node, int value) {
        if (!node) return new Node(value);
        if (value < node->value) node->left = insert(node->left, value);
        else node->right = insert(node->right, value);
        return node;
    }

    bool search(Node *node, int value) const {
        if (!node) return false;
        if (node->value == value) return true;
        return value < node->value ? search(node->left, value) : search(node->right, value);
    }

    void inOrder(Node *node) const {
        if (!node) return;
        inOrder(node->left);
        cout << node->value << " ";
        inOrder(node->right);
    }

public:
    BST() : root(nullptr) {}

    void insert(int value) { root = insert(root, value); }
    bool search(int value) const { return search(root, value); }
    void printInOrder() const { inOrder(root); cout << endl; }
};

int main() {
    BST tree;
    for (int v : {50, 30, 70, 20, 40, 60, 80})
        tree.insert(v);

    cout << "In-order traversal: ";
    tree.printInOrder();

    cout << "Search 40: " << (tree.search(40) ? "found" : "not found") << endl;
    cout << "Search 99: " << (tree.search(99) ? "found" : "not found") << endl;

    return 0;
}

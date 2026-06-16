/*
Program: Hash Table (custom implementation)
Concepts: hashing, separate chaining for collision resolution
Time Complexity: O(1) average insert/search
Author: Irfana Aslam
*/
#include <iostream>
#include <vector>
#include <list>
using namespace std;

class HashTable {
private:
    static const int BUCKETS = 16;
    vector<list<pair<string, int>>> table;

    int hash(const string &key) const {
        int h = 0;
        for (char c : key) h = (h * 31 + c) % BUCKETS;
        return h;
    }

public:
    HashTable() : table(BUCKETS) {}

    void insert(const string &key, int value) {
        int idx = hash(key);
        for (auto &kv : table[idx]) {
            if (kv.first == key) { kv.second = value; return; }
        }
        table[idx].push_back({key, value});
    }

    bool get(const string &key, int &value) const {
        int idx = hash(key);
        for (const auto &kv : table[idx]) {
            if (kv.first == key) { value = kv.second; return true; }
        }
        return false;
    }
};

int main() {
    HashTable ht;
    ht.insert("apple", 1);
    ht.insert("banana", 2);
    ht.insert("cherry", 3);

    int value;
    if (ht.get("banana", value))
        cout << "banana -> " << value << endl;

    if (!ht.get("durian", value))
        cout << "durian not found" << endl;

    return 0;
}

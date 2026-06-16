/*
Program: Map/Set Demo
Concepts: std::map, std::set, word frequency counting
Author: Irfana Aslam
*/
#include <iostream>
#include <map>
#include <set>
#include <sstream>
using namespace std;

int main() {
    string text = "the quick brown fox jumps over the lazy dog the fox runs";
    map<string, int> wordCount;
    set<string> uniqueWords;

    stringstream ss(text);
    string word;
    while (ss >> word) {
        wordCount[word]++;
        uniqueWords.insert(word);
    }

    cout << "Word frequencies:\n";
    for (const auto &pair : wordCount)
        cout << pair.first << ": " << pair.second << endl;

    cout << "Unique word count: " << uniqueWords.size() << endl;

    return 0;
}

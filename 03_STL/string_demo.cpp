/*
Program: String Demo
Concepts: std::string manipulation
Author: Irfana Aslam
*/
#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(string s) {
    string clean;
    for (char c : s)
        if (isalpha(c)) clean += tolower(c);

    string reversed = clean;
    reverse(reversed.begin(), reversed.end());
    return clean == reversed;
}

int main() {
    string s = "Madam, I'm Adam";
    cout << s << " is " << (isPalindrome(s) ? "" : "not ") << "a palindrome" << endl;

    string name = "irfana aslam";
    transform(name.begin(), name.end(), name.begin(), ::toupper);
    cout << "Uppercase: " << name << endl;

    return 0;
}

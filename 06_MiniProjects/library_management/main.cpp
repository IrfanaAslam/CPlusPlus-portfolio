/*
Program: Library Management System
Concepts: classes, STL containers, menu-driven console app, file handling
Author: Irfana Aslam
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool borrowed;
};

class Library {
private:
    vector<Book> books;
    int nextId = 1;

public:
    void addBook(const string &title, const string &author) {
        books.push_back({nextId++, title, author, false});
        cout << "Added: " << title << endl;
    }

    void listBooks() const {
        cout << "\n--- Library Catalog ---\n";
        for (const auto &b : books) {
            cout << b.id << ". " << b.title << " by " << b.author
                 << (b.borrowed ? " [borrowed]" : " [available]") << endl;
        }
    }

    bool borrowBook(int id) {
        for (auto &b : books) {
            if (b.id == id && !b.borrowed) { b.borrowed = true; return true; }
        }
        return false;
    }

    bool returnBook(int id) {
        for (auto &b : books) {
            if (b.id == id && b.borrowed) { b.borrowed = false; return true; }
        }
        return false;
    }

    void saveToFile(const string &filename) const {
        ofstream out(filename);
        for (const auto &b : books)
            out << b.id << "," << b.title << "," << b.author << "," << b.borrowed << "\n";
    }
};

int main() {
    Library lib;
    lib.addBook("The Pragmatic Programmer", "David Thomas");
    lib.addBook("Introduction to Algorithms", "Cormen et al.");
    lib.addBook("Clean Code", "Robert Martin");

    lib.listBooks();

    lib.borrowBook(2);
    cout << "\nAfter borrowing book 2:\n";
    lib.listBooks();

    lib.returnBook(2);
    cout << "\nAfter returning book 2:\n";
    lib.listBooks();

    lib.saveToFile("library_catalog.csv");
    cout << "\nCatalog saved to library_catalog.csv" << endl;

    return 0;
}

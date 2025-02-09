#include "library.h"
#include <iostream>

using namespace std;

void Library::addBook() {
    Book newBook;
    cout << "Enter Book ID: ";
    cin >> newBook.id;
    cin.ignore();
    cout << "Enter Book Title: ";
    getline(cin, newBook.title);
    cout << "Enter Author Name: ";
    getline(cin, newBook.author);
    books.push_back(newBook);
    cout << "Book added successfully!\n";
}

void Library::displayBooks() const {
    if (books.empty()) {
        cout << "No books available.\n";
        return;
    }
    cout << "Book List:\n";
    for (const auto& book : books) {
        cout << "ID: " << book.id << ", Title: " << book.title << ", Author: " << book.author << "\n";
    }
}

void Library::searchBook() const {
    string keyword;
    cout << "Enter book title to search: ";
    cin.ignore();
    getline(cin, keyword);

    bool found = false;
    for (const auto& book : books) {
        if (book.title.find(keyword) != string::npos) {
            cout << "Found: ID: " << book.id << ", Title: " << book.title << ", Author: " << book.author << "\n";
            found = true;
        }
    }
    if (!found) {
        cout << "No matching books found.\n";
    }
}

void Library::deleteBook() {
    int bookId;
    cout << "Enter Book ID to delete: ";
    cin >> bookId;

    for (auto it = books.begin(); it != books.end(); ++it) {
        if (it->id == bookId) {
            books.erase(it);
            cout << "Book deleted successfully.\n";
            return;
        }
    }
    cout << "Book not found.\n";
}

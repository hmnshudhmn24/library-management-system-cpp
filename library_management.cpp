#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Book {
    int id;
    string title;
    string author;
};

vector<Book> books;

void addBook() {
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

void displayBooks() {
    if (books.empty()) {
        cout << "No books available.\n";
        return;
    }
    cout << "Book List:\n";
    for (const auto& book : books) {
        cout << "ID: " << book.id << ", Title: " << book.title << ", Author: " << book.author << "\n";
    }
}

void searchBook() {
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

void deleteBook() {
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

int main() {
    int choice;
    do {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n2. Display Books\n3. Search Book\n4. Delete Book\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: deleteBook(); break;
            case 5: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}

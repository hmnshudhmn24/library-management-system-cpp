#include "library.h"
#include <iostream>

using namespace std;

int main() {
    Library library;
    int choice;

    do {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n2. Display Books\n3. Search Book\n4. Delete Book\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: library.addBook(); break;
            case 2: library.displayBooks(); break;
            case 3: library.searchBook(); break;
            case 4: library.deleteBook(); break;
            case 5: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}

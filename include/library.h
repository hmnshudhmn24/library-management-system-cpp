#ifndef LIBRARY_H
#define LIBRARY_H

#include "book.h"
#include <vector>

class Library {
private:
    std::vector<Book> books;

public:
    void addBook();
    void displayBooks() const;
    void searchBook() const;
    void deleteBook();
};

#endif // LIBRARY_H

# Library Management System

A simple **C++ Library Management System** that allows users to:

- Add books
- Display books
- Search for books by title
- Delete books

## Project Structure
```
LibraryManagementSystem/
│── include/
│   ├── book.h
│   ├── library.h
│── src/
│   ├── book.cpp
│   ├── library.cpp
│── main.cpp
│── README.md
```

## How to Compile and Run
1. Open a terminal and navigate to the project directory.
2. Compile the project using:
   ```sh
   g++ main.cpp src/library.cpp -o library_management
   ```
3. Run the executable:
   ```sh
   ./library_management
   ```

## Requirements
- C++ compiler (GCC, Clang, MSVC)

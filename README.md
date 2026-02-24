📚 Library Management System in C

A console-based Library / Book Management System developed in C language by Varun Mangwani.
This project demonstrates practical implementation of core C programming concepts including structures, arrays, string handling, and menu-driven program design.


---

🚀 Project Overview

This system manages a collection of books using an array of structures.
It allows users to:

📖 Display all available books

🔍 Search book by name (case-insensitive)

➕ Insert a new book with preview & update option

🧾 View formatted book details (ID, Name, Author, Quantity, Price)


The program runs in an infinite menu loop and provides a clean CLI-based interface.


---

🛠 Concepts Used

struct for Book data modeling

Array of structures (book b[150])

String handling (fgets, strcpy, strcasecmp)

Input buffer handling

Menu-driven programming

Conditional statements & loops

Basic validation logic



---

📂 Data Structure

typedef struct
{
    int id;
    char book_name[50];
    char book_auth[50];
    int quantity;
    int price;
} book;


---

⚙️ How to Compile & Run

Compile:

gcc library.c -o library

Run:

./library

> Note: system("clear") works on Linux/macOS.
For Windows, replace it with system("cls").




---

📌 Features

Preloaded 50 books

Dynamic book count tracking

Case-insensitive search

Book preview before final submission

Formatted tabular display



---

🎯 Ideal For

BCA / BSc IT students

C programming practice

Mini project submission

Understanding structures and string handling



---

🏷 Keywords

Library Management System in C, Book Management Project, C Mini Project, Console Based Library System, Structures in C, BCA C Project.


---

👨‍💻 Author

Varun Mangwani
Student | C Programmer | Developer in Progress

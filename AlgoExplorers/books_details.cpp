#include "books_details.h"

void displayBookDetails(const Book& book) {
    cout << "ID: " << book.num
        << ", Title: " << book.name
        << ", Author: " << book.author
        << ", Status: " << (book.isIssued ? "Issued" : "Available")
        << endl;
}
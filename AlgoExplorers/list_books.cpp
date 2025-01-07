#include "list_books.h"
#include "struct_books.h"
#include "books_details.h"
#include <algorithm>
#include <iostream>
using namespace std;

void listAllBooks() {
    sort(books.begin(), books.end(), [=](const Book& a, const Book& b) {
        return a.name < b.name;
        });

    for (const auto& book : books) {
        displayBookDetails(book);
    }
}
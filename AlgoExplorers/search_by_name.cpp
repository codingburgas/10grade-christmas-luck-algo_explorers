#include "search_by_name.h"
#include "struct_books.h"
#include "books_details.h"
#include <iostream>
#include <vector>
using namespace std;

void searchBookByName(string name) {
    for (const auto& book : books) {
        if (book.name == name) {
            displayBookDetails(book);
            return;
        }
    }
    cout << "Book not found." << endl;
}

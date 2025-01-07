#include "delete_book.h"

void deleteBook(int num) {
    auto it = std::remove_if(books.begin(), books.end(), [num](const Book& book) {
        return book.num == num;
        });

    if (it != books.end()) {
        books.erase(it, books.end());
        std::cout << "Book deleted." << std::endl;
    }
    else {
        std::cout << "Book not found." << std::endl;
    }
}
#include "add_book.h"

void addBook(int num, string name, string author)
{
    books.push_back(Book(num, name, author));
}
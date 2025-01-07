#include "search_by_number.h"
#include "struct_books.h"
#include "find_by_number.h"
#include "books_details.h"
#include <iostream>
#include <vector>
using namespace std;

void searchBookByNum(int num) {
    int number = findBookNumberByNum(num);
    if (number != -1) {
        displayBookDetails(books[number]);
    }
    else {
        cout << "Book not found." << endl;
    }
}

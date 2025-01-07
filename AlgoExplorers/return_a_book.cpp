#include "return_a_book.h"
#include "struct_books.h"
#include "find_by_number.h"
#include <iostream>
#include <vector>
using namespace std;

void returnBook(int num) {
    int number = findBookNumberByNum(num);
    if (number != -1 && books[number].isIssued) {
        books[number].isIssued = false;
        cout << "Book returned." << endl;
    }
    else {
        cout << "Book is either not found or wasn't issued." << endl;
    }
}

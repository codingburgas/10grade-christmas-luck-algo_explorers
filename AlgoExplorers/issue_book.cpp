#include "issue_book.h"
#include "struct_books.h"
#include "find_by_number.h"
#include <iostream>
#include <vector>
using namespace std;

void issueBook(int num, string user) {
    int number = findBookNumberByNum(num);
    if (number != -1 && !books[number].isIssued) {
        books[number].isIssued = true;
        cout << "Book issued to " << user << "." << endl;
    }
    else {
        cout << "Book is either not found or already issued." << endl;
    }
}
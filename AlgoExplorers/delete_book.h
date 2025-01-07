#pragma once
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include"find_by_number.h"
using namespace std;

void deleteBook(int num) {
    int number = findBookNumberByNum(num);
    if (number != -1) {
        books.erase(books.begin() + number);
        cout << "Book deleted." << endl;
    }
    else {
        cout << "Book not found." << endl;
    }
}
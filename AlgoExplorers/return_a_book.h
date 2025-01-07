#pragma once
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

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

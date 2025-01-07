#pragma once
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

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
#pragma once
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include"struct_books.h"
using namespace std;


void displayBookDetails(const Book&  book) {
    cout << "ID: " << book.num << ", Title: " << book.name
        << ", Author: " << book.author
        << ", Status: " << (book.isIssued ? "Issued" : "Available") << endl;
}
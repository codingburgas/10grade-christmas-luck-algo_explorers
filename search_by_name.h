#pragma once
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

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
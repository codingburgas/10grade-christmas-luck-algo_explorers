#pragma once
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

void searchBookByNum(int num) 
{
    int number = findBookNumberByNum(num);
    if (number != -1) {
        displayBookDetails(books[number]);
    }
    else {
        cout << "Book not found." << endl;
    }
}
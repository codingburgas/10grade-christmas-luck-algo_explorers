#pragma once
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

void listAllBooks()
{
    sort(books.begin(), books.end(), [](const Book& a, const Book& b) {
        return a.name < b.name;
        });
    for (const auto& book : books) {
        displayBookDetails(book);
    }
}

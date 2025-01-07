#pragma once
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

void addBook(int num, string name, string author)
{
    books.push_back(Book(num, name, author));
}
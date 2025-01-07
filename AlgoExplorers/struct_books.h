#pragma once
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

struct Book
{
	string name;
	int num;
	string author;
		bool isIssued;

	Book(int book_num, string book_name, string book_author) : num(book_num), name(book_name), author(book_author), isIssued(false) {}
};
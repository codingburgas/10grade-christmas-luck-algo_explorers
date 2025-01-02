#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;


	vector<Book> books;
	int findBookNumberByNum(int num)
	{
		for (size_t i = 0; i < books.size(); i++)
		{
			if (books[i].num == num)
			{
				return 1;
			}
		}
		return -1;
	}


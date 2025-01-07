#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include "add_book.h"
#include "books_details.h"
#include "delete_book.h"
#include "find_by_number.h"
#include "issue_book.h"
#include "list_books.h"
#include "return_a_book.h"
#include "search_by_name.h"
#include "search_by_number.h"
#include "struct_books.h"

using namespace std;

int main() {
   
    int choice, num;
    string name, author, user;

    do {
        cout << endl;
        cout << "Library Management System" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Search Book by Number" << endl;
        cout << "3. Search Book by Name" << endl;
        cout << "4. Issue Book" << endl;
        cout << "5. Return Book" << endl;
        cout << "6. List All Books" << endl;
        cout << "7. Delete Book" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter book number: ";
            cin >> num;
            cin.ignore();
            cout << "Enter book name: ";
            getline(cin, name);
            cout << "Enter book author: ";
            getline(cin, author);
            addBook(num, name, author);
            break;
        case 2:
            cout << "Enter book number: ";
            cin >> num;
            searchBookByNum(num);
            break;
        case 3:
            cin.ignore();
            cout << "Enter book name: ";
            getline(cin, name);
            searchBookByName(name);
            break;
        case 4:
            cout << "Enter book number: ";
            cin >> num;
            cin.ignore();
            cout << "Enter user name: ";
            getline(cin, user);
            issueBook(num, user);
            break;
        case 5:
            cout << "Enter book number: ";
            cin >> num;
            returnBook(num);
            break;
        case 6:
            listAllBooks();
            break;
        case 7:
            cout << "Enter book number: ";
            cin >> num;
           deleteBook(num);
            break;
        case 8:
            cout << "Exiting system." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 8);

    return 0;
}
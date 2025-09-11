#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;
    bool hasBook = false; 

    cout << "=== Welcome to the Library ===\n";

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Borrow a book\n";
        cout << "2. Read a book inside library\n";
        cout << "3. Return a book\n";
        cout << "4. Exit\n";
        cout << "Your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (!hasBook) {
                string book;
                cout << "Enter book title: ";
                cin.ignore();             
                getline(cin, book);
                cout << "You borrowed \"" << book << "\".\n";
                hasBook = true;
            }
            else {
                cout << "You already borrowed a book. Return it first.\n";
            }
        }
        else if (choice == 2) {
            cout << "You are reading a book inside the library...\n";
        }
        else if (choice == 3) {
            if (hasBook) {
                cout << "Book returned successfully.\n";
                hasBook = false;
            }
            else {
                cout << "You don’t have a borrowed book to return.\n";
            }
        }
        else if (choice == 4) {
            cout << "Thank you for visiting the library!\n";
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}



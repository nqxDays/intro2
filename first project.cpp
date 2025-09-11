#include <iostream>
using namespace std;

int main() {
    int pin = 1234;   
    int userPin;
    int balance = 1000; 
    int choice;

    cout << "Insert your card...\n";
    cout << "Enter PIN: ";
    cin >> userPin;

    if (userPin != pin) {
        cout << "Wrong PIN. Card blocked.\n";
        return 0;
    }

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. View balance\n";
        cout << "2. Withdraw money\n";
        cout << "3. Exit\n";
        cout << "Your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Balance: " << balance << " UAH\n";
        }
        else if (choice == 2) {
            int amount;
            cout << "Enter amount: ";
            cin >> amount;
            if (amount <= balance && amount > 0) {
                balance -= amount;
                cout << "Withdrawn " << amount << " UAH. New balance: " << balance << " UAH\n";
            }
            else {
                cout << "Not enough money or invalid amount!\n";
            }
        }
    } while (choice != 3);

    cout << "Thank you! Card returned.\n";
    return 0;
}



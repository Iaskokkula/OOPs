#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    double balance;

public:
    // Constructor for initialization
    BankAccount(string n, int accNo, double bal) {
        name = n;
        accountNumber = accNo;
        balance = bal;
    }

    // Deposit money
    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
        else
            cout << "Invalid deposit amount!" << endl;
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount <= balance && amount > 0)
            balance -= amount;
        else
            cout << "Invalid or Insufficient funds!" << endl;
    }

    // Display account details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: ₹" << balance << endl;
    }
};


int main() {
    BankAccount acc("Sai", 12345, 5000);
    acc.display();

    acc.deposit(1500);
    acc.withdraw(2000);
    acc.display();

    acc.withdraw(6000); // Invalid case
    return 0;
}

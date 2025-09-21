#include <iostream>
using namespace std;

// 1. Class & Object + 3. Encapsulation & Abstraction
class BankAccount {
protected:  // Used for Inheritance
    string owner;
    int accountNumber;
    double balance;

public:
    // 2. Constructor
    BankAccount(string name, int accNo, double initialBalance) {
        owner = name;
        accountNumber = accNo;
        balance = initialBalance;
    }
    
    // Getter to show account details (Abstraction)
    void showAccountDetails() {
        cout << "Account Holder: " << owner << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << " USD" << endl;
    }
    
    // Deposit function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << " USD. New Balance: " << balance << " USD" << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
    
    // Withdrawal function
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << " USD. New Balance: " << balance << " USD" << endl;
        } else {
            cout << "Invalid or insufficient balance!" << endl;
        }
    }
};

// 5. Inheritance
class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    // Constructor calling base class constructor
    SavingsAccount(string name, int accNo, double initialBalance, double rate)
        : BankAccount(name, accNo, initialBalance) {
        interestRate = rate;
    }

    // Function to add interest
    void addInterest() {
        double interest = balance * (interestRate / 100);
        balance += interest;
        cout << "Interest Added: " << interest << " USD. New Balance: " << balance << " USD" << endl;
    }
};

int main() {
    // Creating a Savings Account object
    SavingsAccount myAccount("Jaan", 12345, 1000.0, 5.0);
    
    myAccount.showAccountDetails(); // Display account details
    myAccount.deposit(500);         // Deposit money
    myAccount.withdraw(300);        // Withdraw money
    myAccount.addInterest();        // Add interest
    myAccount.showAccountDetails(); // Display updated details
    
    return 0;
}

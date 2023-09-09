#include <iostream>

// Class representing a bank account
class BankAccount {
private:
    static int accountCount;
    int accountNumber;
    double balance;

public:
    BankAccount(double initialBalance) : accountNumber(++accountCount), balance(initialBalance) {}

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        }
    }

    void display() {
        std::cout << "Account Number: " << accountNumber << ", Balance: " << balance << std::endl;
    }
};

int BankAccount::accountCount = 0; // Initialize static member

int main() {
    BankAccount account1(1000);
    BankAccount account2(2000);

    account1.deposit(500);
    account2.withdraw(300);

    account1.display();
    account2.display();

    return 0;
}

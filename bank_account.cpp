#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(string holderName, double initialBalance) : accountHolder(holderName), balance(initialBalance) {}
    ~BankAccount() {}

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of $" << amount << " successful." << endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful." << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    void displayBalance() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account1("om", 1000.0);
    BankAccount account2("pranav", 500.0);

    cout << "Initial Account Details:" << endl;
    account1.displayBalance();
    account2.displayBalance();
    cout << endl;

    account1.deposit(500.0);
    account2.withdraw(200.0);

    cout << "Updated Account Details:" << endl;
    account1.displayBalance();
    account2.displayBalance();

    return 0;
}


#ifndef BANKINGSYSTEM_H
#define BANKINGSYSTEM_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Account {
private:
    int accountNumber;
    std::string name;
    double balance;

public:
    Account(int accNumber, std::string accName, double initialBalance) 
        : accountNumber(accNumber), name(accName), balance(initialBalance) {}

    int getAccountNumber() const { return accountNumber; }
    std::string getName() const { return name; }
    double getBalance() const { return balance; }

    void deposit(double amount) {
        balance += amount;
    }

    bool withdraw(double amount) {
        if (amount > balance) {
            std::cout << "Insufficient balance!\n";
            return false;
        }
        balance -= amount;
        return true;
    }

    void displayDetails() const {
        std::cout << "Account Number: " << accountNumber << "\n";
        std::cout << "Account Holder: " << name << "\n";
        std::cout << "Balance: $" << balance << "\n";
    }
};

class BankingSystem {
private:
    std::vector<Account> accounts;

public:
    void createAccount() {
        int accNumber;
        std::string accName;
        double initialDeposit;

        std::cout << "Enter account number: ";
        std::cin >> accNumber;
        std::cout << "Enter account holder's name: ";
        std::cin >> accName;
        std::cout << "Enter initial deposit: $";
        std::cin >> initialDeposit;

        Account newAccount(accNumber, accName, initialDeposit);
        accounts.push_back(newAccount);
        saveToFile(newAccount);

        std::cout << "Account created successfully!\n";
    }

    void depositMoney() {
        int accNumber;
        double amount;

        std::cout << "Enter account number: ";
        std::cin >> accNumber;

        Account* account = findAccount(accNumber);
        if (account) {
            std::cout << "Enter amount to deposit: $";
            std::cin >> amount;
            account->deposit(amount);
            std::cout << "Deposit successful!\n";
        }
    }

    void withdrawMoney() {
        int accNumber;
        double amount;

        std::cout << "Enter account number: ";
        std::cin >> accNumber;

        Account* account = findAccount(accNumber);
        if (account) {
            std::cout << "Enter amount to withdraw: $";
            std::cin >> amount;
            if (account->withdraw(amount)) {
                std::cout << "Withdrawal successful!\n";
            }
        }
    }

    void viewAccount() {
        int accNumber;

        std::cout << "Enter account number: ";
        std::cin >> accNumber;

        Account* account = findAccount(accNumber);
        if (account) {
            account->displayDetails();
        }
    }

    Account* findAccount(int accNumber) {
        for (auto& account : accounts) {
            if (account.getAccountNumber() == accNumber) {
                return &account;
            }
        }
        std::cout << "Account not found!\n";
        return nullptr;
    }

    void saveToFile(const Account& account) {
        std::ofstream outFile("accounts.txt", std::ios::app);
        if (outFile.is_open()) {
            outFile << account.getAccountNumber() << " " << account.getName() << " " << account.getBalance() << "\n";
            outFile.close();
        }
    }
};

#endif

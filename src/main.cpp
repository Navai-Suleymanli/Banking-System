#include <iostream>
#include <fstream>
#include "BankingSystem.h"

int main() {
    BankingSystem bank;
    int choice;

    while (true) {
        std::cout << "\n=== Simple Banking System ===\n";
        std::cout << "1. Create Account\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. View Account Details\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            bank.createAccount();
            break;
        case 2:
            bank.depositMoney();
            break;
        case 3:
            bank.withdrawMoney();
            break;
        case 4:
            bank.viewAccount();
            break;
        case 5:
            std::cout << "Exiting...\n";
            exit(0);
        default:
            std::cout << "Invalid choice! Please select a valid option.\n";
        }
    }
    return 0;
}

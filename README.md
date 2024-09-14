#Banking System

Welcome to the **Simple Banking System**, a C++ project demonstrating object-oriented programming concepts and file handling techniques. This project allows users to perform basic banking operations such as creating an account, depositing money, withdrawing money, and viewing account details, all while persisting account data into a file.

## Features
- **Account Creation:** Users can create new accounts with unique account numbers and initial deposits.
- **Deposit Money:** Users can deposit money into their accounts.
- **Withdraw Money:** Users can withdraw money, with balance checks to prevent overdraft.
- **View Account Details:** Users can retrieve details of their accounts, including balance and account holder information.
- **Data Persistence:** All account information is saved to a file (`accounts.txt`) for persistence.

## Project Structure
```bash
SimpleBankingSystem/
│
├── src/
│   ├── main.cpp           # Main entry point for the banking system
│   └── BankingSystem.h    # Contains class definitions for Account and BankingSystem
│
├── README.md              # This file
├── LICENSE (optional)     # License file (if needed)
└── .gitignore             # To ignore unnecessary files

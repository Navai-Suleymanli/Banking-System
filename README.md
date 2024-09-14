# Simple Banking System

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

How to Run
Clone the repository:
bash

git clone https://github.com/Navai-Suleymanli/SimpleBankingSystem.git
Navigate into the project directory:
bash

cd SimpleBankingSystem
Compile the program using the following command:
bash

g++ src/main.cpp -o bank_system
Run the program:
bash

./bank_system
Future Improvements
This project can be extended by adding:

Authentication System: Implement login functionality for added security.
Account Deletion: Allow users to delete their accounts.
Graphical User Interface (GUI): Add a user-friendly GUI to enhance usability.
Contributions
Contributions are welcome! Feel free to open issues, suggest improvements, or submit pull requests.

License
This project is open-source and available under the MIT License.

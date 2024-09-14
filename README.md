## Banking System

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
```

## How to Run

1. **Clone the repository**:
   First, clone this repository to your local machine using Git.
   ```bash
   git clone https://github.com/Navai-Suleymanli/SimpleBankingSystem.git
   ```

2. **Navigate into the project directory**:
   Go to the folder where the project files are located.
   ```bash
   cd SimpleBankingSystem
   ```

3. **Compile the program**:
   Use `g++` or any other C++ compiler to compile the program. The following command compiles the project:
   ```bash
   g++ src/main.cpp -o bank_system
   ```

4. **Run the compiled program**:
   After compiling, run the executable to start the banking system:
   ```bash
   ./bank_system
   ```

5. **Interact with the program**:
   Follow the menu prompts to:
   - Create new accounts.
   - Deposit or withdraw money.
   - View account details.

## Future Improvements
This project can be extended by adding:
- **Authentication System:** Implement login functionality for added security.
- **Account Deletion:** Allow users to delete their accounts.
- **Graphical User Interface (GUI):** Add a user-friendly GUI to enhance usability.

## Contributions
Contributions are welcome! Feel free to open issues, suggest improvements, or submit pull requests.


## Author
Developed by [Navai Suleymanli](https://github.com/Navai-Suleymanli).

#include <iostream>

// Encapsulated Class
class BankAccount {
private:
  double balance; // Private attribute to restrict direct access

public:
  // Constructor to initialize balance
  BankAccount(double initialBalance) : balance(initialBalance) {}

  // Method to deposit money
  void deposit(double amount) {
    if (amount > 0) {
      balance += amount;
      std::cout << "Deposited: $" << amount << std::endl;
    } else {
      std::cout << "Invalid deposit amount." << std::endl;
    }
  }

  // Method to withdraw money
  bool withdraw(double amount) {
    if (amount > 0 && balance >= amount) {
      balance -= amount;
      std::cout << "Withdrew: $" << amount << std::endl;
      return true;
    } else {
      std::cout << "Insufficient funds or invalid amount." << std::endl;
      return false;
    }
  }

  // Method to check the balance
  double getBalance() const { return balance; }
};

int main() {
  BankAccount account(500.0); // Initialize account with $500
  account.deposit(150.0);     // Output: Deposited: $150
  account.withdraw(200.0);    // Output: Withdrew: $200
  std::cout << "Current Balance: $" << account.getBalance()
            << std::endl; // Output: Current Balance: $450

  // Attempt to withdraw more than the balance
  account.withdraw(600.0); // Output: Insufficient funds or invalid amount.

  return 0;
}

/*
Explanation:
- **Encapsulation:** The `BankAccount` class encapsulates the `balance`
attribute by making it `private`. Access to `balance` is controlled through
public methods `deposit()`, `withdraw()`, and `getBalance()`.
- **Data Integrity:** This ensures that the `balance` cannot be modified
directly, maintaining data integrity and preventing unauthorized access or
changes.
*/

#include <iostream>
using namespace std;


class BankAccount {
    
    private:
        double balance;

    public:
       
        BankAccount(double initial_balance) {
            balance = initial_balance;
        }

      
        void deposit(double amount) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }

       
        void withdraw(double amount) {
            if (amount > balance) {
                cout << "Insufficient funds." << endl;
            } else {
                balance -= amount;
                cout << "Withdrawn: " << amount << endl;
            }
        }

       
        void displayBalance() {
            cout << "Current balance: " << balance << endl;
        }
};


int main() {
    
    BankAccount myAccount(1000.0);  

    
    myAccount.deposit(500.0);
    myAccount.withdraw(300.0);
    myAccount.displayBalance();

    return 0;
}

#include <iostream>
#include <stdexcept> // For standard exceptions
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    BankAccount(double initial)
    {
        if (initial < 0)
            throw invalid_argument("Initial balance cannot be negative.");
        balance = initial;
    }

    void withdraw(double amount)
    {
        if (amount > balance)
            throw runtime_error("Insufficient balance.");
        balance -= amount;
    }

    void showBalance() const
    {
        cout << "Current Balance: rupees " << balance << endl;
    }
};

int main()
{
    try
    {
        BankAccount account(1000); // Valid initial balance
        account.showBalance();

        account.withdraw(500); // Valid
        account.showBalance();

        account.withdraw(600); // Will throw exception
    }
    catch (const exception &e)
    {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}

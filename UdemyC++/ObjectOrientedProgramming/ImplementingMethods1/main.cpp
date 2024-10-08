#include <iostream>
#include <string>

using namespace std;

class Account {
private:
    // attributes
    string name;
    double balance;
    
public:
    // mehtods
    // declared inline
    void set_balance(double bal) {balance = bal; }
    double get_balance() {return balance;}
    
    // methods will be declared outside the class declaration
    void set_name(string n);
    string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(string n) {
    name = n;
}

string Account::get_name() {
    return name;
}

bool Account::deposit(double amount) {
    // if verify amount
    balance += amount;
    return amount;
}

bool Account::withdraw(double amount) {
    if ( balance-amount >= 0) {
        balance -= amount;
        return true;
    } else {
        return false;
    }
}

int main() {
    Account mike_account;
    mike_account.set_name("Mike's Account");
    mike_account.set_balance(2500.0);
    
    if (mike_account.deposit(300.0))
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit not allowed" << endl;
    
    if (mike_account.withdraw(600.0))
        cout << "Withdraw OK" << endl;
    else
        cout << "Withdraw not allowed - Insufficient Funds" << endl;
        
    if (mike_account.withdraw(3000.0))
        cout << "Withdraw OK" << endl;
    else
        cout << "Withdraw not allowed - Insufficient Funds" << endl;
    
    return 0;
}
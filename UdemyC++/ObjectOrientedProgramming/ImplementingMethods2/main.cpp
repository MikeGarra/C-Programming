#include <iostream>
#include "Account.h"

using namespace std;

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
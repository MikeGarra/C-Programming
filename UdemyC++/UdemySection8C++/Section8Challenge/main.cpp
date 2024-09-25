/*Section 8 Challenge
 * 
 * For this program I will be using US dollars and cents
 * 
 * Wrie a Program that asks users to enter the following:
 * An integer representing the number of cents
 * 
 * You may assume that the number of cents entered is greater than or 
 * equal to zero
 * 
 * The program should then display how to provide that change to the user.
 * 
 * In the US:
 * 1 dollar is 100 cents
 * 1 quater is 25 cents
 * 1 dime is 10 cents
 * 1 nickel is 5 cents
 * 1 penny is 1 cent
 * 
 * Example:
 * 
 * User enters 92 cents
 * 
 * The program will provide the change as follows:
 * dollars: 0
 * quarters: 3
 * dimes: 1
 * nickels: 1
 * pennies: 2
 * 
 */

#include <iostream>

using namespace std;

int main() {
    
    const int dollars_value {100};
    const int quarters_value {25};
    const int dimes_value {10};
    const int nickels_value {5};
    
    int change {};
    
    cout << "Hello there! Please enter the amount of change in US currency " 
         << "that you want to be provided in the correct coin amount!" 
         << endl;
    cout << "Enter amount here: ";
    cin >> change;
    
    int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};
    
//    dollars = change / dollars_value;
//    balance = change - (dollars * dollars_value);
//    
//    quarters = balance / quarters_value;
//    balance -= quarters * quarters_value;
//    
//    dimes = balance / dimes_value;
//    balance -= dimes * dimes_value;
//    
//    nickels = balance / nickels_value;
//    balance -= nickels * nickels_value;
//    
//    pennies = balance;
    
//**Solution using the modulo operator**

    dollars = change / dollars_value;
    balance = change % dollars_value;
    
    quarters = balance / quarters_value;
    balance %= quarters_value;
    
    dimes = balance / dimes_value;
    balance %= dimes_value;
    
    nickels = balance / nickels_value;
    balance %= nickels_value;
    
    pennies = balance;
    
    cout << "Wow, you have a lot! Now let me calculate the exact change!" 
         << endl;
    
    cout << "\nYou can provide this change as follows: " << endl;
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;
    
    return 0;
}
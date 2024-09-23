#include <iostream>
#include <string>

using namespace std;

class Player {
public:
    // attributes
    string name;
    int health;
    int xp;
    
    // methods
    void talk(string text_to_say){
        cout << name << " says " << text_to_say << endl;
    }
    bool is_dead();
};

class Account{
public:
    // attributes
    string name;
    double balance;
    
    // methods
    bool deposit(double bal) {
        balance += bal;
        cout << "In deposit " << endl;
        return balance;
    }
    bool withdraw(double bal) {
        balance -= bal;
        cout << "In withdraw " << endl;
        return balance;
    }
};

int main() {
    Account mike_account;
    mike_account.name = "Mike's Account";
    mike_account.balance = 4000;
    mike_account.deposit(1200);
    mike_account.withdraw(2400);
    
    
    Player mike;
    mike.name = "Mike";
    mike.health = 100;
    mike.xp = 17;
    mike.talk("lets play some games!");
    
    
    // Done with a pointer (Showing two ways to dereference)
    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 65;
    enemy->xp = 9;
    enemy->talk("you can't possibly beat me");
    
    delete enemy;

    return 0;
}
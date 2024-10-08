#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
    // attributes
    string name {"Player"};
    int health {100};
    int xp {0};
    
    // methods
    void talk(string);
    bool is_dead();
};

class Account {
    // attributes
    string name {"Account"};
    double balance {0.0};
    
    // methods
    bool deposit(double);
    bool withdraw(double);
};

int main() {
    Account mike_account;
    Account joe_account;
    
    Player mike;
    Player hero;
    
    Player players[] {mike, hero};
    
    vector<Player> player_vec {mike};
    player_vec.push_back(hero);
    
    Player *enemy {nullptr};
    enemy = new Player;
    
    delete enemy;
    
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    std::string name;
    int health;
    int xp;
public:
    void set_name(std::string name_val){
        name = name_val;
    }

    // Overloaded Constructor
    Player() {
        cout << "No args constructor called" << endl;
    }
    Player(std::string name) {
        cout << "String arg constructor called" << endl;
    }
    Player(std::string name, int health, int xp) {
        cout << "Three agrs constructor called" << endl;
    }
    // Deconstructor
    ~Player() {
        cout << "Deconstructor called for " << name << endl;
    }
};

int main() {
    // Blocks of code created so that we can see that when the 
    // code goes out of the scope of the blocks the Deconstructor
    // is called for each block of code for the Player Class
{
    Player slayer;
    slayer.set_name("Slayer");
}

{
    Player mike;
    mike.set_name("Mike");
    Player hero("Hero");
    hero.set_name("Hero");
    Player villian("Villian", 88, 13);
    villian.set_name("Villian");
}

Player *enemy = new Player;
enemy->set_name("Enemy");

Player *level_boss = new Player("Level Boss", 1000, 300);
level_boss->set_name("Level Boss");

delete enemy;
delete level_boss;

    return 0;
}
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
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

Player::Player() 
    : name{"None"}, health{0}, xp{0} {
    // Below does the same as above just less lines used and more neat
    // name = "None";
    // health = 0;
    // xp = 0;
}

Player::Player(std::string name_val)
    : name{name_val}, health{0}, xp{0} {
    // name = name_val;
    // health = 0;
    // xp = 0;
}

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
//     name = name_val;
//     health = health_val;
//     xp = xp_val;
}

int main() {
    Player empty;
    Player mike{"Mike"};
    Player vilian{"Villian", 85, 13};

    return 0;
}
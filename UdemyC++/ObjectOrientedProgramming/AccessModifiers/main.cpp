#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    // attributes
    string name {"Player"};
    int health;
    int xp;
public:
    // methods
    void talk(string text_to_say) {
        cout << name << " says: " << text_to_say << endl;
    }
    bool is_dead();
};

int main() {
    Player mike;
    // mike.name = "Mike"; //Compiler error due to - PRIVATE ATTRIBUTE
    // cout << mike.health << endl; //Compiler error due to - PRIVATE ATTRIBUTE
    mike.talk("Help me take on the evil Demon Lord!");
    
    return 0;
}
#include <iostream>

using namespace std;

class Shallow {
private:
    int *data;
public:
    void set_data_value(int d) {*data = d;}
    int get_data_value() {return *data;}
    // Constructor
    Shallow(int d);
    // Copy Constructor
    Shallow(const Shallow &source);
    // Deconstructor
    ~Shallow();
};

Shallow::Shallow(int d) {
    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &source)
    : data(source.data) {
        cout << "Copy constructor - shallow copy" << endl;
    }

Shallow::~Shallow() {
    delete data;
    cout << "Destructor freeing data" << endl;
}

void display_shallow(Shallow s) {
    cout << s.get_data_value() << endl;
}

// When run through Debugger we see that the location of the pointer
// for obj1 becomes invalid and that when we copy obj1 to obj2 when 
// obj2 calls for obj1 both pointers are turned to 1000.
// The crash comes in when the destructor deletes both invalid datas
// of obj1 and obj2.

int main() {

    Shallow obj1{100};
    display_shallow(obj1);

    Shallow obj2{obj1};
    obj2.set_data_value(1000);

    return 0;
}
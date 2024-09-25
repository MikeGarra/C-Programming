#include <iostream>

using namespace std;

int main() {
    
    int num1 {10};
    //const int num1 {10} //Error assignment of read only variable 'num1'
    int num2 {20};
    
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    
    num1 = 100;
    //100 = num1; //100 is a literal
                  // Error: lvalue required as left operand of assignment
    
    cout << "\nnum1 is now " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    
    num1 = num2;
    
    cout << "\nnum1 is now " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    
    num1 = num2 = 1000;

    cout << "\nnum1 is now " << num1 << endl;
    cout << "num2 is now " << num2 << endl;
    
    //num1 = "Mike"; //Error due to trying to store a string into an integer
    
    cout << endl;
    return 0;
}
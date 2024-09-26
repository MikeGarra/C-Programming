#include <iostream>

using namespace std;

int main() {
    
//    int num {};
//    
//    cout << "Enter an integer: ";
//    cin >> num;
//    
//    if (num % 2 == 0) 
//        cout << "The number is even." << endl;
//    else 
//        cout << "The number is odd." << endl;
//        
//    //Conditional Operator - '?:'
//    cout << num << " is " << ((num % 2 == 0 ? "even" : "odd")) << endl;

    int num1{};
    int num2{};
    
    cout << "Enter two integers seperated by a space: ";
    cin >> num1 >> num2;
    
    if (num1 != num2) {
        cout << "largest: " << (num1 > num2 ? num1 : num2) << endl;
        cout << "smallest: " << (num1 < num2 ? num1 : num2) << endl;
    } else {
        cout << "The numbers are the same." << endl;
    }
    
    cout << endl;
    return 0;
}
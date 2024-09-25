#include <iostream>

using namespace std;

int main() {
    bool equal_result {false};
    bool not_equal_result {false};
    
    int num1{}, num2{};
    
    //Will display true/false instead of 1/0 for booleans
    cout << boolalpha;
    
    cout << "Enter two integers seperated by spaces: " << endl;
    cin >> num1 >> num2;
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);
    cout << "Comparision result (equal): " << equal_result << endl;
    cout << "Comparision result (not equal): " << not_equal_result 
         << endl;
    
    char char1{}, char2{};
    cout << "\nEnter a two characters seperated by spaces: " << endl;
    cin >> char1 >> char2;
    equal_result = (char1 == char2);
    not_equal_result = (char1 != char2);
    cout << "Comparision result (equal): " << equal_result << endl;
    cout << "Comparision result (not equal): " << not_equal_result
         << endl;
    
    double double1{}, double2{};
    cout << "\nEnter a two doubles seperated by spaces: " << endl;
    cin >> double1 >> double2;
    equal_result = (double1 == double2);
    not_equal_result = (double1 != double2);
    cout << "Comparision result (equal): " << equal_result << endl;
    cout << "Comparision result (not equal): " << not_equal_result
         << endl;
    //When checking 11.0 and 10.999999999999999
    //We get true 
    //**Need a specific library that can distinguish that it is false
    
    cout << "\nEnter an integer and a double seperated by spaces: " << endl;
    cin >> num1 >> double2;
    equal_result = (num1 == double2);
    not_equal_result = (num1 != double2);
    cout << "Comparision result (equal): " << equal_result << endl;
    cout << "Comparision result (not equal): " << not_equal_result
         << endl;
    
    return 0;
}
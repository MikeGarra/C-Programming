/*Section 8:
 * Mixed Type Expressions
 * 
 * Ask the user to enter 3 integers
 * Calculate the sum of the intgers then
 * calculate tthe average of the 3 integers.
 * 
 * Display the 3 integers entered
 * the sum of the 3 integers and 
 * the average of the 3 integers
*/

#include <iostream>

using namespace std;

int main() {
    
    int total {0};
    int num1 {0}, num2 {0}, num3 {0};
    const int count {3};
    
    cout << "Hello! Please enter 3 numbers seperated by spaces: " << endl;
    cin >> num1 >> num2 >> num3;
    
    cout << "\nThank you! Now let me make some calculations." << endl;
    total = num1 + num2 + num3;
    
    double average{0.0};
    
    //Converts the variable 'total' into a double
    average = static_cast<double>(total) / count;
    // 'average = (double)total/count;' - Old C++ Style not Modern C++
    
    cout << "The three numbers: " << num1 << ", " << num2 << ", " 
         << num3 << endl;
    cout << "The sum of the 3 numbers is : " << total << endl;
    cout << "The average of the 3 numbers is: " << average << endl;
    
    cout << endl;
    return 0;
}
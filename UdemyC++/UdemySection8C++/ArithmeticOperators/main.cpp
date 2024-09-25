#include <iostream>

using namespace std;

int main() {
    
    int num1 {200};
    int num2 {100};
    
    cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
        
    int result {0};
    
    result = num1 + num2;
    cout << "\n" << num1 << " + " << num2 << " = " << result << endl;
    
    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;
    
    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;
    
    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;
    
    result = num2 / num1;
    cout << num2 << " / " << num1 << " = " << result << endl;
    
    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;
    
    int num3 = 10;
    int num4 = 3;
    
    result = num3 % num4;
    cout << num3 << " % " << num4 << " = " << result << endl;
    
    result = num3 * 10 + num4;
    cout << result << endl;
    
    cout << 5/10 << endl;
    cout << 5.0/10.0 << endl;
    
    cout << endl;
    
    return 0;
}
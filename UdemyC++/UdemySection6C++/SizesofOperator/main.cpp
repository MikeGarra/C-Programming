#include <iostream>
#include <climits>

using namespace std;

int main() {
    cout << "sizeof information:" << endl;
    cout << "=====================================" << endl;
    
    cout << "char: " << sizeof(char) << " bytes." << endl;
    cout << "int: " << sizeof(int) << " bytes." << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
    cout << "short: " << sizeof(short) << " bytes." << endl;
    cout << "long: " << sizeof(long) << " bytes." << endl;
    cout << "long long: " << sizeof(long long) << " bytes." << endl;
    
    cout << "=====================================" << endl;
    
    cout << "float: " << sizeof(float) << " bytes." << endl;
    cout << "double: " << sizeof(double) << " bytes." << endl;
    cout << "long double: " << sizeof(long double) << " bytes." << endl;
    
    // use values defined in <climits>
    cout << "=====================================" << endl;
    
    cout << "Minimum values:" << endl;
    cout << "char: " << CHAR_MIN << " bytes." << endl;
    cout << "int: " << INT_MIN << " bytes." << endl;
    cout << "short: " << SHRT_MIN << " bytes." << endl;
    cout << "long: " << LONG_MIN << " bytes." << endl;
    cout << "long long: " << LLONG_MIN << " bytes." << endl;
    
    cout << "=====================================" << endl;
    
    cout << "Maximum values:" << endl;
    cout << "char: " << CHAR_MAX << " bytes." << endl;
    cout << "int: " << INT_MAX << " bytes." << endl;
    cout << "short: " << SHRT_MAX << " bytes." << endl;
    cout << "long: " << LONG_MAX << " bytes." << endl;
    cout << "long long: " << LLONG_MAX << " bytes." << endl;
    
    cout << "=====================================" << endl;
    
    //sizeof can also be used with variable names
    cout << "sizeof using variable names:" << endl;
    int age {21};
    cout << "age is " << sizeof(age) << endl;
    //or 
    cout << "age is " << sizeof age << endl;
    
    double wage {22.24};
    cout << "wage is " << sizeof(wage) << endl;
    //or 
    cout << "wage is " << sizeof wage << endl;
    
    return 0;
}
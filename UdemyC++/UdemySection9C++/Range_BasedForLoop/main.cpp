#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    
    int scores [] {10, 20, 30};
    
    //'auto' allows for C++ to determine the variable type 
    //instead of placieg 'int', 'char', etc in the for parameters
    //'for (auto score : scores)' - displays the same as below
    for (int score : scores)
        cout << score <<endl;

//====================================================================
    
    vector<double> temperatures {87.9, 90.4, 89.2, 63.5};
    double avg_temp {0};
    double total {0};
    
    for (auto temp : temperatures)
        total += temp;
    
    if (temperatures.size() != 0) 
        avg_temp = total / temperatures.size();
    
    cout << fixed << setprecision(1);
    cout << "Average temperature is " << avg_temp << endl;

//=====================================================================

    for (auto val: {1,2,3,4,5})
        cout << val << endl;

    for (auto c: "This is a test")
//        if (c != ' ') //Does not display spaces from the string
//            cout << c;
        if (c == ' ') 
            cout << "\t";
        else 
            cout << c;
            
    cout << endl;
    return 0;
}
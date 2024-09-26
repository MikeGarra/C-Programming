#include <iostream>

using namespace std;

int main() {
    
    int num {};
    int min {10};
    int max {100};
    
    cout << "Please enter a number between " << min << " and " 
         << max << endl;
    cout << "Enter your number here: ";
    cin >> num;
    
    if (num >= min) {
        cout << "\n=================== if statement 1 ==================="
             << endl;
        cout << num << " is greater than or equal to the minimum number." 
             << endl;
        
        int diff {num - min};
        cout << num << " is " << diff << " greater than or equal to " 
             << min << endl;
    }
    
    if (num <= max) {
        cout << "\n=================== if statement 2 ==================="
             << endl;
        cout << num << " is less than or equal to the minimum number." 
             << endl;
        
        int diff {max - num};
        cout << num << " is " << diff << " less than or equal to " 
             << max << endl; 
    }
    
    if (num >= min && num <=max) {
        cout << "\n=================== if statement 3 ==================="
             << endl;
        cout << num << " is in range." << endl;
        cout << "This means statements 1 and 2 must display." << endl;
    }
    
    if (num == min || num == max) {
       cout << "\n=================== if statement 4 ==================="
            << endl;
       cout << num << " is right on the boundry." << endl;
       cout << "All 4 statements are true." << endl;
    
    }
    
    cout << endl;
    return 0;
}
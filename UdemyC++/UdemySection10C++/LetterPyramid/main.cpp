#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string entry {};
    
    //Prompt the user for input
    cout << "Hello! And welcome to the word pyramid creator!" << endl;
    cout << "Please enter a word or phrase: ";
    getline(cin, entry);
    
    int length = entry.length();
    
    //Loop throgh each level of the pyramid
    for (int i = 0; i < length; ++i) {
        //Print the leading spaces
        //'setw' sets the need number of indentation to center the pyramid
        cout << setw(length - i);
        
        //Print the ascending part
        for (int j = 0; j <= i; ++j) {
            cout << entry[j];
        }
        
        //Print the descending part
        for (int j = i - 1; j>= 0; --j) {
            cout << entry[j];
        }
        
        // move to next line
        cout << endl;
    }
    return 0;
}
/*
 * 
 * Ask the user what grade they expect on an exam and 
 * tell them what they need to score to get that grade.
 * 
 */

#include <iostream>

using namespace std;

int main() {
    
    char letter_grade {};
    
    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;
    
    switch (letter_grade) {
        case 'a':
        case 'A': 
            cout << "You need a 90 or above, study hard." << endl;
            break;
        case 'b':
        case 'B':
            cout << "You need an 80 to 89, go study." << endl;
            break;
        case 'c':
        case 'C':
            cout << "You need a 70 to 79 for an average grade." << endl;
            break;
        case 'd':
        case 'D':
            cout << "You should strive for a better grade." 
                 << " All you need is a 60 to 69." << endl;
            break;
        case 'f':
        case 'F':
        {
            char confirm{};
            cout << "Are you sure you want this grade? (Y/N): ";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y')
                cout << "Ok, I guess you do not want to study." << endl;
            else if (confirm =='n' || confirm == 'N')
                cout << "Good, go study" << endl;
            else
                cout << "Please choose between 'Y' or 'N'." << endl;
            break;
        }   
        default:
            cout << "That is not in the letter grade system." << endl;
    }
    
    cout << endl;
    return 0;
}
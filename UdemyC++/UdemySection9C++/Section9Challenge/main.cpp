/*Section 9 Challenge
 *
 * Using a collection of (list) of integers and allowing a user
 * to select options from a menu to perform operations on the list.
 * 
 * Menu should display to the user as follows:
 * 
 *  P - Print numbers
 *  A - Add a number
 *  M - Display mean of the numbers
 *  S - Display the smallest number 
 *  L - Display the largerst number
 *  Q - Quit
 * 
 *  Enter your choice:
 * 
 * The program should only accept valid choices from the user and
 * both upper and lowercase selections should be allowed.
 * If an illegal choice is made, the user will be prompted with 
 * "Uknown selection. Please try again." and the menu options will 
 * be displayed again.
 * 
 * If the user enters 'P' or 'p', all elements in the list are displayed.
 * If the list is empty, display "[] - the list is empty"
 * If list is not empty, list will be displayed inside '[]' with spaces.
 * 
 * If 'A' or 'a' is entered, the user will be prompted to add an integer.
 * That integer will be added to the list, and displayed saying " '5' added".
 * Duplicates of numbers are okay
 * 
 * If 'M' or 'm' is entered, the mean of the list will be calculated
 * displayed
 * If there are no numbers in the list display "Unable to calculate mean - no data
 * 
 * If 'S' or 's' is entered. display the smallest number
 * If list is empty display - "Smallest number unavailable, list is empty"
 * 
 * If 'L' or 'l' is entered. display the Largest number
 * If list is empty display - "Largest number unavailable, list is empty"
 *
 * If 'Q' or 'q' is entered, display "Goodbye" and program terminates
 */
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> num_list{};
    char entry {};
    
    do {
        cout << "Welcome! Are you ready to create a list of numbers?" << endl;
        cout << "Please look over the choices in the menu:" << endl;
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largerst number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nPlease enter your choice: " << endl;
        cin >> entry;
    
        if ( entry == 'P' || entry == 'p') {
            if(num_list.size() == 0)
                cout << "[] - The list is empty." << endl;
            else {
                cout << "[ ";
                for (auto num : num_list)
                    cout << num << " ";
                cout << " ]" << endl;
            }
        } else if (entry == 'A' || entry == 'a') {
            int num{};
            cout << "Please enter an integer to add to the list: ";
            cin >> num;
            num_list.push_back(num);
            cout << num << " has been added to the list." << endl;
        } else if (entry == 'M' || entry == 'm') {
            if(num_list.size() == 0)
                cout << "[] - The list is empty, unable to calculate mean." << endl;
            else {
                int total {};
                for (auto num : num_list) 
                    total += num;
                cout << "The mean is: " << static_cast<double>(total) / num_list.size() << endl;
            } 
        } else if (entry == 'S' || entry == 's') {
            if (num_list.size() == 0)
                cout << "Unable to determine the smallest, the list is empty." << endl;
            else {
                int smallest = num_list.at(0);
                for (auto num : num_list) 
                    if (num < smallest)
                        smallest = num;
                cout << "The smallest number is: " << smallest << endl;
            }
        } else if (entry == 'L' || entry == 'l') {
            if (num_list.size() == 0)
                cout << "Unable to determine the largest, the list is empty." << endl;
            else {
                int largest = num_list.at(0);
                for (auto num : num_list) 
                    if (num > largest)
                        largest = num;
                cout << "The largest number is: " << largest << endl;
            }
        } else if (entry == 'Q' || entry == 'q') {
            cout << "Goodbye, and thank you!" << endl;
        }else {
            cout << "Unknown entry, please try again." << endl;
            }
        
    } while (entry != 'Q' && entry != 'q');
    
    cout << endl;
    
    return 0;
}
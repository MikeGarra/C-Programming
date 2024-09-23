/*
    Michael's House Cleaning Service
    Charges $30 per room
    Sales taxe rate is 6%
    Estimates are valid for 30 Days
    
    Prompt the user for the number of rooms that need to be cleaned
    and provide and estimate such as:
    
    Estimate for house cleaning service:
    Number of rooms: 4
    Price per room: $35
    Cost: $140
    Tax: $8.4
    ==============================================
    Total Estimate: 148.4
    This estimate is good for 30 days
    
    Psuedocode:
        Prompt the user to enter how many rooms are needed to be cleaned
        Display the number of rooms
        Display the price per room
        
        Display cost: (number of rooms * price per room)
        Display tax: (number of rooms * price per room * tax rate)
        Display total estimate: (cost + tax)
        Display time of price experation
*/

#include <iostream>

using namespace std;

int main() {
    int num_rooms {0};
    const double cost_per_room {35.0};
    const double tax {0.06};
    const int estimate_expiry {30};
    
    cout << "Hello! And Welcome to Michael's House Cleaning Service!" << endl;
    cout << "\nHow many rooms do you need cleaned?" << endl;
    
    cin >> num_rooms;
    
    cout << "\nEstimate for Room Cleaning Service:" << endl;
    cout << "Number of rooms: " << num_rooms << endl;
    cout << "Cost per room: $" << cost_per_room << endl;
    
    cout << "Cost: $" << num_rooms * cost_per_room << endl;
    cout << "Tax: $" << num_rooms * cost_per_room * tax << endl;
    cout << "======================================" << endl;
    cout << "Total Estimated Cost: $" << (num_rooms * cost_per_room) + 
        (num_rooms * cost_per_room * tax) << endl;
    cout << "This estimate is good for " << estimate_expiry << " days." << endl;
    
    return 0;    
}
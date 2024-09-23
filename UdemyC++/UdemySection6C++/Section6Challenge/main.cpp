//Section 6
//Challenge

/*
 * Michael's House Cleaning Service 2.0
 * Charges:
 *  $25 per small room
 *  $30 per large room
 *Sale tax rate is 7%
 * Estimates are valid for 30 days
 * 
 * Prompt the user for number of small rooms and the number of large rooms
 * 
 * Estimate of Room Cleaning Service:
 * Number of small rooms: 3
 * Number of large rooms: 2
 * Price per small room: $25
 * Price per large room: $35
 * Cost: $145
 * Tax: $10.15
 * ========================================
 * Total estimate: $155.15
 * This estimate is good for 30 days. 
 */

#include <iostream>

using namespace std;

int main() {
    
    int small_rooms {0};
    int large_rooms {0};
    double price_small {25.0};
    double price_large {30.0};
    double tax {0.07};
    
    cout << "Hello! And Welcome to Michael's House Cleanig Service" << endl;
    
    cout << "How many small rooms were you looking to have cleaned?" << endl;
    cin >> small_rooms;
    
    cout << "How many large rooms were you looking to have cleaned?" << endl;
    cin >> large_rooms;
    
    cout << "Great! Let me just calculate the estimated price." << endl;
    cout << "Estimate for the House Cleaning Service:" << endl;
    
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    cout << "Price per small room: $" << price_small << endl;
    cout << "Price per large room: $" << price_large << endl;
    
    cout << "Cost: $" << (small_rooms * price_small) + (large_rooms * price_large)
         << endl;
         
    cout << "Tax: $" << ((small_rooms * price_small) + (large_rooms * price_large)) * tax
         << endl;
         
    cout << "===============================================" << endl;
    cout << "Total estimate: $" << ((small_rooms * price_small) + (large_rooms + price_large))
         + (((small_rooms * price_small) + (large_rooms + price_large)) * tax) << endl;
    cout << "Estimate is good for 30 days." << endl;
}
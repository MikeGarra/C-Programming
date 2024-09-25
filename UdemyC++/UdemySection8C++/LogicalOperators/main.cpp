#include <iostream>

using namespace std;

int main() {
    
    int num{0};
    const int lower{10};
    const int upper{20};
    
    cout << boolalpha;
    
    //Determine if an entered integer is between other integers
    //Assume lower < upper;
    cout << "Enter an integer between " << lower << " and " << upper
         << ": ";
    cin >> num;
    
    bool within_bounds{false};
    
    within_bounds = (num > lower && num < upper);
    cout << num << " is between " << lower << " and " << upper
         << ": " << within_bounds << endl;
    
    //Determine if an entered integer is outside other integers
    //Assume lower < upper;
    cout << "Enter an integer outside " << lower << " and " << upper
         << ": ";
    cin >> num;
    
    within_bounds = (num < lower || num > upper);
    cout << num << " is outside " << lower << " and " << upper
         << ": " << within_bounds << endl;
    
    //Determine if an entered integer is exactly on the boundry line
    //Assume lower < upper;
    cout << "Enter an integer as a boundry number " << lower 
         << " and " << upper << ": ";
    cin >> num;
    
    within_bounds = (num == lower || num == upper);
    cout << num << " is one of the bounds numbers " << lower << " and " 
         << upper << ": " << within_bounds << endl;
    
    //Determine if you need to wear a cout based on the temperature
    //and the wind speed.
    bool wear_coat{false};
    double temp{0};
    int wind_speed{0};
    
    const int wind_speed_for_coat{25};
    const double temp_for_coat{45};
    
    cout << "\nEnter the current temperature in (F): ";
    cin >> temp;
    cout << "Enter the windspeed in (MPH): ";
    cin >> wind_speed;
    
    wear_coat = (temp < temp_for_coat || wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using OR? " << wear_coat << endl;
    
    wear_coat = (temp < temp_for_coat && wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using AND? " << wear_coat << endl;
    return 0;
}
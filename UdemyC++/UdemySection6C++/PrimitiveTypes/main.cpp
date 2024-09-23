#include <iostream>

using namespace std;

int main() {
    //Character Type:
    //
    //*Single quotes show that this is a char type.
    //*Double quotes would show that it is a string type and pull an error.
    char middle_initial {'D'};
    cout << "My middile initial is " << middle_initial << "." << endl;
    
    //Integer Types:
    //
    unsigned short int exam_scores {55}; //Same as unsigned short exam_scores {55}; without the 'int'
    cout << "My exam score was " << exam_scores << "." << endl;
    
    int countries_represented {65};
    cout << "There were " << countries_represented <<
        " countries represented in my meeting." << endl;
        
    long people_in_florida {20610000};
    cout << "There are about " << people_in_florida << 
        " people in Florida." << endl;
    
    //With just a single 'long' the print would not be what is intended
    //long people_on_earth {7'600'000'000};
    long long people_on_earth {7'600'000'000};
    cout << "There are " << people_on_earth << " on earth." << endl;
        
    long long distance_to_alpha_centauri {9'461'000'000'000};
    cout << "The distance to alpha centauri is " << 
        distance_to_alpha_centauri << " kilometers." << endl;
        
    //Floating Point Types:
    //
    float car_payment {401.23};
    cout << "My car payment is $" << car_payment << endl;
    
    double pi {3.14159};
    cout << "Pi is " << pi << endl;
    
    long double large_amount {2.7e120};
    cout << large_amount << " is a very big number." << endl;
    
    //Boolean Types:
    //
    bool game_over {false};
    cout << "he value of gameOver is" << game_over << endl;
    
    //Overflow example:
    //
    short value1 {30000};
    short value2 {1000};
    //The product does not fit into a 'short' type.
    //short product {value1 * value2};
    int product {value1 * value2};
    
    cout << "The product of " << value1 << " and " << value2 << " is "
        << product << endl;
    
    return 0;
}
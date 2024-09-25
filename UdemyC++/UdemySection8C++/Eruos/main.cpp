#include <iostream>

using namespace std;

int main() {
    const double us_dollar_per_eur {1.19};
    
    cout << "Welcome to the EUR to USD Converter!" << endl;
    cout << "Enter the value you want converted in Eruos: ";
    
    double euros {0.0};
    double dollars {0.0};
    
    cin >> euros;
    dollars = euros * us_dollar_per_eur;
    
    cout << euros << " euros is equivalent to " << dollars << " dollars." 
         << endl;
    cout << endl;
    return 0;
}
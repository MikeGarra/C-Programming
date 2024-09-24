//Arrays

#include <iostream>

using namespace std;

int main() {
    
    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;    
    //cin >> vowels[5]; -out of bounds *Do not do this* Program will crash!
    
    double hi_temps[] {90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;
    
    hi_temps[0] = 100.7; //Set the first element in hi_temps to 100.7
                         //This is an Assignment Statement
                
    cout << "The first high temperature is now: " << hi_temps[0] << endl;
    //By setting the index 0 with an input, it changes the index 0
    //from 90.1 to 100.7
    
    int test_scores[5]{100, 90}; //The remaining index spots are 0
    
    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;
    
//    cin >> test_scores[0];
//    cin >> test_scores[1];
//    cin >> test_scores[2];
//    cin >> test_scores[3];
//    cin >> test_scores[4];
//    
//    cout << "\nThe updated test_scores Array:" << endl;
//    cout << "First new score at index 0: " << test_scores[0] << endl;
//    cout << "Second new score at index 1: " << test_scores[1] << endl;
//    cout << "Third new score at index 2: " << test_scores[2] << endl;
//    cout << "Fourth new score at index 3: " << test_scores[3] << endl;
//    cout << "Fifth new score at index 4: " << test_scores[4] << endl;
    
    cout << "\nNotice what the value of the array name is: "
         << test_scores << endl;
    //We get '0x69323ffd10' which is the memory 
    //address where the Array is located.
 
    cout << endl;
    
    return 0;
}
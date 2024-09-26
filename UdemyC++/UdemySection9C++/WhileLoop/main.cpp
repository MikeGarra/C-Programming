#include <iostream>

using namespace std;

int main() {
    
//    int i {1};
//    
//    while (i <=5) {
//        cout << i << endl;
//        //Increment in the body of the loop or you will have an infinte loop
//        ++i; 
//    }
    
//    int scores [] = {93, 87, 65, 71, 90};
//    int i {0};
//    
//    while  (i < 5){
//            cout << scores[i] << endl;
//        ++i;
//    }

//    int num {};
//    cout << "Enter a positive integer - start the countdown: ";
//    cin >> num;
//    
//    while (num > 0 ) {
//        cout << num << endl;
//        --num;
//    }
//    cout << "Blastoff!" << endl;

//    int num {};
//    cout << "Enter a positive integer to count up to: ";
//    cin >> num;
//    
//    int i {1};
//    while (num >=i) {
//        cout << i << endl;
//        ++i;
//    }
//    cout << "Wow! You conted real high!" << endl;
    
//    int number {};
//    
//    cout << "Enter an integer less than 100: ";
//    cin >> number;
//    
//    while (number >= 100) { //!(number < 100)
//        cout << "Enter an integer less than 100: ";
//        cin >> number;
//    }
//    cout << "Thank you!" << endl;

    bool done {false};
    int number {0};
    
    while(!done) {
        cout << "Enter an integer between 1 and 5: ";
        cin >> number;
        if (number <= 1 || number >= 5) {
            cout << "Out of range, try again." << endl;
        } else {
            cout << "Thank you" << endl;
            done = true; //*Makes the condition of '(!done)' complete*
        }
    }
    
    return 0;
}
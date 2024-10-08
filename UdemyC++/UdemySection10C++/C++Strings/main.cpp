#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};         //Apple
    string s6 {s1, 0, 3};   //App
    string s7 (10, 'X');    // XXXXXXXXXX
    
//    cout << s0 << endl;             //no garbage
//    cout << s0.length() << endl;    //empty string
    
    //Initialization
    cout << "\nInitialization" << "\n--------------------------------" << endl;
    cout << "s1 is initialized to: " << s1 << endl;
    cout << "s2 is initialized to: " << s2 << endl;
    cout << "s3 is initialized to: " << s3 << endl;
    cout << "s4 is initialized to: " << s4 << endl;
    cout << "s5 is initialized to: " << s5 << endl;
    cout << "s6 is initialized to: " << s6 << endl;
    cout << "s7 is initialized to: " << s7 << endl;
    
    //Comparison
    cout << "\nComparison" << "\n--------------------------------" << endl;
    cout << boolalpha;
    cout << s1 << " == " << s5 << ":" << (s1 == s5) << endl;
    cout << s1 << " == " << s2 << ":" << (s1 == s2) << endl;
    cout << s1 << " != " << s2 << ":" << (s1 != s2) << endl;
    cout << s1 << " < " << s2 << ":" << (s1 < s2) << endl;
    cout << s2 << " > " << s1 << ":" << (s2 > s1) << endl;
    cout << s4 << " < " << s5 << ":" << (s4 < s5) << endl;
    cout << s1 << " == " << "Apple" << ":" << (s1 == "Apple") << endl;
    
    //Assignment
//    cout << "\nAssignment" << "\n--------------------------------" << endl;
//    s1 = "Watermelon";
//    cout << "s1 is now: " << s1 << endl;
//    s2 = s1;
//    cout << "s2 is now: " << s2 << endl;
//    
//    s3 = "Mike";
//    cout << "s3 is now: " << s3 << endl;
//    s3.at(0) = 'P';
//    cout << "s3 changed first letter to 'P': " << s3 << endl;
    
    //Concatenation
    cout << "\nConcatination" << "\n--------------------------------" << endl;
    s3 = "Watermelon";
    s3 = s5 + " and " + s2 + " juice";
    cout << "s3 is now : " << s3 << endl;
    
    //for loop
    cout << "\nFor Loop" << "\n--------------------------------" << endl;
    
    s1 = "Apple";
    for (size_t i{0}; i < s1.length(); ++i)
        cout << s1.at(i);   //or s1[i]  Apple
    cout << endl;
    
    //Rnaged-based Loop
    cout << "\nRange-based Loop" << "\n--------------------------------" << endl;
    for (char c: s1) 
        cout << c << endl;;  //Apple
    cout << endl;
    
    //Substring
    cout << "\nSubstring" << "\n--------------------------------" << endl;
    s1 = "This is a test";
    
    cout << s1.substr(0,4) << endl;     //This
    cout << s1.substr(5,2) << endl;     //is
    cout << s1.substr(10,4) << endl;    //test
    
    cout << "\nErase" << "\n--------------------------------" << endl;
    
    //Erase
    s1 = "This is a test";
    s1.erase(0,5);      //Erase 'This' from s1 and leave 'is a test'
    cout << "s1 is now: " << s1 << endl;
    
    //getline
    cout << "\nGetline" <<"\n--------------------------------" << endl;
    
    string full_name {};
    cout << "Enter your full name: ";
    getline(cin, full_name);
    
    cout << "Your full name is: " << full_name << endl;
    
    //Find
    cout << "\nFind" << "\n--------------------------------" << endl;
    
    s1 = "The secret word is Boo";
    string word {};
    
    cout << "Enter the word to find: ";
    cin >> word;
    
    size_t position = s1.find(word);
    if (position != string::npos)
        cout << "Found " << word << " at position " << position << endl;
    else
        cout << "Sorry, " << word << " not found." << endl;
    
    cout << endl;
    return 0;
}
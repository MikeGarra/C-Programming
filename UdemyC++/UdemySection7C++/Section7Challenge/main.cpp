/*Section 7 Challenge:
 *Write a C++ program as follows:
 *
 * Declare 2 empty vectors of intergers named
 * vector1 and vector2, respectively.
 * 
 * Add 10 and 20 to vector1 dynamically using 'push_back'
 * Display the elements in vector1 using the 'at()' method
 * as well as the its size using the 'size()' method
 * 
 * Add 100 and 200 to vector2 duynamically using 'push_back'
 * Display the elements in vector1 using the 'at()' method
 * as well as the its size using the 'size()' method
 * 
 * Declare an empty 2D vector called vector_2D
 * Remember, that a 2D vector is a vector of vector<int>
 * 
 * Add vector1 to vector_2d dynamically using 'push_back'
 * Add vector2 to vector_2d dynamically using 'push_back'
 * 
 * Display the elements in vector_2d using the 'at()' method
 * 
 * change vector1.at(0) to 1000
 * 
 * Display the elements in vector_2d using the 'at()' method
 * 
 * Display the elements of vector1
*/ 

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector <int> vector_one {};
    vector <int> vector_two {};
    
    vector_one.push_back(10);
    vector_one.push_back(20);
    
    cout << "Vector1:" << endl;
    cout << vector_one.at(0) << endl;
    cout << vector_one.at(1) << endl;
    cout << "vector_one contains " << vector_one.size() << " elements." << endl;
    
    vector_two.push_back(100);
    vector_two.push_back(200);
    
    cout << "\nVector2:" << endl;
    cout << vector_two.at(0) << endl;
    cout << vector_two.at(1) << endl;
    cout << "vector_two contains " << vector_two.size() << " elements." << endl;
    
    vector <vector<int>> vector_2d {};
    vector_2d.push_back(vector_one);
    vector_2d.push_back(vector_two);
    
    cout << "\nVector_2d:" << endl;
    cout << vector_2d.at(0).at(0) << "  " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    
    vector_one.at(0) = 1000;
    
        cout << "\nVector_2d Updated:" << endl;
    cout << vector_2d.at(0).at(0) << "  " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    
    cout << "\n" << vector_one.at(0) << endl;
    cout << vector_one.at(1) << endl;
    
    return 0;
}
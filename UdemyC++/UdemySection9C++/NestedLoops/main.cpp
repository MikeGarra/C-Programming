#include <iostream>

using namespace std;

int main() {
    
    //After the inner loop completes the loop the outer loop loops again
    //and the inner loop starts unitl it completes again starting
    //outer loops cycle again until it the outer loop fails
    for (int num1{1}; num1 <=10; ++num1){
        for (int num2{1}; num2 <= 10; ++num2){
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        }
        cout << "---------------------" << endl;
    }
    
    return 0;
}
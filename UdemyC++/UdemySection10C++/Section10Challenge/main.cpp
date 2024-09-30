/* Section 10 Challenge
 * 
 * SECRET MESSAGE CIPHER
 * Write a program that asks a user to enter a secrete message
 * 
 * Encrypt the message using substitution cipher and display
 * the encrypted message.
 * Then decrypt the message back to the original message.
 * 
 * You may use 2 strings below for your substitution
 * For example, to encrypt you can replpace the character at position n in 
 * alphabet with the character at position n in key.
 * 
 * to decrypt you can replace the character at position n in key
 * with the character at position n in the alphabet
 * 
 * 
 * 
 */
#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string alpha {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()=+"};
    string key   {"XZYUQWEBNMOCADLKRPKVCJGHITpazlqmowksixdjcneurfhvbtgy7291037456)*@(!&#^$%_-"};
    string message {};
    
    cout << "Please enter in your secrete message and I will encrypt it:" << endl;
    getline(cin, message);
    
    //Encypting the message
    string encrypt_message {};
    for (char ch : message) {
        size_t position = alpha.find(ch);
        if (position != string::npos) {
            //Replace alpha with key
            encrypt_message += key[position];
        } else {
            //Keep the character unchanged if not found
            encrypt_message += ch; 
        }
    }
    
    cout << "\nYour message has been encrypted to: " 
         << endl << encrypt_message << endl;
    
    //Decrypting the message
    string decrypt_message {};
    
    for (char ch : message) {
        size_t position = alpha.find(ch);
        if (position != string::npos) {
            //Replace key with alpha
            decrypt_message += alpha[position];
        } else {
            //Keep the character unchanged if not found
            decrypt_message += ch; 
        }
    }
    
    cout << "\nYour message has been decrypted back to what you put: "
         << endl << decrypt_message << endl;
    
    cout << endl;
    return 0;
}
/*
Write a program that allows the user to enter a lowercase Latin 
letter into the console, convert it to uppercase and display the result in the console.
For example:
g
G
The solution will be below
*/












#include <iostream>
using namespace std;

int main() {
    
    char a, b;
    cin >> a;
    
    if (a >= 'a' && a <= 'z') {
        char b = toupper(a);
        cout << b << endl;
    }
    
    /*or more
    char a, b;
    cin >> a;
    char a, b;
    cin >> a;
    if (a >= 'a' && a <= 'z') {
        b = static_cast<int>(a) - 32; 
        cout << b << endl;
    }
    We subtract 32 because this value corresponds to the encoding difference 
    between lowercase and uppercase letters in the ASCII table
    }*/
    
    return 0;
}
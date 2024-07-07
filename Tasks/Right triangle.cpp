/*
Write a program that uses a for loop to print a right triangle of "*" characters
The solution will be below
For example:
*
**
***
*/












#include <iostream>
using namespace std;

int main() {
    
    int rows;
    
    cin >> rows;
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
/*
Write a program that allows the user to enter a two-digit natural number with keystrokes. 
The program must then determine the smallest and largest digits 
included in that number using the remainder and division operations.
The solution will be below
For example: 27
2 - smaller digit
7 - larger digit
*/











#include <iostream>
using namespace std;


int main() {
    
    int number;
    cin >> number;
    
    if ((number / 10) > (number % 10)){
        cout << (number / 10) << " larger digit" << endl;
        cout << (number % 10) << " smaller digit" << endl;
    }
    else if ((number / 10) < (number % 10)) {
        cout << (number / 10) << " smaller digit" << endl;
        cout << (number % 10) << " larger digit" << endl;
    }
    else
        cout << "the digits are equal";
    
    return 0;
}
/*
Create an algorithm that determines whether any digits of the entered three-digit number match. 
The number is entered from the keyboard. Use the operation - remainders from division.
The solution will be below.
For example: 554
*/











#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a three-digit number: ";
    cin >> number;

    int fDigit = number / 100; // for example 564 - 5
    int sDigit = (number / 10) % 10; // 6
    int tDigit = number % 10; // 4

    if (fDigit == sDigit || fDigit == tDigit || sDigit == tDigit) {
        cout << "Among the digital numbers there are the same.\n";
    } else {
        cout << "Among the digital numbers do not match.\n";
    }

    return 0;
}
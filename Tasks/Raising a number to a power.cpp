/*
The program raises a number entered from the keyboard to a power 
also entered from the keyboard, and displays the result (try this without using the "pow" function).
The solution will be below
*/












#include <iostream> 
#include <cmath>
using namespace std;
int main() { 
    double number, power, result = 1; 
    cin >> number; 
    cin >> power;
 
    if (power == 0)
        result = 1;
    else {
        for (int i = 1; i <= abs(power); i++) {
                result *= number;
        }
    }
    if (power >= 0)
        cout << result;
    else
        cout << 1 / result;
    
    return 0;
}
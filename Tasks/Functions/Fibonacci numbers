/*
Write a program that prints the first n Fibonacci numbers using recursion.
Fibonacci numbers are a series of numbers in which each subsequent number is equal to the sum of the previous two:
1, 1, 2, 3, 5, 8, 13, etc.
That is, the sequence always starts with two ones. 
Each subsequent number is determined by the formula: F(n) = F(n-1) + F(n-2)
*/










#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;

    cout << "Enter the number of Fibonacci numbers: ";
    cin >> n;

    cout << "Fibonacci Series:";
    for (int i = 0; i < n; i++) {
        cout << " " << fibonacci(i);
    }
    cout << endl;

    return 0;
}

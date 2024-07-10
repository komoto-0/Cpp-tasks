/*
Fill a 50-element array with odd numbers from 1 to 99. (use the remainder operator to check evenness)
*/











#include <iostream>
#include <time.h>
using namespace std;


int main() {
    srand(time(NULL));
    const int SIZE = 50;
    int arr[SIZE] = {};
    
    for (int i = 0; i < SIZE; ) {
        arr[i] = 1 + rand() % 99;
        
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
            i++;
        }
    }
    
    return 0;
    
}
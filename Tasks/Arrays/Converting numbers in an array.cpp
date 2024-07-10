/*
Create an int array of 10 elements and fill it with random numbers from 7 to 14. 
Once filled, overwrite all numbers greater than or equal to ten: subtract 10 from the stored value. 
For example, the number 12 is stored in a cell: 12 – 10 = 2. Write 2 in this cell.
*/











#include <iostream>
#include <time.h>
using namespace std;


int main() {
    srand(time(NULL));
    
    int arr[10] = {};
    const int lowerLimit = 7;
    const int upperLimit = 14;
    
    for (int i = 0; i < 10; i++) { // fill and output the array
        arr[i] = lowerLimit + rand() % (upperLimit - lowerLimit + 1); // 7 + rand() % (14 - 7 + 1)
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        if (arr[i] >= 10) {
            arr[i] = arr[i] - 10;
        }
        cout << arr[i] << " ";
    }
    
    
    
    return 0;
}
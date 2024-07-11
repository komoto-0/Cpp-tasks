/*
Fill a two-dimensional array with random numbers from 10 to 100. 
Calculate the sum of the elements separately in each 
row and determine the number of the row in which this sum is maximum.
Example:
 |  29   94   29   94   83  |
 |  81   65   93   24   86  |
 |  75   58   99   64   45  |
 |  78   88   18   24   88  |
 |  23   33   60   59   24  |

1 row: 329
2 row: 349
3 row: 341
4 row: 296
5 row: 199

A string whose sum of elements is maximum: 2
*/











#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;



int main() {
    srand(time(NULL));
    
    const int SIZE = 5;
    int arr[SIZE][SIZE] = {};
    int rowS[SIZE] = {}; // to write amounts in rows
    
    for (int rowNum = 0; rowNum < SIZE; rowNum++) { // fill our array with random numbers
        cout << " | ";
        for (int colNum = 0; colNum < SIZE; colNum++) {
            arr[rowNum][colNum] = 10 + rand() % 91;
            cout << setw(3) << arr[rowNum][colNum] << "  ";
        }
        cout << "|"<< endl;
    }
    
    for (int rowNum = 0; rowNum < SIZE; rowNum++) { // counting the amount separately for each line
        for (int colNum = 0; colNum < SIZE; colNum++) {
            rowS[rowNum] += arr[rowNum][colNum];
        }
    }
    
    cout << endl;
    
    for(int i = 0; i < SIZE; i++) {
        cout << i + 1 << " row: " << rowS[i] << endl;;
    }
    cout << endl;
    
    int numMaxRow = 0; // line number with maximum amount
    for (int i = 1; i < SIZE; i++) {
        if (rowS[i] > rowS[numMaxRow])
            numMaxRow = i;
    }
    
    cout << "A string whose sum of elements is maximum: " << numMaxRow + 1;
    
    
    return 0;
}
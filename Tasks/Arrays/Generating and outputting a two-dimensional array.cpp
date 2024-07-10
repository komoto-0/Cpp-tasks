/*
Declare a two-dimensional array of type int, fill it with random numbers from 1 to 20 and print.
*/











#include <iostream>
#include <time.h>
using namespace std;


int main() {
    srand(time(NULL));
    
    const int ROW = 4;
    const int COL = 5;
    
    int array[ROW][COL] = {};
    
    for (int i = 0; i < ROW; i++) { // fill the array with random numbers and print
        for (int j = 0; j < COL; j++) {
            array[i][j] = 1 + rand() % 20;
            cout << array[i][j] << " ";
        }
        cout << endl; // when executing the inner loop, go to the next line
    }
    
    return 0;
    
}
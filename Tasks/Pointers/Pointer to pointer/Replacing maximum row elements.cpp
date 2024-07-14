/*
Create a two-dimensional 4x4 array, fill it with random numbers from 20 to 100 and display it on the screen. 
Swap the maximum element of each row with the first element in the corresponding row. Use pointers.
Example:
  54   28   75   79 
  98   90   85   20 
  45   95   68   42 
  57   98   76   67 
=====================================
  79   28   75   54 
  98   90   85   20 
  95   45   68   42 
  98   57   76   67
*/











#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;


int main() {
    srand(time(NULL));
    
    const int ROW = 4;
    const int COL = 4;
    
    int **arr = new int* [ROW];
    
    for (int i = 0; i < ROW; i++)
        arr[i] = new int [COL];
    
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            arr[i][j] = 20 + rand() % 81;
            cout << setw(4) << arr[i][j] << " "; // You don't have to use the setw() function, I wrote it to make it easier to see the difference.
        }
        cout << endl;
    }
    
    cout << "=====================================\n";
    
    int x = 0; to record the row number in which we are looking for the maximum value
    int y = 0; // to record the column number with the maximum value
    
    for (int i = 0; i < ROW; i++) {
        int maxElement = arr[i][0];
        for (int j = 1; j < COL; j++) {
            if (maxElement < arr[i][j]) {
                maxElement = arr[i][j];
                x = i;
                y = j;
            }
        }
        if (arr[i][0] < maxElement) {
            int temp = arr[i][0];
            arr[i][0] = maxElement;
            arr[x][y] = temp;
        }
    }
    
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            cout << setw(4) << arr[i][j] << " "; // You don't have to use the setw() function, I wrote it to make it easier to see the difference.
        }
        cout << endl;
    }
    
    
    
    for (int i = 0; i < ROW; i++)
        delete[] arr[i];
    
    delete[] arr;
    
    
	return 0;
}

/*
Convert rows of a two-dimensional array to columns. 
The class will contain two methods: one will fill the array with values, 
the second will replace row values ​​with column values. (fill the arrays with random numbers)
Example:
  26   32 
  89   22 
  18   20 
  98   13 
====================
  26   89   18   98 
  32   22   20   13 
*/











#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

class Matrix {
private:
    int** arr;
    int** arr2;
    int rows, cols;

public:
    void FillArray(int rowsValue, int colsValue) {
        rows = rowsValue;
        cols = colsValue;

        arr = new int* [rows];
        for (int i = 0; i < rows; i++)
            arr[i] = new int[cols];

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                arr[i][j] = 10 + rand() % 91;
                cout << setw(4) << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    void ChangeRowsWithCols() {
        cout << "====================\n";

        arr2 = new int* [cols];
        for (int i = 0; i < cols; i++)
            arr2[i] = new int[rows];

        for (int i = 0; i < cols; i++) {
            for (int j = 0; j < rows; j++) {
                arr2[i][j] = arr[j][i];
                cout << setw(4) <<arr2[i][j] << " ";
            }
            cout << endl;
        }
    }

    ~Matrix() {
        for (int i = 0; i < cols; i++)
            delete[] arr2[i];
        
        cout << "Destructor for second matrix" << endl;
        delete[] arr2;

        for (int i = 0; i < rows; i++)
            delete[] arr[i];
        
        cout << "Destructor for first matrix" << endl;
        delete[] arr;
        
        
    }
};

int main() {
    srand(time(NULL));

    Matrix array;
    array.FillArray(4, 2);
    array.ChangeRowsWithCols();

    return 0;
}

/*
Declare and fill a two-dimensional dynamic array with random numbers from 10 to 80. 
Display it on the screen. Write separate functions for filling and displaying on the screen. 
(functions must take three parameters - a pointer to a dynamic array, the number of rows, the number of columns).  
The number of rows and columns is selected by the user.
*/











#include <iostream>
#include <time.h>
using namespace std;


void FillArr(int **array, int rows, int columns);
void ShowArr(int **array, int rows, int columns);

int main() {
    srand(time(NULL));
    int rows;
    int columns;
    
    cout << "Enter the dimension of a two-dimensional array" << endl;
    cout << "Rows: ";
    cin >> rows;
    cout << "Columns: ";
    cin >> columns;
    
    
    int **arr = new int* [rows]; // when creating a two-dimensional dynamic array, we use a pointer to a pointer
    for (int i = 0; i < rows; i++) 
        arr[i] = new int [columns];
    
    FillArr(arr, rows, columns);
    ShowArr(arr, rows, columns);
    
    
    for (int i = 0; i < rows; i++) 
    // First we free the memory containing the data. If you don't free the memory, a memory leak will occur.
        delete[] arr[i];
    
    delete[] arr; // Then the memory of the pointer array:
    
    
    return 0;
}


void FillArr(int **array, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            array[i][j] = 10 + rand() % 71;
        }
    }
}

void ShowArr(int **array, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}


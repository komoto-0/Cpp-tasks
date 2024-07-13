/*
Declare a pointer to an array of type int and allocate memory for 12 elements. 
You need to write a function that will change the values ​​of the even and odd cells of an array.
Example:
source data: cell 0 - 10; cell 1 - 225
data after function operation: cell 0 - 225; cell 1 - 10
*/










#include <iostream>
using namespace std;

void FillArr(int *array, int SIZE);
void ShowArr(int *array, int SIZE);
void SwapByCells(int *array, int SIZE);

int main() {
    
    const int SIZE = 12;
    int *arr = new int[SIZE];
    
    FillArr(arr, SIZE);
    ShowArr(arr, SIZE);
    SwapArr(arr, SIZE);
    ShowArr(arr, SIZE);
    
    
    delete [] arr;
    
    return 0;
}

void FillArr(int *array, int SIZE) {
    for (int i = 0; i < SIZE; i++)
        *(array + i) = i * 10;
}

void ShowArr(int *array, int SIZE) {
    for (int i = 0; i < SIZE; i++)
        cout << *(array + i) << " ";
    cout << "\n";
}

void SwapByCells(int *array, int SIZE) {
    int val = 0;
    for (int i = 0; i < SIZE - 1; i++) { // do -1 to avoid going beyond the array
        if (i % 2 == 0) {
            val = *(array + i);
            *(array + i) = *(array + i + 1);
            *(array + i + 1) = val;
        }
    }
}
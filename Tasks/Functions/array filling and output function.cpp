/*
Declare two integer arrays of different sizes and write a function that fills their elements with values ​​and displays them on the screen. 
The function must take two parameters - an array and its size.
*/











#include <iostream>
using namespace std;

void FillShowArray(int *arr, const int size);

int main() {
    
    const int SIZE1 = 4;
    const int SIZE2 = 6;
    
    int array1[SIZE1] = {};
    int array2[SIZE2] = {};
    
    FillShowArray(array1, SIZE1);
    FillShowArray(array2, SIZE2);
    
    
    return 0;
}
void FillShowArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = i;
        cout << arr[i] << " ";
    }
    cout << endl;
}

/* or
void FillShowArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = i;
        cout << *(arr + i) << " ";
    }
    cout << endl;
}
*/
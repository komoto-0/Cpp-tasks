/*
You need to create a two-dimensional array 3 x 3. Next, write a function that will fill it with random numbers from 30 to 60. 
Create two more functions that find the maximum and minimum elements of this two-dimensional array.
Example:
33 50 51 
42 56 57 
49 41 51 

min element: 33
max element: 57
*/











#include <iostream>
#include <time.h>
using namespace std;

const int SIZE = 3;
void FillShowArray(int arr[][SIZE], const int size);
int findMinElement(int arr[][SIZE], const int size);
int findMaxElement(int arr[][SIZE], const int size);

int main() {
    srand(time(NULL));
    
    int array[SIZE][SIZE] = {};
    
    FillShowArray(array, SIZE);
    cout << endl;
    cout << "min element: " << findMinElement(array, SIZE) << endl;
    cout << "max element: " << findMaxElement(array, SIZE) << endl;
    
    return 0;
}
void FillShowArray(int arr[][SIZE], const int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = 30 + rand() % 31;
            cout << arr[i][j] << " ";
        }
        cout << endl;
        
    }
}

int findMinElement (int arr[][SIZE], int size) {
    int min = arr[0][0];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (min > arr[i][j])
                min = arr[i][j];
        }
    }
    return min;
}

int findMaxElement (int arr[][SIZE], int size) {
    int max = arr[0][0];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (max < arr[i][j])
                max = arr[i][j];
        }
    }
    return max;
}

/* or
const int SIZE = 3;
void FillShowArray(int *arr, const int size);
int findMinElement(int *arr, const int size);
int findMaxElement(int *arr, const int size);

int main() {
    srand(time(NULL));
    
    int array[SIZE][SIZE] = {};
    
    FillShowArray(*array, SIZE); 
    /*We pass a pointer to the first element of the array (i.e. &array[0][0]). 
    Arrays in C++ are stored in memory as contiguous chunks of memory, so passing a pointer to the first element of 
    the array is equivalent to passing a pointer to the entire matrix.*/
    
    cout << endl;
    cout << "min element: " << findMinElement(*array, SIZE) << endl;
    cout << "max element: " << findMaxElement(*array, SIZE) << endl;
    
    return 0;
}
void FillShowArray(int *arr, const int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            *(arr + i * size + j) = 30 + rand() % 31;
            cout << *(arr + i * size + j) << " ";
        }
        cout << endl;
        
    }
}

int findMinElement (int *arr, int size) {
    int min = *arr;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (min > *(arr + i * size + j))
                min = *(arr + i * size + j);
        }
    }
    return min;
}

int findMaxElement (int *arr, int size) {
    int max = *arr;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (max < *(arr + i * size + j))
                max = *(arr + i * size + j);
        }
    }
    return max;
}
*/
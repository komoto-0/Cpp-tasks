/*
Declare three arrays of type "int" with 10 elements. Fill the first two with random values ​​from 10 to 30. In the elements of the third array, write the sum of the corresponding elements of the first two arrays. (in the zero cell of the third - the sum of the zero cells of the first and second arrays, and so on). Then find the arithmetic mean of the elements of the third array, the maximum value and the minimum value it stores.
*/











#include <iostream>
#include <time.h>
using namespace std;


int main() {
    srand(time(NULL));
    
    const int SIZE = 10;
    int arr1[SIZE] = {};
    int arr2[SIZE] = {};
    int arr3[SIZE] = {};
    
    for (int i = 0; i < SIZE; i++) { // fill the first two arrays
        arr1[i] = 10 + rand() % 21;
        arr2[i] = 10 + rand() % 21;
    }
    
    cout << "first array: ";
    for (int i = 0; i < SIZE; i++) // print the first array
        cout << arr1[i] << " ";
    
    cout << endl;
    
    cout << "second array: ";
    for (int i = 0; i < SIZE; i++) // print the second array
        cout << arr2[i] << " ";
    
    cout << "\n====================\n"; // I've split it up to make it clearer for you.
    
    cout << "third array: ";
    for (int i = 0; i < SIZE; i++) { // fill the third array and print 
        arr3[i] = arr1[i] + arr2[i];
        cout << arr3[i] << " ";
    }
    
    cout << "\n====================";
    int sum = 0;
    int averageValue = 0;
    int maxValue = arr3[0];
    int minValue = arr3[0];
    
    for (int i = 0; i < SIZE; i++) {
        sum += arr3[i];
        
        if (maxValue < arr3[i])
            maxValue = arr3[i];
        
        if (minValue > arr3[i])
            minValue = arr3[i];
    }
    averageValue = sum / SIZE;
    
    cout << "\n";
    
    cout << "averageValue: " << averageValue << endl;
    cout << "maxValue: " << maxValue << endl;
    cout << "minValue: " << minValue << endl;
    
    return 0;
    
}
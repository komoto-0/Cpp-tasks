/*
Create a dynamic array with a size entered by the user. 
Then fill this array with numbers, bubble sort it and display the sorted array on the screen.
Example: 
89 7 43 78 4 

4 7 43 78 89
*/










#include <iostream>
using namespace std;

int main() {
    
    int *arr;
    int size;
    
    cout << "Enter array size: ";
    cin >> size;
    
    arr = new int [size];
    
    for (int i = 0; i < size; i++) {
        cout << "[" << i << "]" << " = ";
        cin >> arr[i];
    }
    
    cout << endl << endl;
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl << endl;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        
    }
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    delete[] arr;
    
    return 0;
}

/*
Declare a two-dimensional array of type "int" and fill it line by line from the keyboard. 
Once completed, display the completed matrix on the screen and calculate the sum of the elements separately in each column and each row.
Example: 
Fill a two-dimensional array of numbers line by line
1 line 1 column: 3
1 line 2 column: 4
1 line 3 column: 5

2 line 1 column: 9
2 line 2 column: 8
2 line 3 column: 7

3 line 1 column: 1
3 line 2 column: 2
3 line 3 column: 3

 |  3    4    5  |
 |  9    8    7  |
 |  1    2    3  |
1 line: 12
2 line: 24
3 line: 6
1 column: 13
2 column: 14
3 column: 15
*/











#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    
    const int SIZE = 3;
    
    int array[SIZE][SIZE] = {};
    int rowS[SIZE] = {}; // to record the amount by row
    int colS[SIZE] = {}; // to record the amount by columns
    
    cout << "Fill a two-dimensional array of numbers line by line" << endl;
    for (int rowNum = 0; rowNum < SIZE; rowNum++) { // 
        for (int colNum = 0; colNum < SIZE; colNum++) {
            
            cout << rowNum + 1 << " line "; //index 0 but numbered 1
                                            
            cout << colNum + 1 << " column: "; // indexed 0 but numbered 1
                                                
            cin >> array[rowNum][colNum]; 
            /*the user enters a value to be stored in an array cell 
            with the corresponding "rowNum" and "colNum" indices.*/
            
        }
        cout << endl;
    }
    
    for (int rowNum = 0; rowNum < SIZE; rowNum++) {
        cout << " |";
        for (int colNum = 0; colNum < SIZE; colNum++) {
            
            cout << setw(3) << array[rowNum][colNum] << "  "; 
            /*The setw() function is used to set the width of the output 
            field when outputting data to the screen using stream output. 
            It allows you to align data to a specified width, 
            adding spaces at the beginning of the line if the data takes up less space.*/
            
            
            rowS[rowNum] += array[rowNum][colNum]; // write the sum of the row into the array "rowS" by index
            colS[rowNum] += array[colNum][rowNum]; // write the sum of the column into the array "colS" by index
        }
        cout << "|" << endl;
    }
    
    for (int i = 0; i < SIZE; i++) { // display the contents of the rowS array
        cout << i + 1 << " line: " << rowS[i] << endl;
    }
    
    for (int i = 0; i < SIZE; i++) { // display the contents of the colS array
        cout << i + 1 << " column: " << colS[i] << endl;
    }
    return 0;
}

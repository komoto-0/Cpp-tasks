/*
Declare a pointer to an array of type double and prompt the user to choose its size. Next, write four functions: the first should allocate memory for the array, the second should fill the cells with data, the third should display data on the screen, and the fourth should free up occupied memory.  The program should prompt the user to continue working (create new dynamic arrays) or exit the program.
*/











#include <iostream> 
using namespace std;

double* giveMemoryToArr(double *ptrArr, int sizeOFArr);
void FillArray (double *ptrArr, int sizeOFArr);
void ShowArray (double *ptrArr, int sizeOFArr); 
double* DelArray (double *ptrArr);


int main() {
    
    double* pArrForFill;
    char userAnswer = 0;
    
    do {
        int sizeOFArr;
        cout << "Enter array size: ";
        cin >> sizeOFArr;
        
        pArrForFill = giveMemoryToArr(pArrForFill, sizeOFArr);
        /*The GiveMemoryToArr function allocates memory for a double array sizeOFArr and returns a pointer to that memory. 
        This pointer is then stored in the pArr variable.*/
        
        FillArray(pArrForFill, sizeOFArr);
        ShowArray(pArrForFill, sizeOFArr);
        pArrForFill = DelArray(pArrForFill);
        
        cout << "\nChoose to continue or not: 1 - yes, 0 - no" << endl;
        
        cin >> userAnswer;
        
    } while(userAnswer != '0');
    
    
    return 0;
}

double* giveMemoryToArr(double *ptrArr, int sizeOFArr) { 
    ptrArr = new double[sizeOFArr]; 
    return ptrArr; 
}

void FillArray (double *ptrArr, int sizeOFArr) { 
    for (int i = 0; i < sizeOFArr; i++) 
        *(ptrArr + i) = i * 3; 
}

void ShowArray (double *ptrArr, int sizeOFArr) { 
    for (int i = 0; i < sizeOFArr; i++) 
        cout << *(ptrArr + i) << " "; 
}

double* DelArray (double *ptrArr) {
    delete[] ptrArr;
    ptrArr = nullptr;
    return ptrArr;
}
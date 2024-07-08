/*
Find the algebraic sum of the expression: 1k + 2k + 3k +… + Nk, where N and the degree k are entered by the user.
The solution will be below
For exaple: 
3
4
98
*/












#include <iostream>
#include <cmath>
using namespace std;


int main() {
    
    int N, k;
    
    int summ = 0;
    
    cin >> N;
    cin >> k;
    
    for (int i = 1; i <= N; i++) {
        summ += pow(i, k);
    }
    
    cout << summ;
    
    return 0;
}
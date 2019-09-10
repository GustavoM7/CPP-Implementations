#ifndef INSERTIONSORT_HPP
#define INSERTIONSORT_HPP

using namespace std;

//Complexidade O(n²)
void insertionsort(int* A, int n){
    int j, i, pivo;
    for(j = 1; j < n; j++){
        pivo = A[j];
        i = j - 1;
        while(i >= 0 && A[i] > pivo){
            A[i+1] = A[i];
            i = i - 1;
        }
        A[i+1] = pivo;
    }
}

#endif
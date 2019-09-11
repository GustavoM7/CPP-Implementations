#ifndef QUICKSORT_HPP
#define QUICKSORT_HPP

//Complexidade O(nlogn)

int particione(int A[], int comeco, int fim){
    int pivo = A[fim], i = comeco, j = comeco, aux;

    while(j < fim){
        if(A[j] <= pivo){
            aux = A[i];
            A[i] = A[j];
            A[j] = aux;
            i++;
        };
       
        j++;
    }

    aux = A[i];
    A[i] = A[j];
    A[j] = aux;
    return i;
}

void quicksort(int A[], int comeco, int fim){
    if(fim - comeco < 2) return;

    int npivo = particione(A, comeco, fim);
    quicksort(A, comeco, npivo - 1);
    quicksort(A, npivo + 1, fim);
}

#endif
#include <iostream>
#include <time.h>
#include "insertion-sort.hpp"

using namespace std;

void insertionsort_teste(){
    int * A;
    int n, e;
    double t;
    
    cout << "Entre o tamanho do vetor: ";
    cin >> n;
    A = (int*) malloc(n);
    cout << "Entre os elementos do vetor:" << endl;
    for(int i = 0; i < n; i ++){
        cin >> A[i];
    }

    cout << "Executando ordenação..." << endl;

    clock_t Ticks[2];
    Ticks[0] = clock();
    insertionsort(A, n);
    Ticks[1] = clock();

    t = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;

    cout << "Vetor ordenado:" << endl;
    for(int i = 0; i < n; i ++){
        cout << A[i] << endl;
    }

    printf("Tempo gasto: %g ms \n", t);
}


int main(){
    int input;

    cout << "Selecione a implementação" << endl;
    cout << "1: Insertion Sort" << endl;

    cin >> input;

    if(input == 1){
        insertionsort_teste();
    }
}
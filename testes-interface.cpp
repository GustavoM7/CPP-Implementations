#include <iostream>
#include <time.h>
#include "insertion-sort.hpp"
#include "merge-sort.hpp"
#include "quicksort.hpp"

using namespace std;

void pre_sorts(int sort);
int main(){
    int input;

    cout << "Selecione a implementação" << endl;
    cout << "1: Insertion Sort" << endl;
    cout << "2: Merge Sort" << endl;
    cout << "3: Quicksort" << endl;

    cin >> input;

    switch(input){
        case 1: 
            pre_sorts(1);
            break;
        case 2: 
            pre_sorts(2);
            break;
        case 3:
            pre_sorts(3);
            break;
        default:
            cout << "Valor inválido..." << endl;
    }
}

void pre_sorts(int sort){
    int n, e;
    double t;
    
    cout << "Entre o tamanho do array: ";
    cin >> n;
    int A[n];
    int Aux[n];

    cout << "Entre os elementos do array:" << endl;
    for(int i = 0; i < n; i ++){
        cin >> A[i];
    }

    cout << "Executando ordenação..." << endl;
    clock_t Ticks[2];

    switch (sort){
    case 1:
        Ticks[0] = clock();
        insertionsort(A, n);
        Ticks[1] = clock();
        break;

    case 2:
        Ticks[0] = clock();
        mergeSort(A, Aux, 0, n);
        Ticks[1] = clock();
        break;

    case 3:
        Ticks[0] = clock();
        quicksort(A, 0, n - 1);
        Ticks[1] = clock();
        break;
    
    default:
        break;
    }

    t = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;

    cout << "Array ordenado:" << endl;
    for(int i = 0; i < n; i ++){
        cout << A[i] << endl;
    }

    printf("Tempo gasto: %g ms \n", t);
}
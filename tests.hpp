#include <time.h>
#include "insertion-sort.hpp"
#include "merge-sort.hpp"
#include "quicksort.hpp"
#include "maxmin.hpp"
#include "counting-sort.hpp"

/*
    1: max
    2: min
    3: insertion sort
    4: merge sort
    5: quick sort
    6: counting sort

*/
void array_tests(int type){
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

    cout << "Executando..." << endl;
    clock_t Ticks[2];

    switch (type){
    case 3:
        Ticks[0] = clock();
        insertionsort(A, n);
        Ticks[1] = clock();
        break;

    case 4:
        Ticks[0] = clock();
        mergeSort(A, Aux, 0, n);
        Ticks[1] = clock();
        break;

    case 5:
        Ticks[0] = clock();
        quicksort(A, 0, n - 1);
        Ticks[1] = clock();
        break;

    case 1:
        Ticks[0] = clock();
        e = maxmin(A, n, 1);
        Ticks[1] = clock();
        break;

    case 2:
        Ticks[0] = clock();
        e = maxmin(A, n, -1);
        Ticks[1] = clock();
        break;

    case 6:
        e = maxmin(A, n, 1) + 1;
        Ticks[0] = clock();
        countingSort(Aux, A, n, e);
        Ticks[1] = clock();
        break;

    default:
        cout << "Entrada inválida..." << endl;
        break;
    }

    t = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;

    if(type == 6){
        cout << "Array ordenado: " << endl;
        for(int i = 0; i < n; i ++){
            cout << Aux[i] << endl;
        }
    } else if(type > 2){
        cout << "Array ordenado:" << endl;
        for(int i = 0; i < n; i ++){
            cout << A[i] << endl;
        }
    } else {
        cout << "Resposta: " << e << endl;
    }

    cout << "Tempo gasto: " << t << endl;
}
#ifndef COUNTINGSORT_HPP
#define COUNTINGSORT_HPP

//complexidade O(n + k)

void countingSort(int saida[], int entrada[], int tam, int k){
    int aux[k+1];
    for(int i = 0; i <= k; i++){
        aux[i] = 0;
    }

    for(int i = 0; i < tam; i++){
        aux[entrada[i]] = aux[entrada[i]] + 1;
    }

    for(int i = 1; i <= k; i++){
        aux[i] = aux[i] + aux[i - 1];
    }

    for(int i = 0; i <= k; i++){
        aux[i]--;
    }

    int i = tam;

    do{
      i = i - 1;
      saida[aux[entrada[i]]] = entrada[i];
      aux[entrada[i]]--;
    } while(i!=0);
}

#endif
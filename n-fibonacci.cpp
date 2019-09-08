#include <iostream>

//programa que mostra sequência de fibonacci da posição 1 a n;
using namespace std;

int main(){
    int n; //Inteiro positivo para posição de fibonacci;

    cin >> n;

    if(n > 0){
        int aux, antfib, fib;
        antfib = 0;
        fib = 1;
        cout << fib << endl;

        for(int i = 1; i <= n; i++){
            aux = fib;
            fib = antfib + fib;
            antfib = aux;

            cout << fib << endl;
        }
    }
}
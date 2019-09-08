#include <iostream>
#include <cmath>

using namespace std;
//Função que verifica se número é prrimo
bool primo(int n){
    if(n < 5) return (n == 2 || n == 3);
    int max = sqrt(n);
    for(int i = 2; i <= max; i++){
        if(n%i == 0){
            return false;
        }
    }

    return true;
}


//Programa para calcular o n-ésimo primo inteiro positivo
int main(){
    int n, p;
    cin >> n;

    if(n > 0){
        int cont, iter, p;

        if(n == 1)  cout << 2 << endl;
        else{
            cont = 5;
            iter = 2;
            p = 3;

            while(iter < n){
                if(primo(cont)){
                    iter++;
                    p = cont;
                }
                cont = cont + 2;
            }

            cout << p << endl;
        }
    }

}
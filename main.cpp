#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "tests.hpp"

using namespace std;

void clear_interface();
int pause_interface();
void main_interface_call();
void sort_interface();
void search_interface();

int main(){
    main_interface_call();
    return 0;
}

void clear_interface(){
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #else defined(__linux__) || defined(__unix__)
        system("clear");
    #endif
}

int pause_interface(){
    cout << endl << "Presione 'c' para continuar...";
    string exit = " ";
    while(exit != "C" && exit != "c"){
        cin >> exit;
    }

    return 0;
}

void main_interface_call(){
    bool loop = true;

    while (loop == true){
        string input;

        clear_interface();
        cout << "------SELECIONE A IMPLEMENTAÇÃO-------" << endl;
        cout << endl;
        cout << "1: Busca      " << "2: Ordenação      " << "3: Conversão de base" << endl;
        cout << endl << "Insira 'x' para sair..." << endl;

        cin >> input;

        if(input == "1"){
            search_interface();
        } else if(input == "2"){
            sort_interface();
        } else if(input == "x"|| input == "X"){
            loop = false;
        } else {
            cout << "Opção não encontrada..." << endl;
            pause_interface();
        }

    }
}

void sort_interface(){
    bool loop = true;

    while (loop == true){
        string input;

        clear_interface();
        cout << "------SELECIONE O ALGORITMO DE ORDENAÇÃO-------" << endl;
        cout << endl;
        cout << "1: Insertion Sort      " << "2: Merge Sort      " << "3: Quicksort" << endl;
        cout << "4: Counting Sort" << endl;
        cout << endl << "Insira 'x' para sair..." << endl;

        cin >> input;

        if(input == "1"){
            array_tests(3);
            pause_interface();

        } else if(input == "2"){
            array_tests(4);
            pause_interface();

        } else if(input == "3"){
            array_tests(5);
            pause_interface();

        } else if(input == "4"){
            array_tests(6);
            pause_interface();

        } else if(input == "x"|| input == "X"){
            loop = false;
        } else {
            cout << "Opção não encontrada..." << endl;
            pause_interface();
        }

    }

}

void search_interface(){
    bool loop = true;

    while (loop == true){
        string input;

        clear_interface();
        cout << "------SELECIONE O TIPO DE BUSCA-------" << endl;
        cout << endl;
        cout << "1: Máximo      " << "2: Mínimo      " << endl;
        cout << endl << "Insira 'x' para sair..." << endl;

        cin >> input;

        if(input == "1"){
            array_tests(1);
            pause_interface();

        } else if(input == "2"){
            array_tests(2);
            pause_interface();

        } else if(input == "x"|| input == "X"){
            loop = false;
        } else {
            cout << "Opção não encontrada..." << endl;
            pause_interface();
        }

    }
}
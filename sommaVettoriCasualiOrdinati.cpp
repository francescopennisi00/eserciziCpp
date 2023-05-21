/*
Scrivere un programma C++ che, dati due vettori di 15 elementi, di cui il primo vettore contenga numeri interi generati casualmente compresi tra 
0 e 100 e riempiti in ordine decrescente e il secondo vettore contenga numeri interi generati casualmente compresi tra -100 e 0 e riempiti in
ordine crescente, costruire un terzo vettore che contenga la somma degli elementi corrispondenti dei primi due vettori.
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>

#define NUM 15
#define MIN1 0
#define MAX1 100
#define MIN2 -100
#define MAX2 0

using namespace std;

int main () {

    int vett1[NUM], vett2[NUM], vett3[NUM];

    srand(time(0));

    int last = 101;

    for(int i=0; i<NUM; i++) {

        do {
            vett1[i] = rand()%(MAX1 - MIN1 + 1) + MIN1;
        } while(vett1[i] > last);

        last = vett1[i];

    }

    last = -101;

    for(int i=0; i<NUM; i++) {

        do {
            vett2[i] = rand()%(MAX2 - MIN2 + 1) + MIN2;
        } while(vett2[i] < last);

        last = vett2[i];

    }

    cout <<endl<< "VETTORE 1"<<endl<<endl;
    for(int i=0; i<NUM; i++) {
        cout << "Elemento " << i+1 <<" = " << vett1[i]<<endl;
    }

    cout <<endl<< "VETTORE 2"<<endl<<endl;
    for(int i=0; i<NUM; i++) {
        cout << "Elemento " << i+1 <<" = " << vett2[i]<<endl;
    }

    for(int i=0; i<NUM; i++) {
        vett3[i] = vett1[i] + vett2[i];
    }

    cout <<endl<< "VETTORE 3"<<endl<<endl;
    for(int i=0; i<NUM; i++) {
        cout << "Elemento " << i+1 <<" = " << vett3[i]<<endl;
    }  

}
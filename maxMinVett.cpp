/*
Trovare il massimo e il minimo di un vettore di 10 interi generati casualmente tra 0 e 25.
Dopo averli trovati, calcolare il loro prodotto e la loro media aritmetica intera e inserirli al centro di un altro vettore che contenga anche i 10 
elementi precedenti in cui massimo e minimo vengano scambiati di posto.
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main () {

    int vett[10];

    srand(time(0));

    for(int i=0; i<10; i++) {
        vett[i] = rand()%(25-0+1)+0;
    }

    int max = vett[0];
    int min = vett[0];
    int posMax = 0, posMin = 0;

    for(int i=0; i<10; i++) {
        if(vett[i] < min) {
            min = vett[i];
            posMin = i;
        }
        if(vett[i] > max) {
            max = vett[i];
            posMax = i;
        }
    }

    cout << "VETTORE INIZIALE"<<endl<<endl;

    for(int i=0;i<10;i++) {
        cout<<vett[i]<<endl;
    }

    int prod = max*min;
    int media = (max+min)/2;

    cout <<endl<< "Il prodotto tra il massimo e il minimo e': " << prod <<endl;
    cout <<endl<< "La media intera tra il massimo e il minimo e': " << media <<endl;   

    int vett2[12];

    /*

    vett2[posMin] = vett[posMax];
    vett2[posMax] = vett[posMin];

    for(int i=0;i<10;i++) {
        if(i!=posMin && i!=posMax) {
            vett2[i] = vett[i];
        }
    }

    vett2[10] = prod;
    vett2[11] = media;

   */

    vett2[5] = prod;
    vett2[6] = media;

    if(posMin < 5 && posMin < 5) {
        vett2[posMin] = vett[posMax];
        vett2[posMax] = vett[posMin];
    }

    else if(posMin >= 5 && posMin >= 5) {
        vett2[posMin + 2] = vett[posMax];
        vett2[posMax + 2] = vett[posMin];
    }

    else if(posMin < 5 && posMax >= 5) {
        vett2[posMin] = vett[posMax];
        vett2[posMax + 2] = vett[posMin];
    }

    else if(posMax < 5 && posMin >= 5) {
        vett2[posMax] = vett[posMin];
        vett2[posMin + 2] = vett[posMax];
    }

    for(int i=0;i<5;i++) {
        if(i != posMax && i != posMin) {
            vett2[i] = vett[i];
        }
    }

    int j=5;
    for(int i=7;i<12;i++) {
        if(i != (posMax + 2) && i != (posMin + 2)) {
            vett2[i] = vett[j];
        }
        j++;
    }

    cout <<endl<< "VETTORE MODIFICATO"<<endl<<endl;

    for(int i=0;i<12;i++) {
        cout<<vett2[i]<<endl;
    }

}
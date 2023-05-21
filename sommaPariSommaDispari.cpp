/*
Scrivere un programma che, dato un vettore di 20 numeri interi in cui i primi 10 sono inseriti dall'utente e gli ultimi 10 sono generati 
casualmente tra 0 e 10, effettui la differenza tra la somma degli elementi pari e la somma degli elementi dispari
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>

#define NUM 20
#define SUP 10
#define INF 0

using namespace std;
 
int main () {

    int vett[NUM];
    int sommaPari = 0, sommaDispari = 0;

    cout << "Inserisci i primi " << NUM/2 <<" elementi del vettore"<<endl<<endl;

    for(int i=0;i<NUM/2;i++) {
        cout << endl << "Inserisci l'elemento " << i+1 << ": ----> ";
        cin >> vett[i];
        if (vett[i]%2 == 0)
            sommaPari += vett[i];
        else
            sommaDispari += vett[i];
    }

    for(int i= NUM/2;i<NUM;i++) {
        vett[i] = rand()%(SUP-INF+1) + INF;
        if (vett[i]%2 == 0)
            sommaPari += vett[i];
        else
            sommaDispari += vett[i];
    }

    cout <<endl<<endl<< "VISUALIZZAZIONE DEL VETTORE PER INTERO"<<endl;

    for(int i=0;i<NUM;i++) {
        cout <<endl<<"Elemento " <<i+1<<" = " << vett[i];
    }

    cout <<endl<<endl<<"La differenza tra la somma degli elementi pari e la somma degli elementi dispari e' " << sommaPari - sommaDispari;

}
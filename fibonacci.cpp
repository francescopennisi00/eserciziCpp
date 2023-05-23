/*
Scrivere un programma C++ che riempia un vettore con i primi 50 elementi della successione di Fibonacci ed effettui la media dei numeri multipli
di 3.
La successione di Fibonacci presenta i seguenti termini: 1,1,2,3,5,8,13,21,34,55,...
*/

#include <iostream>

using namespace std;

int main () {

    //int 
    unsigned long vett[50], conta = 0, somma = 0;

    vett[0] = 1;
    vett[1] = 1;

    //int
    unsigned long prec1 = vett[0];
    unsigned long prec2 = vett[1];

    cout << "SUCCESSIONE DI FIBONACCI" <<endl;
    cout <<endl<<prec1;
    cout<<endl<<prec2;

    for(int i=2;i<50;i++) {
        vett[i] = prec1 + prec2;
        prec2 = vett[i];
        prec1 = vett[i-1];
        cout<<endl<<vett[i];
        if(vett[i]%3==0) {
            conta++;
            somma += vett[i];
        }
    }
                                                                                                  //float
    cout <<endl<<endl<< "La media dei numeri multipli di 3 della successione di Fibonacci e' " << (double)somma/conta;

}
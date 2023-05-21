//scrivere un programma che faccia inserire 15 numeri float, calcolare la media dei numeri maggiori di 10 

#include <iostream>
using namespace std;

int main(){

    float num[15], som=0, media;
    int cont=0;

    cout<<"Inserisci 15 numeri "<<endl;

    for(int i=0; i<15; i++) {
        cin>>num[i];
        if (num[i]>10){
            som=som+num[i];
            cont++;
        }
    }

    media=som/cont;
    
    cout<<"la media dei numeri inseriti maggiori di 10 e' "<<media<<endl;

}
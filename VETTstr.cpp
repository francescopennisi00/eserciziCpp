/*
Dati due vettori di interi da 10 elementi generati casualmente tra 0 e 10 e due stringhe ciascuna di massimo 10 caratteri inserite dall'utente,
se la prima delle due stringhe e' piu' lunga della seconda, inserire in un terzo vettore la somma del primo elemento del primo vettore e dell'ultimo
elemento del secondo vettore nel primo elemento, la somma del secondo elemento del primo vettore e del penultimo elemento del secondo vettore e
cosi' via...
se, invece, la seconda stringa e' piu' lunga della prima, anziche' usare la somma usare il prodotto.
Infine, se le due stringhe sono della stessa lunghezza, controllare se sono o meno la stessa stringa e visualizzare un messaggio che indichi se lo
sono o no.
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define NUM 10
#define SUP 10
#define INF 0
#define LIM 10

using namespace std;


int main () {

    int vett1[NUM], vett2[NUM], vett3[NUM];

    srand(time(0));

    for(int i=0; i<NUM; i++) {
        vett1[i] = rand()%(SUP-INF+1) + INF;
        vett2[i] = rand()%(SUP-INF+1) + INF;
    }

    char stringa1[11], stringa2[11];

    do {
        cout<<endl<<"Inserisci la prima stringa di massimo " <<LIM<<" caratteri"<<endl<<" ----> ";
        cin>>stringa1;
        cout<<endl<<"Inserisci la seconda stringa di massimo "<<LIM<<" caratteri"<<endl<<" ----> ";
        cin>>stringa2;        
    } while(strlen(stringa1) > LIM || strlen(stringa2) > LIM);

    cout<<endl<<endl<<"VETTORE 1"<<endl;
    for(int i=0;i<NUM;i++) {
        cout<<endl<<vett1[i];
    }

    cout<<endl<<endl<<"VETTORE 2"<<endl;
    for(int i=0;i<NUM;i++) {
        cout<<endl<<vett2[i];
    }

    if(strlen(stringa1) > strlen(stringa2)) {
        cout<<endl<<endl<<"VETTORE 3"<<endl;
        for(int i=0; i<NUM; i++) {
            vett3[i] = vett1[i] + vett2[NUM-1-i];
            cout<<endl<<vett3[i];
        }
    } else if (strlen(stringa2) > strlen(stringa1)) {
        cout<<endl<<endl<<"VETTORE 3"<<endl;
        for(int i=0; i<NUM; i++) {
            vett3[i] = vett1[i] * vett2[NUM-1-i];
            cout<<endl<<vett3[i];
        }
    } else {
        if(strcmp(stringa1,stringa2) == 0) {
            cout<<endl<<endl<<"Le due stringhe sono identiche"<<endl;
        } else {
            cout<<endl<<endl<<"Le due stringhe hanno la stessa lunghezza ma sono diverse"<<endl;            
        }
    }

}
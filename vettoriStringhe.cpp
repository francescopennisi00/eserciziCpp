/*
Generare casualmente i numeri interi di 2 vettori da 15 posti. Questi numeri devono essere compresi tra 50 e 100.
Calcolare la media degli elementi pari dei due vettori e quella degli elementi dispari e stamparle a video.
Richiedere all'utente l'inserimento di due parole.
Se la prima media è maggiore o uguale alla seconda, copiare in una terza stringa la prima e modificare la seconda stringa in modo che le vocali
vengano sostuite dai numeri da 0 a 4 in modo che 'a' diventi '0', 'e' diventi '1' e così via.
Se la prima media è minore della seconda, stampare a video la stringa che viene prima nell'ordine alfabetico.
*/

#include <iostream>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define NUM 15
#define SUP 100
#define INF 50

using namespace std;

int main () {

    int vett1[15], vett2[15], sommaPari = 0, sommaDispari = 0, contaPari = 0, contaDispari = 0;
    float mediaPari, mediaDispari;

    srand(time(0));
    
    for(int i=0; i<NUM; i++) {
        vett1[i] = rand()%(SUP-INF+1) + INF;
        if(vett1[i]%2==0) {
            sommaPari += vett1[i];
            contaPari++;
        } else {
            sommaDispari += vett1[i];
            contaDispari++;
        }
        vett2[i] = rand()%(SUP-INF+1) + INF;
        if(vett2[i]%2==0) {
            sommaPari += vett2[i];
            contaPari++;
        } else {
            sommaDispari += vett2[i];
            contaDispari++;
        }
    }

    mediaPari = (float) sommaPari/contaPari;
    mediaDispari = (float) sommaDispari/contaDispari; 

    cout <<endl<<endl<< "VETTORE 1" <<endl;
    for(int i=0; i<NUM; i++) {
        cout<<"Elemento "<<i+1<<" = "<<vett1[i]<<endl;
    }

    cout <<endl<<endl<< "VETTORE 2" <<endl;
    for(int i=0; i<NUM; i++) {
        cout<<"Elemento "<<i+1<<" = "<<vett2[i]<<endl;
    }

    cout<<endl<<"La media degli elementi pari dei due vettori e' " <<mediaPari<<endl;
    cout<<endl<<"La media degli elementi dispari dei due vettori e' " <<mediaDispari<<endl;  

    char stringa1[15], stringa2[15], stringa3[15];

    cout <<endl<< "Inserisci la prima stringa"<<endl<<"----> ";
    cin>>stringa1;

    cout <<endl<< "Inserisci la seconda stringa"<<endl<<"----> ";
    cin>>stringa2;

    if(mediaPari >= mediaDispari) {
        strcpy(stringa3,stringa1);
        for(int i=0; i<strlen(stringa2); i++) {
            switch (stringa2[i]) {
                case 'a': stringa2[i] = '0'; break;
                case 'e': stringa2[i] = '1'; break;
                case 'i': stringa2[i] = '2'; break;
                case 'o': stringa2[i] = '3'; break;
                case 'u': stringa2[i] = '4'; break;               
            }
        }

        cout<<endl<<"La stringa stringa3 adesso accoglie: ---- " <<stringa3<<endl;
        cout<<"La stringa stringa2 adesso accoglie: ---- " <<stringa2<<endl;
    } else {
        if(strcmp(stringa1,stringa2) < 0) {
            cout <<endl<<"La stringa che viene prima nell'ordine alfabetico e': ---- " <<stringa1;
        } else if (strcmp(stringa1,stringa2) > 0) {
            cout <<endl<<"La stringa che viene prima nell'ordine alfabetico e': ---- " <<stringa2;           
        } else {
            cout <<endl<<"Le due stringhe sono uguali";
        }
    }



}
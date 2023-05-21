/*
Scrivere un programma C++ che, date due stringhe (diverse) inserite dall'utente, faccia decidere all'utente stesso se copiare in una terza stringa la stringa
che viene alfabeticamente prima o dopo. La stringa non scelta deve essere sostuita dalla stringa "non scelta". 
*/

#include <iostream>
#include <string.h>

using namespace std;

int main () {

    char stringa1[15], stringa2[15], stringa3[15];

    do {

        cout<<endl<<endl<<"Inserisci due stringhe diverse";

        cout<<endl<<endl<<"Inserisci la prima stringa:"<<endl<<"----> ";
        cin>>stringa1;

        cout<<endl<<endl<<"Inserisci la seconda stringa:"<<endl<<"----> ";
        cin>>stringa2; 

    } while(strcmp(stringa1,stringa2) == 0);


    int scelta;  

    do {
        cout<<endl<<endl<<"Quale stringa vuoi copiare?"<<endl;
        cout<<"Seleziona 1 se vuoi scegliere quella che prima nell'ordine alfabetico o 0 se vuoi scegliere quella che viene dopo: "<<endl<<"----> ";
        cin>>scelta;
    } while(scelta != 0 && scelta != 1);

    if(strcmp(stringa1,stringa2) < 0) {

        if (scelta == 1) {
            strcpy(stringa3,stringa1);
            strcpy(stringa2,"non scelta");
            cout<<endl<<"Dopo le modifiche, la stringa1 (scelta e copiata) e': --- "<<stringa3<<" --- e la stringa2 (non scelta) e' --- ";
            cout<<stringa2<<" ---"<<endl;
        } else {
            strcpy(stringa3,stringa2);
            strcpy(stringa1,"non scelta");
            cout<<endl<<"Dopo le modifiche, la stringa2 (scelta e copiata) e': --- "<<stringa3<<" --- e la stringa1 (non scelta) e' --- ";
            cout<<stringa1<<" ---"<<endl;
        }

    } else {

        if (scelta == 1) {
            strcpy(stringa3,stringa2);
            strcpy(stringa1,"non scelta");
            cout<<endl<<"Dopo le modifiche, la stringa2 (scelta e copiata) e': --- "<<stringa3<<" --- e la stringa1 (non scelta) e' --- ";
            cout<<stringa1<<" ---"<<endl;
        } else {
            strcpy(stringa3,stringa1);
            strcpy(stringa2,"non scelta");
            cout<<endl<<"Dopo le modifiche, la stringa1 (scelta e copiata) e': --- "<<stringa3<<" --- e la stringa2 (non scelta) e' --- ";
            cout<<stringa2<<" ---"<<endl;
        }

    }



}
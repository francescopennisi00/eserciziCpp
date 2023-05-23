/*
Scrivere un programma C++ che richieda all'utente l'inserimento di due stringhe diverse. Copiare la stringa che viene alfabeticamente prima in una
terza stringa e visualizzarla. Dopodiché immettere in una quarta stringa la terza ma senza vocali. Dopo averlo fatto, visualizzarla.
*/

#include <iostream>
#include <string.h>

using namespace std;

int main () {

    char parola1[20], parola2[20], parola3[20], parola4[20];

    do {

        cout << "Inserisci la prima parola: "<<endl<<" ----> ";
        cin >> parola1;

        cout << "Inserisci la seconda parola: "<<endl<<" ----> ";
        cin >> parola2;

    } while(strcmp(parola1,parola2) == 0);

    int j=0;

    if(strcmp(parola1,parola2) < 0) {
        strcpy(parola3,parola1);
        cout<<endl<<"La parola copiata e': ----> "<<parola3<<endl;
    } else {
        strcpy(parola3,parola2);
        cout<<endl<<"La parola copiata e': ----> "<<parola3<<endl;
    }

    for(int i=0;i<strlen(parola3);i++) {
        switch(parola3[i]) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U': break;
            default: parola4[j++] = parola3[i];
        }
    }

    parola4[j] = '\0';

    cout<<"La parola senza vocali e': ----> "<<parola4<<endl;

}
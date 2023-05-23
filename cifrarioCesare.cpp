/*
CIFRARIO DI CESARE
Il cifrario di Cesare e' un sistema crittografico utilizzato da Giulio Cesare per nascondere i messaggi verso la patria durante il suo periodo in
Gallia dalle mani dei nemici.
Consisteva nel sostituire ad ogni lettera del messaggio un'altra lettera, in modo che ad esempio la lettera A sia sostituta dalla D, la lettera B 
sia sostituita dalla E, la lettera C sia sostituita dalla F ecc...

Scrivere un programma C++ che permetta all'utente di inserire una parola fatta di sole lettere maiuscole e di cifrarla e poi decifrarla 
secondo il cifrario di Cesare.
Quindi devono essere dichiarate 3 stringhe, una per la parola originale, una per la parola cifrata e una per la parola decifrata.
Delle tre stringhe mostrare direttamente solo le prime due, mentre per la terza bisogna prima verificare che coincide con la stringa della parola 
originale e poi mostrarla.
*/

#include <iostream>
#include <string.h>

using namespace std;

int main () {
    char parola[15], criptata[15], decriptata[15];

    int errore;

    do {

        errore = 0;

        cout <<endl<< "Inserisci la parola da criptare: "<<endl<<"----> ";
        cin >>parola;

        for(int i=0; i<strlen(parola);i++) {
            if(parola[i] < 'A' || parola[i] > 'Z') {
                errore = 1;
                break;
            }

        }
    } while(errore == 1);

    /*

    int shift; 

    do {

        cout <<"Inserisci l'entita' dello spostamento di cifratura da effettuare (da 0 a 26): "<<endl<<"----> ";
        cin >> shift;

    } while(shift < 0 || shift > 26);

    */

    for(int i=0; i<strlen(parola); i++) {
        criptata[i] = parola[i] + 3;  //+ shift;
        if(criptata[i] > 'Z') criptata[i] = criptata[i] - 26;  
    }
    criptata[strlen(parola)] = '\0';

    cout <<endl<< "La parola criptata e': ----> " <<criptata<<endl;

    for(int i=0; i<strlen(criptata); i++) {
        decriptata[i] = criptata[i] - 3;  //- shift;
        if(decriptata[i] < 'A') decriptata[i] = decriptata[i] + 26;
    }
    decriptata[strlen(criptata)] = '\0';

    if(strcmp(parola,decriptata) == 0) {
        cout <<endl<<"La parola decriptata e': ----> "<<decriptata<<endl;
    } else {
        cout<<endl<<"Errore in decifratura!!!"<<endl;
    }

}
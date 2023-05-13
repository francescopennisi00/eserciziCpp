/*
Scrivi un programma che indichi il numero di parole presenti in una frase o in un testo. 
Le varie parole sono costituite da lettere o numeri e separate tra loro da un qualunque carattere che non sia ne' una lettera ne' un numero.
*/

#include <iostream>
#include <string.h>

using namespace std;

int main () {

    char testo[] = "Nel mezzo del cammin di nostra vita...mi ritrovai in una selva oscura...che la diritta via era smarrita";

    int conta = 1; //il testo possiede almeno una parola

    for(int i=0; i <strlen(testo); i++) {
        if(!((testo[i] >= 'a' && testo[i] <= 'z') || (testo[i] >= 'A' && testo[i] <= 'Z') || (testo[i] >= '0' && testo[i] <= '9')))
            if((testo[i+1] >= 'a' && testo[i+1] <= 'z') || (testo[i+1] >= 'A' && testo[i+1] <= 'Z') || (testo[i+1] >= '0' && testo[i+1] <= '9'))
                conta++;  
    }

    cout << "Il testo -- " << testo << " -- e' costituito da " << conta << " parole";

}
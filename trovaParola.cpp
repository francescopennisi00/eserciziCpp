/*
Scrivi un programma che accetti una parola inserita dall'utente e indichi se la parola è presente in un testo, altrimenti restituisca falso.
Le varie parole sono separate tra loro da un qualunque carattere che non sia ne' una lettera ne' un numero.
*/

#include <iostream>
#include <string.h>

using namespace std;

int main () {

    char parola[20];

    char testo[] = "Nel mezzo del cammin di nostra vita...mi ritrovai in una selva oscura...che la diritta via era smarrita";

    cout << "Inserisci la parola che vuoi cercare nel testo: ";
    cin >> parola;

    int trovata = 0;

    for(int i=0; i <strlen(testo); i++) {
        if(!((testo[i] >= 'a' && testo[i] <= 'z') || (testo[i] >= 'A' && testo[i] <= 'Z') || (testo[i] >= '0' && testo[i] <= '9')))
            if((testo[i+1] >= 'a' && testo[i+1] <= 'z') || (testo[i+1] >= 'A' && testo[i+1] <= 'Z') || (testo[i+1] >= '0' && testo[i+1] <= '9')) {
                trovata = 1;
                //non uso strncmp anche se sarebbe piu' semplice
                // if (strncmp(parola, testo[i+1], strlen(parola)) != 0) {
                //     trovata = 0;
                //}
                for(int j=0; j<strlen(parola); j++) {
                    if(parola[j] != testo[(i++)+1])
                        trovata = 0;
                }
                if(trovata == 1) {
                    cout << "LA PAROLA " << parola << " E' CONTENUTA NEL TESTO " << testo;
                    return 0;
                }
            }
    }

    if (trovata == 0) { //non serve questo controllo, se arriviamo a eseguire questo if vuol dire che siamo usciti dal for senza il return
        cout << "LA PAROLA " << parola << " NON E' CONTENUTA NEL TESTO " << testo;
    }

}
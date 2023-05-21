/*
// Scrivere un programma C++ che, presa in input una stringa inserita dall'utente fatta solo di vocali e consonanti minuscole, sostituisca le vocali 
con il '.' e le consonanti con il '-'.
*/

#include <iostream>
#include <string.h>

using namespace std;

int main () {

    char stringa[20];

    int errore;

    do {

        errore = 0;

        cout << "Inserisci una parola fatta di sole lettere minuscole"<<endl<<"----> ";
        cin>>stringa;

        for(int i=0; i<strlen(stringa); i++) {
            if(stringa[i] < 'a' || stringa[i] > 'z') {
                errore = 1;
                break;
            }
        }

    } while(errore == 1);

    for(int i=0; i<strlen(stringa); i++) {
        switch(stringa[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': stringa[i] = '.'; break;
            default: stringa[i] = '-';
        }
    }

    cout<<endl<<"La parola modificata e': ----> " <<stringa;
}
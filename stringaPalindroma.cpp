/*
DATA UNA STRINGA INSERITA DALL'UTENTE, DIRE SE LA STRINGA E' PALINDROMA O MENO
*/

#include <iostream>
#include <string.h>
#include <cctype>

#define MAX 30

using namespace std;

int main () {

    char stringa[30];

    cout << "Inserire una stringa con un numero di caratteri < " << MAX << " e senza spazi  ";
    cin >> stringa;

    for(int i=0; i<strlen(stringa);i++) {
        stringa[i]=toupper(stringa[i]);
    }

    bool palindroma = true;

    for(int i=0; i<strlen(stringa)/2;i++) {
        if (stringa[i] != stringa[strlen(stringa) - 1 -i]) 
            palindroma = false;
    }

    if (palindroma) {
        cout << "\nLa stringa " << stringa << " e' palindroma";
    } else {
        cout << "\nLa stringa " << stringa << " non e' palindroma";      
    }

}


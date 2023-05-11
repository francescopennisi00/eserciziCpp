/*
Date 2 stringhe in ingresso mostrare in output la stringa che ha piu' vocali
*/

#include <iostream>
#include <string.h>
#include <cctype>

#define MAX 20

using namespace std;

int main () {

    char stringa1[MAX], stringa2[MAX];

    cout << "Inserisci la prima stringa (con un numero di caratteri < " << MAX << "):  ";
    cin >> stringa1;

    cout << "\nInserisci la seconda stringa (con un numero di caratteri < " << MAX << "):  ";
    cin >> stringa2;

    int conta1 = 0, conta2 = 0;
    char maiusc;

    for(int i=0;i<strlen(stringa1);i++) {
        maiusc = toupper(stringa1[i]);
        if(maiusc == 'A' || maiusc == 'E' || maiusc == 'I' || maiusc == 'O' || maiusc == 'U') {
            conta1++;
        }
    }

    for(int i=0;i<strlen(stringa2);i++) {
        maiusc = toupper(stringa2[i]);
        if(maiusc == 'A' || maiusc == 'E' || maiusc == 'I' || maiusc == 'O' || maiusc == 'U') {
            conta2++;
        }
    }

    if(conta1 >= conta2) {
        cout << "\nLa stringa con il maggior numero di vocali e': " << stringa1<<endl;
    } else {
        cout << "\nLa stringa con il maggior numero di vocali e': " << stringa2<<endl;        
    }

}
/*
Scrivere un programma C++ che richiede all'utente l'inserimento di 3 stringhe e visualizza quella che viene prima nell'ordine alfabetico
*/

#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;

int main() {

    char stringa1[20], stringa2[20], stringa3[20];

    cout << "\nInserisci la prima stringa (con un numero di caratteri < 20): ";
    cin >> stringa1;

    for(int i = 0; i < strlen(stringa1); i++) {
        stringa1[i] = tolower(stringa1[i]);
    }

    cout << "\nInserisci la seconda stringa (con un numero di caratteri < 20): ";
    cin >> stringa2;

    for(int i = 0; i < strlen(stringa2); i++) {
        stringa2[i] = tolower(stringa2[i]);
    }

    cout << "\nInserisci la terza stringa (con un numero di caratteri < 20): ";
    cin >> stringa3;

    for(int i = 0; i < strlen(stringa3); i++) {
        stringa3[i] = tolower(stringa3[i]);
    }

    if(strcmp(stringa1,stringa2) < 0) {
        //ha vinto stringa 1
        if(strcmp(stringa1,stringa3) < 0) {
            cout << "La stringa che viene prima nell'alfabeto e': " << stringa1 <<endl;
        }
        else {
            cout << "La stringa che viene prima nell'alfabeto e': " << stringa3 <<endl;           
        }
    } else {
        //ha vinto stringa 2
        if(strcmp(stringa2,stringa3) < 0) {
            cout << "La stringa che viene prima nell'alfabeto e': " << stringa2 <<endl;
        }
        else {
            cout << "La stringa che viene prima nell'alfabeto e': " << stringa3 <<endl;           
        }        
    }

}
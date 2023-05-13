/*
Scrivere un programma che richieda all'utente due stringhe e costruisca una nuova stringa che sia la loro concatenazione.
Se le due stringhe sono uguali, nella stringa risultante queste devono essere separate dai caratteri ' ', '=', ' ', in quest'ordine.
Dopo aver costruito la stringa, verificare che la sua lunghezza sia corretta.
*/

#include <iostream>
#include <string.h>

using namespace std;

int main () {

    char stringa1[20], stringa2[20], stringa3[40];

    cout << "Inserisci la prima stringa: ";
    cin >> stringa1;

    cout << "Inserisci la seconda stringa: ";
    cin >> stringa2;

    int index=0;

    for(int i=0; i<strlen(stringa1); i++) {
        stringa3[i]=stringa1[i];
        index++;
    }
    
    if(strcmp(stringa1,stringa2) == 0) {
    	stringa3[index++] = ' ';
    	stringa3[index++] = '=';
    	stringa3[index++] = ' ';	
	}

    for(int i=0; i<strlen(stringa2); i++) {
        stringa3[index]=stringa2[i];
        index++;
    }

    stringa3[index] = '\0';

    cout<<"La lunghezza della stringa " << stringa3 << " e': " << strlen(stringa3);
}
//Fare inserire una parola e sostituire ogni lettera che compone il nome con la lettera che nell'alfabeto viene dopo(esempio; CIAO diventa DJBP)

#include <iostream>
#include <string.h>

using namespace std;

int main () {

    char parola[15];

    cout << "Inserisci la parola: ----> ";
    cin >> parola;

    for(int i=0;i<strlen(parola);i++) {
        parola[i] = parola[i] + 1;
    }

    cout << "La parola modificata e': ----> " << parola;

}
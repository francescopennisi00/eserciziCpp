//inserire 3 nomi , copiare nella terza stringa quelle delle due che inserisce l'utente che viene prima alfabeticamente

#include <iostream>
#include <string.h>

using namespace std;

int main () {

    char stringa1[15],stringa2[15],stringa3[15];

    cout<<"Inserisci la prima stringa: -----> ";
    cin>>stringa1;
    cout<<"Inserisci la seconda stringa: -----> ";
    cin>>stringa2;

    if(strcmp(stringa1,stringa2) < 0) {
        strcpy(stringa3,stringa1);
        cout<<"la parola copiata nella terza stringa e': -----> "<<stringa3<<endl;
    } else {
        strcpy(stringa3,stringa2);
        cout<<"La parola copiata nella terza stringa e': ----> "<<stringa3<<endl;
    }

}

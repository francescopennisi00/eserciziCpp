//fare inserire all'utente due stringhe, dire se la prima viene alfabeticamente prima della seconda, se così non fosse, occorre scambiarle 
//cioè stringa1 deve diventare stringa2 e viceversa

#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char stringa1[15], stringa2[15], stringa_appoggio[15]; 

    cout<<"Inserisci la prima stringa: -----> ";
    cin>>stringa1;

    cout<<"Inserisci la seconda stringa: -----> ";
    cin>>stringa2;

    if(strcmp(stringa1, stringa2)<0)
        cout<<"La prima stringa ("<< stringa1 << ") viene alfabeticamente prima della seconda (" << stringa2 << ")"<<endl;

    else {

        strcpy(stringa_appoggio, stringa1);
        strcpy(stringa1,stringa2);
        strcpy(stringa2,stringa_appoggio);

        cout<<"La prima stringa dopo lo scambio e' "<<stringa1<<endl;
        cout<<"La seconda stringa dopo lo scambio e' "<<stringa2<<endl;
    }
}
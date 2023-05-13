/*
Scrivere un programma C++ che richieda all'utente l'inserimento di una password fino a che l'utente non inserisce la password corretta.
La password deve contenere almeno 8 caratteri, tra cui una lettera maiuscola, un numero e un carattere speciale.
Se l'utente non inserisce una password corretta, il programma mostra un messaggio di errore.
*/

#include <iostream>
#include <string.h>

using namespace std;

int main() {

    char pass[20]="Mariavera1!";
    char password[20];

    do {
        cout<<"inserisci la password"<<endl;
        cin>>password;

        if(strcmp(pass,password) == 0)
            cout<<"la password e' corretta"<<endl;
        else {

            cout<<"la password e' sbagliata"<<endl;

            int l=strlen(password);
            int clet=0;
            int cnum=0;
            int ccs=0;

            if(l<8) cout <<"la password deve avere almeno 8 caratteri"<<endl;

            for(int i=0;i<l;i++){
                if(password[i]>='A' && password[i] <= 'Z') clet++;
                if(password[i] >= '!' && password[i] <= '/') ccs++;
                if(password[i]>='1'&& password[i]<='9') cnum++;
            }

            if (clet == 0) cout <<"la password deve contenere alemno una lettera maiuscola"<<endl;
            if (ccs == 0) cout<<"la password deve contenere almeno un carattere speciale"<<endl;
            if(cnum == 0) cout<<"la password deve contenere almeno un numero"<<endl;

        }

    }while(strcmp(pass,password)!=0);

}
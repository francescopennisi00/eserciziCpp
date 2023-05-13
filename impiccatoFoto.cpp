/*
Scrivere un programma che faccia inserire una parola all'utente, crei un'altra stringa che contenga tanti * quante sono le lettere della prima
parola (es. p1=fiore p2=*****), poi chieda all'utente una lettera e controlli se è presente nella prima parola: se sì, nella seconda parola, nella 
posizione corrispondente, al posto dell'* verrà messa la lettera (es. lettera e p2=****e)
*/

#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char parola[15],incognita[15],lettera;
    int lung,comp,tent=7;
    cout <<"inserisci la parola"<<endl;
    cin>>parola;
    lung=strlen(parola);
    for(int i=0;i<lung;i++){
        incognita[i]='*';
    }
    incognita[lung]='\0';
    do{
        system("cls");
        cout<<"hai a disposizione "<<tent<<"tentativi"<<endl;
        int controllo=0;
        cout<<endl<<incognita<<endl;
        cout<<endl<<"inserire una lettera"<<endl;
        cin>>lettera;
        for(int i=0;i<lung;i++){
            if(parola[i]==lettera){
                incognita[i]=lettera;
                controllo=1;
            }


        }
        if(controllo==0){
            cout<<"lettera non presente nella parola "<<endl;
            tent--;
            system("pause");

        }
        comp= strcmp(incognita,parola);

    }while(comp!=0&&tent>0);
    cout<<"Hai vinto,la parola e' "<<incognita<<endl;
    system("pause");
}
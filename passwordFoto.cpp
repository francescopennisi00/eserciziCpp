#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char pass[20]="Mariavera1!";
    char passwor[20];

    do {
        cout<<"inserisci la password"<<endl;
        cin>>passwor;
        if(strcmp(pass,passwor) == 0)
        cout<<"la password e' corretta"<<endl;
        else {cout<<"la password e' sbagliata"<<endl;
        int l=strlen(passwor);
        int clet=0;
        int cnum=0;
        int ccs=0;
        if(l<8) cout <<"la password deve avere almeno 8 caratteri"<<endl;
        for(int i=0;i<l;i++){
            if(passwor[i]>='A'&&passwor[i] <= 'Z') clet++;
            if(passwor[i] >= '!'&&passwor[i] <= '/') ccs++;
                if(passwor[i]>='1'&&passwor[i]<='9') cnum++;
        }
        if (clet == 0) cout <<"la password deve contenere alemno una lettera maiuscola"<<endl;
        if (ccs == 0) cout<<"la password deve contenere almeno un carattere speciale"<<endl;
        if(cnum == 0) cout<<"la password deve contenere almeno un numero"<<endl;

        }

    }while(strcmp(pass,passwor)!=0);



}
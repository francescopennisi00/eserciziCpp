/*
Scrivere un programma che riceve dall'utente una stringa s1 e due indici i e j, e copia in un'altra stringa s2 la sottostringa di s1 che va 
dal carattere i-esimo al carattere j-esimo della stringa s1. 
Ad esempio, se s1 fosse "altalena", i fosse 2 e j fosse 5, in s2 dovrebbe essere inserita la stringa "tale".
*/

#include <iostream>
#include <string.h>

using namespace std;

int main() {

    char s1[40], s2[40];

    cout<<"Inserisci la stringa: ---> ";
    cin>>s1;

    int i,j;
    cout<<endl<<"Inserisci il primo indice: ---> ";
    cin>>i;
    
    cout<<endl<<"Inserisci il secondo indice: ---> ";
    cin>>j;

    int index = 0;
    for(int h=i;h<=j;h++){
        s2[index]=s1[h];
        index++;
    }
    s2[index]='\0';

    cout<<endl<<"Sottostringa di "<< s1 << " da " << i << " a " << j << ": " << s2;


}

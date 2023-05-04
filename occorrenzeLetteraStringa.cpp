#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char nome1[20], nome2[20], lettera;
	int contprimo = 0, contsec=0;
	cout<<"inserisci due nomi\n";
	cin>>nome1;
	cin>>nome2;
	/*
	if(nome1>nome2) {
		cout<<"il nome piu' lungo e' "<<nome1<<"\n";
	} else if (nome1 == nome2) {
		cout<<"i nomi hanno la stessa lunghezza"<<"\n";
	} else if (nome2 > nome1) {
		cout<<"il nome piu' lungo e' "<<nome2<<"\n";
	}
	
	questo codice è sbagliato perché effettua il confronto tra i primi caratteri di nome1 e nome2 poiche' il nome della stringa, 
	che e' un array, coicide con il suo primo elemento, quello di indice 0
	
	il confronto tra i due caratteri viene impostato tra i relativi codice ASCII, che sono degli interi (codice ASCII del carattere 'a' è 97, di 'b' è 98 ecc...)
	if ( nome1 > come2 ) vuol dire "se il codice ASCII di nome1[0] è maggiore del codice ASCII di nome2[0] allora ... "
	poiché i codice ASCII seguono l'ordine alfabetico, il confronto (nome1 > nome2) è vero quando il carattere nome1[0] segue nell'alfabeto il carattere nome2[0]
	
	MA A NOI INTERESSA VEDERE SE LA nome1 HA UN NUMERO DI CARATTERI MAGGIORE, MINORE O UGUALE A nome2.
	PERTANTO, IL CODICE CHE POSSIAMO USARE E' QUESTO:
	*/
	
	if(strlen(nome1) > strlen(nome2)) {
		cout<<"il nome piu' lungo e' "<<nome1<<"\n";
	} else if (strlen(nome1) == strlen(nome2)) {
		cout<<"i nomi hanno la stessa lunghezza"<<"\n";
	} else if (strlen(nome2) > strlen(nome1)) {
		cout<<"il nome piu' lungo e' "<<nome2<<"\n";
	}
	
	cout<<"inserisci la lettera della quale vuoi vedere in quale nome e' contenuta di piu'"<<endl;
	cin>>lettera;
	for(int i=0;nome1[i] != '\0'; i++) {
		if(nome1[i] == lettera) {
			contprimo++;
		}
	}
	for(int i=0;nome2[i]!='\0';i++) {
		if(nome2[i] == lettera) {
			contsec++;
		}
	}
	if(contprimo>contsec) {
		cout<<"il nome che contiene piu' volte la lettera " << lettera <<" e' "<<nome1<<"\n";
	} else if (contsec > contprimo) {
		cout<<"il nome che contiene piu' volte la lettera " << lettera <<" e' "<<nome2<<"\n";
	} else if(contsec == contprimo) {
		cout<<"la lettera "<< lettera << " e' contenuta lo stesso numero di volte nei due nomi"<<"\n";
	}
	
}

/*
DATI IN INGRESSO 2 VETTORI DI n ELEMENTI, COSTRUIRE UN TERZO VETTORE CONTENENTE, ALTERNATIVAMENTE, GLI ELEMENTI DEI DUE VETTORI PRECEDENTI

ESEMPIO:
Vettore 1 = [4,7,21,6]
Vettore 2 = [5,9,13,8]
Vettore 3 = [4,5,7,9,21,13,6,8]                                                    
*/


//includo le librerie di cui ho bisogno: in questo caso solo <iostream> per l'input/output (cin/cout)
#include <iostream>

using namespace std;



int main (void) {

    //variabile che conterra' la dimensione dei due vettori di partenza
    int n;


    //richiedo all'utente la dimensione dei vettori (> 0)
    do {
        cout << "Inserisci il numero di elementi dei vettori (> 0): ";
        cin >> n;
    } while(n <= 0); //rieffettuo le operazioni dentro il do-while fino a quando l'utente non inserisce un valore che vada bene


    //una volta conosciuta la dimensione dei vettori, posso dichiararli
    int vett1[n], vett2[n];




    //adesso devo riempire i vettori: lo faccio fare all'utente
    for(int i = 0; i < n; i++) {

        //inserimento nel primo vettore
        cout << "\nInserisci l'elemento del vettore 1 di posto " << i+1 << ": "; //ES. vett[0] e' l'elemento di posto 1, vett[1] e' quello di posto 2 e cosi' via...
        cin >> vett1[i];

        //inserimento nel secondo vettore
        cout << "\nInserisci l'elemento del vettore 2 di posto " << i+1 << ": "; //ES. vett[0] e' l'elemento di posto 1, vett[1] e' quello di posto 2 e cosi' via...
        cin >> vett2[i];    

    }




    //una volta riempiti i due vettori, li visualizzo (quindi visualizzo ogni loro elemento tramite due diversi cicli for, uno per il vettore 1 e uno per il vettore 2)

    //visualizzazione vettore 1
    cout << "\n\nVETTORE 1" <<endl; //messaggio iniziale, da visualizzare una volta sola, quindi lo metto fuori dal ciclo for 
    for(int i=0; i<n; i++) {
        cout << "\nElemento " << i+1 << "= " << vett1[i]; //messaggio di visualizzazione del singolo elemento (da ripetere per tutti gli elementi del vettore)
    }

    //visualizzazione vettore 2
    cout << "\n\nVETTORE 2" <<endl; //messaggio iniziale, da visualizzare una volta sola, quindi lo metto fuori dal ciclo for 
    for(int i=0; i<n; i++) {
        cout << "\nElemento " << i+1 << "= " << vett2[i]; //messaggio di visualizzazione del singolo elemento (da ripetere per tutti gli elementi del vettore)
    }   





    //ADESSO DEVO COSTRUIRE IL TERZO VETTORE ALTERNANDO GLI ELEMENTI DEL PRIMO E DEL SECONDO


    //dichiaro il vettore 3, (poiche' deve contenere alternativamente gli elementi dei due vettori di partenza, avra' come dimensione 2*n,
    // cioe' avra' il doppio degli elementi dei due vettori di partenza)
    int vett3[2*n];





    //tramite un primo ciclo for, inserisco gli elementi del primo vettore nel terzo vettore
    //gli elementi del primo vettore andranno nelle posizioni di indice 0, 2, 4, 6 e cosi' via...

    int j = 0; //questo è l'indice del vettore 1 (inizialmente lo metto a 0 perche' e' l'indice del primo elemento del vettore)
    
    for(int i=0; i < 2*n; i=i+2) { //non metto i++, ma i= i+2, perche' voglio che i passi da 0 a 2 a 4 ecc..
        vett3[i] = vett1[j];
        j++; //devo incrementare j, cosi' il prossimo elemento che inseriro' nel vettore 3 sara' il successivo nel vettore 1
    }



    //tramite un secondo ciclo for, inserisco gli elementi del secondo vettore nel terzo vettore
    //gli elementi del secondo vettore andranno nelle posizioni di indice 1, 2, 5, 7 e cosi' via...

    int k = 0; //questo è l'indice del vettore 2 (inizialmente lo metto a 0 perche' e' l'indice del primo elemento del vettore)
    
    for(int i=1; i < 2*n; i=i+2) { //non metto i++, ma i= i+2, perche' voglio che i passi da 1 a 3 a 5 ecc..
        vett3[i] = vett2[k];
        k++; //devo incrementare k, cosi' il prossimo elemento che inseriro' nel vettore 3 sara' il successivo nel vettore 2
    }



    //una vola costruito il terzo vettore, lo visualizzo

    cout << "\n\nVETTORE 3" <<endl; //messaggio iniziale, da visualizzare una volta sola, quindi lo metto fuori dal ciclo for 
    for(int i=0; i<2*n; i++) {
        cout << "\nElemento " << i+1 << "= " << vett3[i]; //messaggio di visualizzazione del singolo elemento (da ripetere per tutti gli elementi del vettore)
    }


    //stampo un carattere di ritorno a capo cosi' il messaggio: "premere un tasto per continuare..." si posiziona a capo
    cout << "\n";

    //per bloccare la visualizzazione: messaggio "premere un tasto per continuare ..."
    system("pause");

}
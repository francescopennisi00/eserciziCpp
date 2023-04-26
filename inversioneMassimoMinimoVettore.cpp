/*
ESERCIZIO 44
DATO UN VETTORE DI n ELEMENTI CON n<100 INVERTIRE LA POSIZIONE DEL MASSIMO E DEL MINIMO E VISUALIZZARLI

ES. VETTORE DI PARTENZA = [1 2 3 4 0 1]  -> VETTORE FINALE = [1 2 3 0 4 1]
*/


//includo le librerie di cui ho bisogno: in questo caso solo <iostream> per l'input/output (cin/cout)
#include <iostream>

using namespace std;

//dichiaro una costante per il massimo numero di elementi del vettore
#define MAX 100




int main (void) {

    //variabile che conterra' la dimensione del vettore
    int n;


    //richiedo all'utente la dimensione del vettore (minimo 2 elementi, affinché ci siano un massimo ed un minimo)
    do {
        cout << "Inserisci il numero di elementi del vettore (almeno 2 ma meno di 100): ";
        cin >> n;
    } while(n < 2 || n >= MAX); //rieffettuo le operazioni dentro il do-while fino a quando l'utente non inserisce un valore che vada bene


    //una volta conosciuta la dimensione del vettore, posso dichiararlo
    int vett[n];


    //adesso devo riempire il vettore: lo faccio fare all'utente
    for(int i = 0; i < n; i++) {
        cout << "\nInserisci l'elemento del vettore di posto " << i+1 << ": "; //ES. vett[0] e' l'elemento di posto 1, vett[1] e' quello di posto 2 e cosi' via...
        cin >> vett[i];
    }


    //una volta riempito il vettore, lo visualizzo (quindi visualizzo ogni suo elemento tramite un ciclo for)

    cout << "VETTORE DI PARTENZA" <<endl; //messaggio iniziale, da visualizzare una volta sola, quindi lo metto fuori dal ciclo for 
    for(int i=0; i<n; i++) {
        cout << "\nElemento " << i+1 << "= " << vett[i]; //messaggio di visualizzazione del singolo elemento (da ripetere per tutti gli elementi del vettore)
    }

    


    //ADESSO DEVO SCAMBIARE DI POSTO IL MASSIMO E IL MINIMO DEL VETTORE, QUINDI PRIMA DI TUTTO LI DEVO TROVARE

    //dichiaro due variabili che conterranno il massimo e il minimo del vettore (le inizializziamo entrambe al primo elemento del vettore)
    int max=vett[0], min=vett[0];

    //dichiaro due variabili che conterranno l'indice (cioe' la posizione nel vettore) del massimo e del minimo: ci servono per fare lo scambio
    //all'inizio sono a 0 perche' abbiamo detto che inizialmente il massimo e il minimo del vettore coincidono con il primo elemento (quello di indice 0)
    int posMax = 0, posMin = 0;



    //per la ricerca del massimo e del minimo parto dall'indice 1 (l'elemento di indice 0 e', per il momento sia il massimo che il minimo)

    for(int i=1; i < n; i++) {
        
        //se l'elemento del vettore vett[i] > max, allora vett[i] diventa il nuovo massimo, mentre i sarà la posizione, nel vettore, del nuovo massimo
        //ES. quando i vale 1, se vett[i] > vett[0], allora vett[i], cioè vett[1], sarà il nuovo massimo, e cosi' via...
        if (vett[i] > max) {
            max = vett[i];
            posMax = i;
        }

        //se l'elemento del vettore vett[i] < min, allora vett[i] diventa il nuovo minimo, mentre i sarà la posizione, nel vettore, del nuovo minimo
        //ES. quando i vale 1, se vett[i] < vett[0], allora vett[i], cioe' vett[1], sarà il nuovo minimo, e cosi' via...
        if (vett[i] < min) {
            min = vett[i];
            posMin = i;
        }
    }




    //a questo punto, devo scambiare di posto il massimo ed il minimo nel vettore (conoscendo le loro posizioni, posso farlo facilmente senza alcun ciclo)

    vett[posMin] = vett[posMax];
    vett[posMax] = min; //ovviamente non potrò mettere vett[posMax] = vett[posMin], perche' alla riga precedente vett[posMin] viene sovrascritto



    //una volta scambiati di posto il massimo ed il minimo, visualizzo il vettore modificato

    cout << "\nVETTORE MODIFICATO" <<endl; //messaggio iniziale, da visualizzare una volta sola, quindi lo metto fuori dal ciclo for 
    for(int i=0; i<n; i++) {
        cout << "\nElemento " << i+1 << "= " << vett[i]; //messaggio di visualizzazione del singolo elemento (da ripetere per tutti gli elementi del vettore)
    }


    //stampo un carattere di ritorno a capo cosi' il messaggio: "premere un tasto per continuare..." si posiziona a capo
    cout << "\n";

    //per bloccare la visualizzazione: messaggio "premere un tasto per continuare ..."
    system("pause");

}
/*
IL GIOCO DELL'IMPICCATO

Scrivere un programma che faccia inserire una parola all'utente 1, crei un'altra stringa che contenga tanti * quante sono le lettere della prima
parola (es. p1=fiore p2=*****), poi chieda all'utente 2 una lettera e controlli se e' presente nella prima parola: se sì, nella seconda parola, 
nella posizione corrispondente, al posto dell'* verra' messa la lettera (es. lettera e p2=****e).
L'utente avra' a disposizione 7 tentativi (per testa, collo, braccio sinistro, braccio destro, busto, gamba sinistra,
gamba destra dell'impiccato) per trovare l'intera parola inserita all'inizio dall'utente 1.
Ad ogni nuova lettera indicata dall'utente 2 non presente nella parola scelta dall'utente 1, il numero di tentativi si abbassera'.
*/

#include <iostream>
#include <string.h>

using namespace std;

int main () {

    char parola[15], incognita[15], lettera;

    cout << "UTENTE 1: Inserisci una parola: "<<endl;
    cin>>parola;

    system("cls"); //ripulisco lo schermo per evitare che l'utente 2 visualizzi ciò che e' stato inserito dall'utente 1

    int lung = strlen(parola);

    for(int i=0;i<lung;i++)
        incognita[i] = '*';

    incognita[lung] = '\0';

    int tent = 7;  

    //l'array di caratteri memorizza le lettere sbagliate gia' scelte: 
    //se l'utente inserisce piu' volte la stessa lettera sbagliata, i tentativi totali non vengono diminuiti
    char lettereSbagliateGiaSelezionate[26];  
    lettereSbagliateGiaSelezionate[0] = '\0';

    int controllo, letteraSbagliataTrovata, vittoria = 0, length;

    do {
        
        controllo = 0;
        letteraSbagliataTrovata = 0;
        system("cls");  //ad ogni tentativo ripulisco lo schermo da
        cout <<endl<<"UTENTE 2: Hai a disposizione " <<tent<< " tentativi"<<endl;

        //visualizzo il messaggio seguente solo se ho inserito qualche carattere nella stringa delle lettere sbagliate
        if(strlen(lettereSbagliateGiaSelezionate) != 0) {
            cout<<endl<<"UTENTE 2: Le lettere che hai gia' selezionato sono: ";
            for(int i=0;i<strlen(lettereSbagliateGiaSelezionate);i++)
                cout<<" "<<lettereSbagliateGiaSelezionate[i];
        }

        cout<<endl<<endl<<incognita<<"\n";
        
        cout<<endl<<"UTENTE2: Inserisci una lettera:"<<endl<<" ----> ";
        cin>>lettera;

        for(int i=0;i<lung;i++) {
            if(parola[i] == lettera) {
                incognita[i] = lettera;
                controllo = 1;
            }
        }

        if(controllo == 0) {
            cout<<endl<<"UTENTE 2: La lettera che hai scelto non e' presente nella parola"<<endl;
            for(int i=0;i<strlen(lettereSbagliateGiaSelezionate);i++) {
                if(lettereSbagliateGiaSelezionate[i] == lettera) 
                    letteraSbagliataTrovata = 1;
            }
            if(letteraSbagliataTrovata == 0) {
                length = strlen(lettereSbagliateGiaSelezionate);
                lettereSbagliateGiaSelezionate[length] = lettera;
                lettereSbagliateGiaSelezionate[length+1] = '\0';
                tent--;
            }
            system("pause");
        }

        if(strcmp(parola,incognita) == 0) 
            vittoria=1;

    } while(tent > 0 && vittoria==0);

    if(vittoria == 0) 
        cout <<endl<<"UTENTE 1: Hai vinto! L'utente 2 ha esaurito i tentativi a sua disposizione"<<endl<<"ciaLa parola era "<<parola<<endl;
    else 
        cout <<endl<<"UTENTE 2: Hai vinto!"<<endl<<"La parola che hai indovinato e' "<<parola<<endl;
}


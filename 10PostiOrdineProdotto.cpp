//fare inserire un vettore di 10 posti mente il secondo deve essere da 10 numeri messi in ordine, 
//fare un terzo vettore che fa il prodotto per ogni posto 

#include <iostream>

using namespace std;

int main(){

    int vett1[10], vett2[10], vett3[10];

    cout<<endl<<"Inserisci i numeri per riempire il primo vettore"<<endl;

    for(int i=0;i<10;i++) {
        cout <<endl<< "Elemento " << i+1 <<": ----> ";
        cin >> vett1[i];
    }

    cout<<endl<<"Inserisci i numeri per riempire il secondo vettore (in ordine crescente)"<<endl;

    int last = -99999;

    for(int i=0;i<10;i++){

        do {
            cout <<endl<< "Elemento " << i+1 <<": ----> ";
            cin >> vett2[i];
        } while(vett2[i] <= last);

        last = vett2[i];

    }

    cout<<endl<<endl<<"VETTORE 1"<<endl;
    for(int i=0;i<10;i++) {
        cout<<"POSTO "<<i+1<<" = "<<vett1[i] <<endl;
    }

    cout<<endl<<endl<<"VETTORE 2"<<endl;
    for(int i=0;i<10;i++) {
        cout<<"POSTO "<<i+1<<" = "<<vett2[i] <<endl;
    }

    cout<<endl<<endl<<"VETTORE 3"<<endl;
    for(int i=0; i<10; i++){
        vett3[i]=vett1[i]*vett2[i];
        cout<<"POSTO "<<i+1<<" = "<<vett3[i]<<endl;
    }


}
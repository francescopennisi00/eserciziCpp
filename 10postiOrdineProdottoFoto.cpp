//fare inserire un vettore di 10 postyi mente il secondo deve essere da 10 numeri messi in ordine, fare un terzo vcettore che fa il prodotto per ogni posto 
#include<iostream>
using namespace std;
int main(){
    int vett1[10], vett2[10], vett3[10];
    cout<<"inserisci i numneri per riempire il primo vettore"<<endl;
    cout<<"VETTORE 1"<<endl;
    for(int i=0;i<10;i++) {

        cin>>vett1[i];

        cout<<"POSTO "<<i+1<<" = "<<vett1[i] <<endl;


        }

        cout<<"VETTORE 2 "<<endl;
        for(int k=0;k<10; k++){
            vett2[k]=k+1;




            cout<<"POSTO "<<k+1<<" = "<<vett2[k] <<endl;

            }


        for(int m=0; m<10; m++){
            vett3[m]=vett1[m]*vett2[m];
            cout<<"VETTORE 3"<<endl;
            cout<<"POSTO "<<m+1<<" = "<<vett3[m]<<endl;
        }


}

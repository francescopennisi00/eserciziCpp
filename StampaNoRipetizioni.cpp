/*
Leggere un array di 10 interi e stampare solo i numeri che appaiono nell'array una volta soltanto.
Ad esempio se l'array contiene 1, 2, 3, 1, 2, 4 il programma stamperà 3, 4 .
*/

#include <iostream>
using namespace std;

int main() {
	int cass[10];
	for(int i = 0; i < 10; i++) {
		cout << "\nInserisci l'elemento di posto " << i+1 << ": ";
        cin >> cass[i];
	}
    int flag;
    cout << "\nVETTORE SENZA RIPETIZIONI"<<endl;
    for(int i = 0; i < 10; i++) {
        flag = 0;
        for(int k=0; k < 10; k++) {
            if (cass[i] == cass[k] && k!=i) {
                flag = 1;
            }
        }
        if (flag == 0) {
            cout << "\nElemento di posto " << i+1 <<" = " << cass[i];
        }
    }
}

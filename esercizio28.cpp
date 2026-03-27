//crea un vettore di 10 stringhe e stampa solo le parole con lunghezza maggiore di 4 caratteri.
#include <iostream>
#include <string>
using namespace std;
int main(){
    string vet1[10];
    cout << "Inserisci 10 parole: " << endl;
    for(int i=0; i<10; i++){
        cin >> vet1[i];
    }
    cout << "Le parole con lunghezza maggiore di 4 caratteri sono: " << endl;
    for(int i=0; i<10; i++){
        if(vet1[i].length() > 4){
            cout << vet1[i] << endl;
        }
    }
    return 0;
}
//Chiedi all’utente quanti numeri vuole inserire (n) e calcola la loro media usando un array .
#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
#include <cmath>
using namespace std;
int main(){srand(time(NULL));
int n=0;

double media=0;
int tot=0;
cout << "inserisci la lunghezza del vettore" << endl;
cin >>n;
int vet[n];
for(int i=0;i<n;i++){
    cout << "inserisci i numeri del vettore" << endl;
    cin >> vet[i];
    tot=tot+vet[i];
    
}
media=tot/n;
    cout << "la media è : " << media << endl;

}
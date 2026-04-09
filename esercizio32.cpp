//Inserisci parole in un vettore finché l’utente digita "STOP". Chiedi un numero N. Stampa solo le parole con lunghezza maggiore di N.
#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
#include <cmath>
using namespace std;
int main(){srand(time(NULL));
int n=0,num=0;
cout << "inserisci la lunghezza del vettore" << endl;
cin >>n;
string vet[n];
for(int i=0;i<n;i++){
    cout << "inserisci le parole del vettore" << endl;
    cin >> vet[i];
    if(vet[i] == "stop"){
        break;
    }}
cout << "dammi una lunghezza per le parole che vuoi" << endl;
cin >>num;
for(int i=0;i<n;i++){
    if(vet[i].length()>num){
        cout << vet[i] << endl;
    }
}
}
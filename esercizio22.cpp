//Chiedi all’utente di inserire n numeri in un array e trova il più piccolo
#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
#include <cmath>
using namespace std;
int main(){srand(time(NULL));
int n=0,min=999999;
cout << "inserisci la lunghezza del vettore" << endl;
cin >>n;
int vet[n];
for(int i=0;i<n;i++){
    cout << "inserisci i numeri del vettore" << endl;
    cin >> vet[i];
    if(min>vet[i]){min=vet[i];}
    cout << "il numero più piccolo è : " << min << endl;
}}
// Dopo aver letto e memorizzato 8 numeri in un array, calcolare la somma di quelli negativi e memorizzare zero al loro posto
#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
#include <cmath>
using namespace std;
int main(){srand(time(NULL));
int n=8,somma=0;
int vet[n];
for(int i=0;i<n;i++){
cout << " inserisci i numeri del vettore" << endl;
cin >> vet[i];
if(vet[i]<0){
    somma=somma+vet[i];
    vet[i]==0;
    
}}
cout << "la somma dei numeri negativi è: " << somma << endl;
}
//19/3
//Costruire un vettore di N elementi e verificare se l’ultimo elemento è il maggiore di tutti
#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
#include <cmath>
using namespace std;
int main(){srand(time(NULL));
int n=0,max=0;
cout << "inserisci la lunghezza del vettore" << endl;
cin >>n;
int vet[n];
for(int i=0;i<n;i++){
    cout << "inserisci i numeri del vettore" << endl;
    cin >> vet[i];
    if(max<vet[i]){max=vet[i];}
    }
if(vet[n-1]==max){cout << "l'ultimo elemento è il maggiore" << endl;}
else{cout << "l'ultimo numero non è il più grande" << endl;}}
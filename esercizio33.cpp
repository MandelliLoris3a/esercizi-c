// Genera un array di 10 numeri e verificare se al suo interno ci sono almeno 3 numeri pari.
#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
#include <cmath>
using namespace std;
int main(){srand(time(NULL));
int n=10,conta=0;
int vet[n];
for(int i=0;i<n;i++){
    cout << "inserisci i numeri del vettore" << endl;
    cin >> vet[i];
if(vet[i]%2==0){conta++;}
}
if(conta>=3){
    cout << "nel vettere ci sono almeno 3 numeri pari" << endl;}
    else{cout << " nel vettore non ci sono almeno 3 numeri pari" << endl;}
}
    
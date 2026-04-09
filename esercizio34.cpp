// Costruisci un array di 5 numeri, verifica se tutti i numeri dell’array sono pari
#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
#include <cmath>
using namespace std;
int main(){srand(time(NULL));
int n=5,conta=0;
int vet[n];
for(int i=0;i<n;i++){
    cout << "inserisci i numeri del vettore" << endl;
    cin >> vet[i];

}
for(int i=0;i<n;i++){
    if(vet[i]%2==0){
        cout << "tutti i numeri sono pari" << endl;}
        else{cout << "i numeri non sono tutti pari" << endl;}
    
}
}
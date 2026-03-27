//  Costruire un vettore di N elementi  e controlla se tutti gli elementi del vettore sono uguali.
#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
#include <cmath>
using namespace std;
int main(){srand(time(NULL));
int n=0, x=0,b=0;
cout << "inserisci la lunghezza del vettore" << endl;
cin >>n;
int vet[n];
for(int i=0;i<n;i++){
    cout << "inserisci i numeri del vettore" << endl;
    cin >> vet[i];}
for(int i=0;i<n;i++){
    x=vet[i];
    for(int i=0;i<n;i++){
    if(x!=vet[i]){b=1;break;}
    }}
if(b==1){cout <<"i numeri non sono tutti uguali" << endl;}
else{cout <<"i numeri sono tutti uguali" << endl;}



   
}
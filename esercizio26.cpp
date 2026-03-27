// marzo 17/03
#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
#include <cmath>
using namespace std;
int main(){srand(time(NULL));
int n=10,max=0,somma=0;
int j,i;
int vet[n];
int vet2[n];
for( i=0;i<n;i++){
    vet[i]=rand()%50+1;
    cout << vet[i] << "   ";}
    
    cout << endl;
    for( i=0;i<n;i++){
    if(i%2==0){
    cout << vet[i] << endl;
    somma=somma+vet[i];}
    }cout << "la somma dei numeri in posizione pari è : " << somma << endl;}
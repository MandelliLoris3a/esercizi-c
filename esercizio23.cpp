//Genera un vettore di 10 numeri casuali tra 1 e 50 e trova il massimo e la sua posizione
#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
#include <cmath>
using namespace std;
int main(){srand(time(NULL));
int n=10,max=0;
int j;
int vet[n];
for(int i=0;i<n;i++){
    vet[i]=rand()%50+1;
    if(max<vet[i]){max=vet[i];}
    j=i;
    
}cout << "il numero più grande è : " << max << " e si trova in posizione : " << j << endl;
}
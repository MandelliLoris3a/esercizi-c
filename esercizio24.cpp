// marzo 13/03
#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
#include <cmath>
using namespace std;
int main(){srand(time(NULL));
int n=10,max=0;
int j,i;
int vet[n];
int vet2[n];
for( i=0;i<n;i++){
    vet[i]=rand()%50+1;
    cout << vet[i] << "   ";}
    
for( i=0;i<n;i++){
    vet2[i]=vet[n-1-i];
    cout << vet2[i] << "       ";
}}
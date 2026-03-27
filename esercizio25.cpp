#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
#include <cmath>
using namespace std;
int main(){srand(time(NULL));
int n=12,max=0,num;
int j,i;
int vet[n];
for( i=0;i<n;i++){
    vet[i]=rand()%50+1;
    cout << "inserisci un numero tra 1 e 50" << endl;
    cin >> num;
    if(num==vet[i]){
        j=i;
        cout << "il numero è stato trovato alla posizione " << j << endl;
    }
    else{cout << "il numero non è stato trovato" << endl;}
    }}

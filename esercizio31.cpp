// 9/04
#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
#include <cmath>
using namespace std;
int main(){srand(time(NULL));
int n=0;
cout << "inserisci la lunghezza del vettore" << endl;
cin >>n;
string vet[n];
for(int i=0;i<n;i++){
    cout << "inserisci le parole del vettore" << endl;
    cin >> vet[i];
    if(vet[i] == "stop"){
        break;
    }
   
}}
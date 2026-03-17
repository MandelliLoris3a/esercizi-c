//Chiedi un numero all’utente e stampa: "Radice quadrata = ..." se il numero è positivo , "Numero non valido" se è negativo.
#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
#include <cmath>
using namespace std;
int main(){srand(time(NULL));
int n;
cout << "inserisci il numero" << endl;
cin >>n;
   if(n>0){sqrt(n);
    cout << "la radice del numero è : " << sqrt(n) << endl;}
else{cout << "numero non valido" << endl;}


}
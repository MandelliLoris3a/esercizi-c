//L’utente inserisce un numero maggiore di uno e il programma continua a calcolare le potenze del numero inserito fino a quando una potenza supera 5000.
#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
#include <cmath>
using namespace std;
int main(){srand(time(NULL));
int n=0;
cout << "inserisci un numero maggiore di 1" << endl;
cin >> n;
int potenza=n;
while(potenza<=5000){
    cout << potenza << endl;

    potenza=potenza*n;
}
return 0;
}
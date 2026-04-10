//Memorizzare in un array di dieci posizioni i primi dieci numeri naturali.
#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
#include <cmath>
using namespace std;
int main(){srand(time(NULL));
int vet[11]{0,1,2,3,4,5,6,7,8,9,10};
for(int i=0; i<11; i++){
cout << vet[i] << endl;}
}
#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
#include <cmath>
using namespace std;
int main(){srand(time(NULL));
int n=10,max=0;
int j,i;
 string nomiPossibili[5] = {"Luca", "Anna", "Marco", "Sara", "Paolo"};
string vet1[10];
for( i=0;i<n;i++){
    vet1[i]=nomiPossibili[rand()%5];}
for( i=0;i<n;i++){
    if(vet1[i]=="anna"){
    cout << "il nome è stato trovato alla posizione " << i << endl;
    }
}
}
#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
using namespace std;
int main(){
    int n=rand()%50+1;
    int numero;
while(numero!=n){
    cout << "prova ad indovinare il numero" << endl;
    cin >> numero;
    if(numero>n){cout << "troppo alto" << endl;}
    if(numero<n){cout << "troppo basso" << endl;}
    if(numero==n){cout << "complimenti hai indovinato!!" << endl;break;}
}

}
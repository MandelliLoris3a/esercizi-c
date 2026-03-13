#include <iostream>
#include <string> 
using namespace std;
int main(){
    int n,conta=0,max=0,min=999999;
    double media,somma=0;
    while(n!=0){
        cout << "inserisci un numero" << endl;
        cin >> n;
        conta++;
        somma=somma+n;
        media=somma/conta;
        
        if(n<min){min=n;}
        if(n>max){max=n;}
    }
    cout << somma << endl;
    cout << media << endl;
    cout << min << endl;
    cout << max << endl;
}
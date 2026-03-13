#include <iostream>
#include <string> 
using namespace std;
int main(){
    int salario;
    int n;
    int tot=0;
    string tipo;
    cout << "quanti dipendenti ci sono" << endl;
    cin >> n;
    for(int i=0;i<n;i++){
        cout << "inserisci il tuo stipendio" << endl;
    cin >> salario;
    cout << "inserisci se lavori a tempo_pieno,part-time o stage" << endl;
    cin >> tipo;
    if(tipo=="tempo_pieno"){
        tot=salario/100*115;}
    else if(tipo=="part-time"){
        tot=salario/100*110;}
    else if(tipo=="stage"){
        tot=salario/100*105;}
    cout << tot << endl;
    }

    }
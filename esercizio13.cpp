#include <iostream>
#include <string> 
using namespace std;
int main(){
    int prezzo=100;
    int n;
    int tot=0;
    string tipo;
    cout << "quanti biglietti ci sono" << endl;
    cin >> n;
    for(int i=0;i<n;i++){
    cout << "inserisci se sei studente,adulto o anziano" << endl;
    cin >> tipo;
    if(tipo=="studente"){
        tot=prezzo/100*70;}
    else if(tipo=="adulto"){
        tot=prezzo/100*95;}
    else if(tipo=="anziano"){
        tot=prezzo/100*60;}
    cout << tot << endl;
    }

    }
    
    
    
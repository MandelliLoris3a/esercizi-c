//Genera un numero casuale tra 1 e 100. L’utente ha massimo 5 tentativi per indovinarlo.
//Alla fine stampa: "Hai vinto" oppure "Hai perso, il numero era ..."
#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
using namespace std;
int main(){srand(time(NULL));
    int n=rand()%100+1;
    int numero;
    int conta=5;
    cout << "prova ad indovinare il numero" << endl;
while(conta!=0){
    
    cin >> numero;
    conta--;
    if(numero==n){cout << "complimenti hai vinto" << endl;return 0 ;}
    else { cout << "hai ancora " << conta << " tentativi " << endl;}
    
}cout << "hai perso, il numero era: " << n << endl;

}
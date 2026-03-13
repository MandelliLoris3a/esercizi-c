//Chiedi all’utente il prezzo originale e la percentuale di sconto. Calcola il prezzo finale e stampalo. Ripeti finché l’utente non inserisce 0 come prezzo.
#include <iostream>
#include <string> 
using namespace std;
int main(){
    double prezzo=1;
    double perc;
    double tots;
    double tot;
while(prezzo!=0){
    cout << "inserisci il prezzo" << endl;
    cin >> prezzo;
    cout << "inserisci la percentuale dello sconto" << endl;
    cin >> perc;
    tots=prezzo/100*perc;
    tot=prezzo-tots;
    cout << "il prezzo scontato è: " <<tot << endl;
    
}

}
//Ad ogni iterazione, il programma deve chiedere: auto, moto. : benzina, diesel, elettrico e i km. Dopo aver calcolato il costo, chiedere se l’utente vuole inserire un altro veicolo.  Considera che (auto,benzina 0,15- auto,diesel 0,13- auto, elettrico 0,08- moto, benzina 0,07-moto,elettrico 0,04)
#include <iostream>
#include <string> 
using namespace std;
int main(){
    int km;
    string veicolo, carburante;
    char scelta;
    do{
    cout << "inserisci veicolo (auto o moto)" << endl;
    cin >> veicolo;
    cout << "inserisci carburante (benzina, diesel, elettrico)" << endl;
    cin >> carburante;
    cout << "inserisci km" << endl;
    cin >> km;
    cout << "vuoi inserire un altro veicolo? (s/n)" << endl;
    cin >> scelta;
    }while(scelta=='s');
    if(veicolo=="auto" && carburante=="benzina"){
        cout << "costo: " << km*0.15 << endl;
    } else if(veicolo=="auto" && carburante=="diesel"){
        cout << "costo: " << km*0.13 << endl;
    } else if(veicolo=="auto" && carburante=="elettrico"){
        cout << "costo: " << km*0.08 << endl;
    } else if(veicolo=="moto" && carburante=="benzina"){
        cout << "costo: " << km*0.07 << endl;
    } else if(veicolo=="moto" && carburante=="elettrico"){
        cout << "costo: " << km*0.04 << endl;
    } else {
        cout << "combinazione veicolo-carburante non valida" << endl;
    }

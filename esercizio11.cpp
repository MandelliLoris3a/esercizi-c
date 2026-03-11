// Inserisci un codice errore: 400  allora Bad Request, 401 allora Unauthorized, 403 allora Forbidden, 404 allora Not Found, altro allora Errore sconosciuto, 200 allora corretto. Fai un ciclo dove se l'utente sbaglia più di 3 volta allora esce dal programma e non permette di più di riprovare
#include <iostream>
#include <string> 
using namespace std;
int main(){
    int n;
    int tentativi=0;
    while(tentativi<3){
        cout << "inserisci un codice errore" << endl;
        cin >> n;
        switch(n){
        case 200 : cout << "codice corretto" << endl;break;
        case 400 : cout << "bad request" << endl; tentativi++;break;
        case 401 : cout << "unauthrized" << endl;tentativi++;break;
        case 403 : cout << "forbidden" << endl; tentativi++;break;
        case 404 : cout << "not found" <<endl; tentativi++;break;
        default : cout << "errore sconosciuto" << endl; tentativi++;break;
        }
    }
}
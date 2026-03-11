#include <iostream>
#include <string> 
using namespace std;
int main(){
   string parola;
    int contavocali = 0;
    cout << "Inserisci la parola: " <<endl;
    cin >> parola;
    for(int i = 0; i < parola.length(); i++){
        if (parola[i] == 'a' || parola[i] == 'e' || parola[i] == 'i' || parola[i] == 'o' || parola[i] == 'u' ){
            contavocali++;
        }
    }
    cout << "Il numero di vocali nella parola è: " << contavocali << endl;
    return 0;
}
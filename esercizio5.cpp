#include <iostream>
#include <string> 
using namespace std;
int main(){
   string frase;
    int contavocali = 0;
    cout << "Inserisci la frase: " <<endl;
    getline(cin, frase);
    for(int i = 0; i < frase.length(); i++){
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' ){
            contavocali++;
        }
    }
    cout << "Il numero di vocali nella frase è: " << contavocali << endl;
    return 0;
}
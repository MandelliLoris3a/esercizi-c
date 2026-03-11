//Chiedi un numero n e stampa tutti i numeri pari da 2 fino a n 
#include <iostream>
#include <string> 
using namespace std;
int main(){
    int n;
    cout << "inserisci il numero" << endl;
    cin >> n;
    for (int i=1;i<n;i++){
        if(i%2==0){
            cout << i <<endl;
        }
    }
}
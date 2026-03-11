//L’utente inserisce numeri finché non scrive -1. Alla fine il programma calcola la media
#include <iostream>
#include <string> 
using namespace std;
int main(){
    int n;
    int totnumeri=0;
    double sommanumeri=0;
    double media;
    while(n!=-1){
       cout << " dammi un numero" <<endl;
    cin >> n; 
    totnumeri++;
    sommanumeri=sommanumeri+n;
    }
    media=sommanumeri/totnumeri;
    cout << media << endl;

    }



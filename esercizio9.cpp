//Chiedi numeri finché l’utente non digita 0 e somma solo quelli dispari
#include <iostream>
#include <string> 
using namespace std;
int main(){

int n;
int somma=0;
while(somma==somma){
cout << "scrivi numeri o digita 0 per fermarti" << endl;
cin >> n;
if(n==0){
    break;}
    if(n%2!=0){
    somma=somma+n;
    }
}
cout << somma << endl;


}
//Chiedi un numero all’utente e conta quanti numeri sono inseriti e fermati quando l'utente decide di fermarsi.
#include <iostream>
#include <string> 
using namespace std;
int main(){

string a;
int conta=0;
while(conta==conta){
cout << "scrivi numeri o digita stop per fermarti" << endl;
cin >> a;
if(a=="stop"){
    break;}
conta++;
}
cout << conta << endl;


}
#include <iostream>
#include <string> 
using namespace std;
int main(){
int a;
cout << "Inserisci un numero: " << endl;
cin >> a;
int totale = 1;
while (a>1){totale = totale * a;
a--;}
cout << totale ;
return 0;
}
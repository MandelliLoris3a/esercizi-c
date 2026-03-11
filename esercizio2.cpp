#include <iostream>
#include <string> 
using namespace std;
int main(){
int altezza,base,area=0;
cout << "Inserisci base e altezza di un rettangolo: ";
cin >> altezza >> base;
if(altezza>0 && base>0){area=base*altezza;cout << "L'area' è: " << area << endl;}else{cout << "i numeri non sono validi perchè negativi" << endl;}

}
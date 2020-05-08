#include <iostream>
using namespace std; 

int main (){

int numero1, numero2, numero3, promedio;

 cout<<"Ingrese 3 numeros a promediar:"<<endl;
 cin>>numero1>>numero2>>numero3;

 promedio = int (numero1+numero2+numero3) / 3;
 cout << "El promedio es:" << promedio <<endl;


 return 0;

}
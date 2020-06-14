#include <conio.h>
#include <iostream>
using namespace std;
int main (){ 

int NumeroM = 76;
int i;
int num;
char f; 

cout<<"---------------Bienvenido a la ruleta del Numero Magico---------------"<<endl<<endl; 

for (i = 0; i < 5; i++) // condicion del loop que termina a los 5 intentos. 
{


cout<<"||A continuacion Ingrese un numero del 1-100||"<<endl;
cin>>num;
getchar();

if (num < 76)
 {
 cout<<"El numero ingresado es menor al numero magico"<<endl<<"Intento:"<< i + 1<<endl;
 cout<<"Si desea salir del juego pulse la tecla F"<<endl<<endl;

 } 

 if (num > 76)
      {
     cout<<"El numero ingresado es mayor al Numero magico"<<endl<<"Intento:"<< i + 1<<endl;
     cout<<"Si desea salir del juego pulse la tecla F"<<endl<<endl;

     }

if (num == 76)
 {
     cout<<"Felicidades Encontro el numero magico!!!"<<endl<<"Intento:"<< i + 1<<endl;
 break;
 }

else if(num == f)
{
     cout<<"El programa termino"<<endl;
     getchar();
     break;
}









}
}
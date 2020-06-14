#include <conio.h>
#include <iostream>
using namespace std;
int main (){

int An; 

cout<<"Ingrese el a"<<(char)164<<"o que desea comprobar"<<endl; 
cin >>An;

if ( An % 100 != 0){

if (An % 4 == 0)
cout<<"si es un a"<<(char)164<<"o bisiesto"<<endl; 

else
{
    cout <<"No es un a"<<(char)164<<"o bisiesto"<<endl;
}

}
else if ( An % 400 == 0)
{
    cout<< "Es un a"<<(char)164<<"o bisiesto";
}

else
{
    cout<<"no es un a"<<(char)164<<"o bisiesto"; 
}




}
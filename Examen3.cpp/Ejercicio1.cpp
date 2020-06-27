#include <iostream>
#include <conio.h>
using namespace std;

int main (){

char numero[80];
int i=0;
std::cout<<" Digite el texto a convertir: "<<endl;
std::cin.getline (numero, 100);
 while (numero[i]!='\0')
    {
     if(numero[i]=='M' || numero[i]=='m')
     numero[i]='0';

     if(numero[i]=='U' || numero[i]=='u')
     numero[i]='1';

     if(numero[i]=='R' || numero[i]=='r')
     numero[i]='2';

     if(numero[i]=='C' || numero[i]=='c')
     numero[i]='3';

     if(numero[i]=='I' || numero[i]=='i')
     numero[i]='4';

     if(numero[i]=='E' || numero[i]=='e')
     numero[i]='5';

     if(numero[i]=='L' || numero[i]=='l')
     numero[i]='6';

     if(numero[i]=='A' || numero[i]=='a')
     numero[i]='7';
     
     if(numero[i]=='G' || numero[i]=='g')
     numero[i]='8';

     if(numero[i]=='O' || numero[i]=='o')
     numero[i]='9';

     i++;
    }

    std::cout<<"La palabra es: "<<numero<<endl;









 }
 
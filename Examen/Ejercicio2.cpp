#include <iostream>
using namespace std; 

int main (){

float dinero;
int pais;
float IVA; 


 cout<<"-------lista de paises-------"<<endl;
 cout<<"1) El Salvador = IVA: 13%"<<endl;
 cout<<"2) Guatemala = IVA: 9%"<<endl;
 cout<<"3) Honduras = IVA: 15%"<<endl;
 cout<<"4) Espana = IVA: 20%"<<endl;
 cout<<"-------Elija el numero del pais donde reside:-------"<<endl;
cin>>pais;
cout<<"Ingrese el monto"<<endl;
cin>>dinero;

if (pais == 1 ){
(IVA = (dinero*1.13));
cout<<"El monto a pagar es:"<<IVA<<endl;
}

else if (pais == 2 ){
(IVA = (dinero*1.09));
cout<<"El monto a pagar es:"<<IVA<<endl;
}
else if (pais == 3 ){
(IVA = (dinero*1.15));
cout<<"El monto a pagar es:"<<IVA<<endl;
}
else if (pais == 4 ){
(IVA = (dinero*1.20));
cout<<"El monto a pagar es:"<<IVA<<endl;
}

else
{
    cout<<"Ingrese un numero de pais valido"<<endl;
}




}

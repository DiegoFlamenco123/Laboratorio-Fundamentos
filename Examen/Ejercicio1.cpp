#include <iostream>
using namespace std; 

int main (){

int color;
 
 cout<<"-------Esta es la lista de Colores-------"<<endl;
 cout<<"1) Amarillo = $85"<<endl;
 cout<<"2) Blanco = $45"<<endl;
 cout<<"3) azul = $25"<<endl;
 cout<<"4) rojo = $38"<<endl;
 cout<<"5) morado = $2"<<endl;
 cout<<"-------Elija un numero de la lista-------"<<endl;
cin>>color;

if (color == 1) 
{
cout<<"Usted eligio color Amarillo"<<endl;
cout<<"Usted gano: $85"<<endl;
}

else if (color == 2) 
{
cout<<"Usted eligio color Blanco"<<endl;
cout<<"Usted gano: $45"<<endl;
}

else if (color == 3) 
{
cout<<"Usted eligio color Azul"<<endl;
cout<<"Usted gano: $25"<<endl;
}

else if (color == 4) 
{
cout<<"Usted eligio color Rojo"<<endl;
cout<<"Usted gano: $38"<<endl;
}

else if (color == 5) 
{
cout<<"Usted eligio color Morado"<<endl;
cout<<"Usted gano: $2"<<endl;
}

else
{
    cout<<"Ingrese un numero de la lista."<<endl;
}


}
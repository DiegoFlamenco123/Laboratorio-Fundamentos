#include <conio.h>
#include <iostream>
using namespace std;
int main (){

float hex; //horas extras 
float Ht; //horas trabajadas 
float St; //sueldo total 
float Sr; // Sueldo Real.
float DescuentoM = 0;
int i = 0, n = 0; // for . . .
string Nombre; //nombre del empleado 


cout<<"-----------Ingrese la cantidad de empleados a evaluar-----------"<<endl;
cin>>n;

for ( i = 0; i < n; i++) // condicion de loop para Numeros de empleados.
{
 
 getch();
   cout<<"---Ingrese el nombre del empleado---"<<endl;
   cin>>Nombre;   
   cout<<"Ingrese sus Horas Trabajadas"<<endl;
   cin>>Ht;
   cout<<"Ingrese sus Horas Extras"<<endl;
   cin>>hex;
   
 
 St = (Ht*1.75) + (hex*2.50);

if (St > 500)
{
    DescuentoM = St*(0.04+0.0625+0.1);
Sr = (St - DescuentoM);
}

else if (St < 500)

{
float descMenor = St*(0.04+0.0625);
 
 Sr = St - descMenor;
}

cout<<"Los Datos del empleado son:"<<endl;
cout<<"Nombre:"<<Nombre<<endl;
cout<<"El Salario Total es:"<< St <<endl; 
cout<<"El Salario Real es:"<< Sr<<endl;


}


























}
#include <iostream>
#include <conio.h>
using namespace std;

int MenorN (float estaturas[], int Tam);
float media (float estaturas[],int Tam);
int MayorN (float estaturas[], int Tam); 
int mayor;
const int Tam = 25;
float estaturas [Tam];
float suma;
int i;

int main (){
    cout<<endl;
    cout<<"Ingrese la estatura de cada alumno: ";
    cout<<endl;
    for ( i = 0; i < Tam; i++)
    {
        cout<<"Estatura del Alumno "<<i + 1 <<": ";
        cin>>estaturas[i];
    }

cout<<"El promedio de las estaturas es: "<<media(estaturas,Tam)<<endl;
cout<<"Datos Mayores del promedio: "<<MayorN(estaturas,Tam)<<endl;
cout<<"Datos Menores del promedio: "<<MenorN(estaturas,Tam)<<endl;

getch();
return 0;

}

float media (float estaturas[],int Tam){



for (int i=0;i<Tam;i++){

   suma += estaturas[i]/Tam;
}

return suma;

}

int MenorN (float estaturas[], int Tam){

int menor = 0;


for (int i = 0; i < Tam; i++)


{
   
    if (estaturas[i] < suma)
    {
        menor++;
    }
    
}   
    return menor;
}



int MayorN (float estaturas[], int Tam)
{
int mayor=0;


    for (int i = 0; i < Tam; i++)


    {

        if (estaturas[i] > suma)
        {
            mayor++;;
        }

    }
    return mayor;
}

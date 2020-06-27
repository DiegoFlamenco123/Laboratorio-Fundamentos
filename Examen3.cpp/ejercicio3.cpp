#include <iostream>

using namespace std;

float matriz [100][100];
double alumnos;
double notas = 5;
float suma;
int i;
int j;

int main (){

cout<<endl;
cout<<"-------BIENVENIDO A LA CALCULADORA DE ALUMNOS-------"<<endl;
cout<<"\nIngrese el numero de alumnos: ";
cin>>alumnos;



for (int i=0; i<alumnos;i++){
    cout<<"\nDigite las calificacion del alumno "<<i+1 << " en |base 10|"<<endl;
    for (int j=0; j<notas;j++){
        cout<<" Nota " << j+1<<": ";
        cin>>matriz [i][j];

    }
}

for (int i=0; i<alumnos;i++){

    for (int j=0; j<notas;j++){
        
        suma = suma + matriz[i][j];
        
       
        
    }

    suma = suma * 2;
    cout<<"\nLa nota Final del estudiante "<<i+1<<" es" << ": "<<suma<<endl;

    if (suma >= 60 ){
        cout<<"El estuadiante ha: Aprobado"<<endl;
    }

    else 
    {
        cout<<"El estudiante ha: Reprobado"<<endl;
    }
    
    suma = 0;
}
}






#include <iostream>
using namespace std; 

int main (){

int h,m,s;
char l;

cout<<"Ingrese la hora deseada en ese orden H:M:S"<<endl;
cin>>h>>l>>m>>l>>s;
s=s+1; 

if (s >= 60) 
{
s = 0;               // Este If, indica que al segundo llegar a 60, iguala segundos a 0 y minutos aumenta 1
m = m + 1;
}

if (m >= 60)
{
    m = 0;
h = h + 1;             // ESte If indica al programa, que minutos al llegar a 60 se iguale a 0 y luego horas aumenta a 1.
}   

if (h >= 24)
{
    h = 0;            //Este if indica que horas al llegar a 24 se iguala a 0, y teninedo en cuenta los if pasados al llegar a 23:59:50, deberia mostrar 00:00:00
}

if (h<10) cout << 0;
cout << h; 
cout<< ':';
if (m<10) cout<< 0;         // Este bloque de comando indica la salida de nuestro programa, basicamente, esta indicado que cualquier numero abajo de 10
cout<<m;                    // se muestre con un cero a la izquierda. Por ejemplo: 08:05:04.
cout<< ':';
if (s<10) cout << 0; 
cout<<s;
cout<<endl;

}


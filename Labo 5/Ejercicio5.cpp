#include "iostream"
#include "string.h"
using namespace std;

int main ()
{
    char pal[100];
    char a;
    char b;
    char ct=0;

    cout<<endl;
    cout<<"Verificador de primera y ultima letra"<<endl;
    cout<<"---------Ingrese una palabra---------"<<endl;
    cin>>pal;
    ct = strlen(pal);

    for (size_t i = 0; i < 1; i++)
    {
        a=pal[i];
    }
    
    for (size_t i = 0; i < ct; i++)
    {
        b=pal[i];
    }
    
    if (a==b)
    {
        cout<<"La primera letra y la ultima de la palabra son iguales";
    }
    else
    {
        cout<<"La primera letra y la ultima de la palabra son diferentes ";
    }
    
    
    
    
   
    

}
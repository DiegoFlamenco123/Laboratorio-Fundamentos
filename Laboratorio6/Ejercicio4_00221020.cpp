#include <iostream>
using namespace std;

int Y(int arr1[],int Nm, int arr2[])
{
    cout<<"introduzca "<<Nm<<" numeros para el primer arreglo:"<<endl;
    for (int i = 0; i < Nm; i++)
    {
        cin>>arr1[i];
    }
    cout<<"introduzca "<<Nm<<" numeros para el segundo arreglo:"<<endl;

    for (int i = 0; i < Nm; i++)
    {
        cin>>arr2[i];
    }

    
}
int E(int arr1[],int arr2[],int Nm,int resultado[])
{
  
    for (int i = 0; i < Nm; i++)
    {
        resultado[i]= arr1[i] + arr2[i];
        
        
    }
    
}
void Totl(int resultado[], int Nm)
{
    cout<<"La suma total de los arreglos es :";
    for (int i = 0; i < Nm; i++)
    {
    
        cout<<resultado[i]<<" ";
    }
    
}
int main()
{
  
    int Nm;
    cout<<endl;
    cout<<"----------------------Suma de Arreglos----------------------";
    cout<<endl;
    cout<<"Digite el numero deseado de elementos para cada arreglo: ";
    cin>>Nm;
    int arr1[Nm];
    int arr2[Nm];
    int resultado[Nm];
    Y(arr1 , Nm,arr2);
    E(arr1,arr2,Nm,resultado);
    Totl(resultado,Nm);
 

    return 0;

  
   

}
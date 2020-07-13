#include "iostream"
#include "string"
using namespace std;

const int longCad = 20; 

//Estructura predeterminada.

struct costoPorArticulo{ 
char nombreArticul[longCad + 1]; 
int cantidad; 
float precio;
float costoPorArticulo; 
}; 

//Funciones Generalizadas para el Codigo

void GenerarDatos(int cantidad,costoPorArticulo factura[100]);
void PrecioArticulo(int cantidad,costoPorArticulo factura[100]);
void Impresion(int cantidad,costoPorArticulo factura[100]);
float FacturaFinal(int cantidad,costoPorArticulo factura[100],float costo);

int main()
{
    
    int cantidad;
    cout<<endl;
    cout<<"----------Bienvenido a Super Despensas---------- "<<endl<<endl;
    cout<<"Ingrese la cantidad de Articulos : ";
    cin>>cantidad;
    costoPorArticulo factura[cantidad];
    GenerarDatos(cantidad, factura);
    PrecioArticulo(cantidad,factura);
    Impresion(cantidad,factura);
    float costo;
    cout<<endl<<endl;
    cout<<"Total de la Compra: $"<<FacturaFinal( cantidad,factura,costo);
    return 0;
}

//funcion B
void GenerarDatos(int cantidad,costoPorArticulo factura[100])
{
    cout<<endl;
    cout<<"-----Datos del Articulo-----"<<endl<<endl;
    for (size_t i = 0; i < cantidad; i++)
    {
        fflush(stdin);
        cout<<"Nombre del Articulo "<<i + 1<<": ";
        cin.getline(factura[i].nombreArticul,20);
        cout<<"Cantidad: ";
        cin>>factura[i].cantidad;
        cout<<"Precio Unitario: ";
        cin>>factura[i].precio;
        cout<<endl;
    }
}

//funcion C
void PrecioArticulo(int cantidad,costoPorArticulo factura[100])
{
    for (size_t i = 0; i < cantidad; i++)
    {
        
        factura[i].nombreArticul;
        factura[i].cantidad;
        factura[i].precio;
        if (factura[i].cantidad>=1)
        {
            factura[i].costoPorArticulo= factura[i].cantidad*factura[i].precio;
            
        }
       
    }
}
//funcion D
void Impresion(int cantidad,costoPorArticulo factura[100])
{
    cout<<"------------------------------Factura de la compra------------------------------"<<endl;
    for (size_t i = 0; i < cantidad; i++)
    {
        cout<<endl;
        cout<<"Nombre del producto "<<i + 1<<": "<<factura[i].nombreArticul<<endl;
        cout<<"Cantidad: "<<factura[i].cantidad<<endl;
        cout<<"Precio por Unidad: $"<<factura[i].precio<<endl;
        cout<<"Costo total por articulo: $"<<factura[i].costoPorArticulo<<endl;
    }
}
//funcion E
float FacturaFinal(int cantidad,costoPorArticulo factura[100],float costo)
{
    costo=0;
    for (size_t i = 0; i < cantidad; i++)
    {
        factura[i].nombreArticul;
        factura[i].cantidad;
        factura[i].precio;
        factura[i].costoPorArticulo;
        costo=costo+factura[i].costoPorArticulo;
                
    }
    return costo;
    
}
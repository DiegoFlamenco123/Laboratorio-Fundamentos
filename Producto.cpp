#include <iostream>
using namespace std;
int main (){


float cereal = 3.99;
float cantidad;
float total;

cout<<"------------Ingrese la cantidad del producto------------"<<endl;

cout<<"Cereal = $3.99"<<endl;
cout<<"Cantidad del producto:"<<endl;cin>>cantidad;

total = float (cantidad*cereal);

cout<<"-------------Total-------------"<<endl; 
cout<<"Productos Comprados:"<<endl;
cout<<"*Cereal*"<<endl;
cout<<"Unidades:"<< cantidad <<endl;
cout<<"Precio total: $"<< total <<endl;

cout<<"******Gracias por su compra******"<<endl;

return 0;

}
#include <iostream>
using namespace std; 

int main (){

float PI = 3.1416; 
float Radio;

cout<<"*Ingrese el radio del circulo:*"<<endl;
cin>>Radio;
cout<<"El area es:"<<endl << (Radio*Radio)*PI<<endl;
cout<<"El perimetro es:"<<endl << 2*PI*Radio<<endl;

return 0;

}
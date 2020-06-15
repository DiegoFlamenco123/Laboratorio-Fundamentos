#include <iostream>
using namespace std;

int booleano(int an){

if (an % 4 ==0)
{
   return true;
}

else if (an && an%100 !=0)
{
    return false;
}
}

int main (){

    int an;
    cout <<  "ingrese el a"<<(char)164<<"o"<<endl;
    cin >> an;
    cout<<"El a"<<(char)164<<"o es: "<< booleano(an);
}
#include <iostream>
using namespace std;

int CalcuMCD ( int Nmayor, int NMenor, int Res)

{

  do
 {
    Res = Nmayor%NMenor;
    if (Res !=0)
    {
        Nmayor = NMenor;
        NMenor = Res;
    }   
    
 } 

while (Res !=0);
cout<<" El MCD :"<<NMenor<<endl;
}

int main()
{

int Nmayor, NMenor, Res; 

cout<<"Ingrese el dato mayor: "<<endl;
cin >> Nmayor;
cout<<"Ingrese el dato menor: "<<endl;
cin >> NMenor;

CalcuMCD (Nmayor, NMenor, Res);

}
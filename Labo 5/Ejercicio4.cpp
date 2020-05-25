#include <iostream>
#include <string>
using namespace std;
int main()
{

    string pal;

    cout << "Ingrese su palabra:";
    cin >> pal;

    std::cout << "El numero de caracteres es: " << pal.length() << endl;

    if (pal.length() > 10)
    {
        cout << "Es mayor a 10 caracteres" << endl;
    }

    else if (pal.length() < 10)
    {
        cout << "Es menor a 10 caracteres" << endl
             << endl;
    }

    if (pal.length() % 2 == 0)

    {
        cout << "*El numero de caracteres es PAR*" << endl;
    }

    else
    {
        cout << "*el numero de caracteres es IMPAR*" << endl;
    }
}

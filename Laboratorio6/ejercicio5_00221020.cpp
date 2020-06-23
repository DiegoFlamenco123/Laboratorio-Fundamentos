#include <iostream> 
using namespace std;


int main()
{

    int impares[200];

    cout << "\nLos primeros 100 numeros impares son: ";
    for (int i = 200; i >= 0; i--) {


        if (i % 2 != 0)
        {
            impares[i] = i;

            cout <<impares[i]<<", ";
		}
	}





    return 0;
}
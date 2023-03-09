/*
	TODO: Ingrese un vector e imprima su contenido
*/
#include <iostream>
using namespace std;

int main()
{
	int b[9];

	for (int x = 0; x <= 9; x++)
	{
		cout << "INGRESE LA POSICION " << x << endl;
		cin >> b[x];
	}

	cout << "MUESTRA" << endl;

	for (int x = 0; x <= 9; x++)
	{
		cout << "POSICION " << x << endl;
		cout << b[x] << endl;
	}

	return 0;
}

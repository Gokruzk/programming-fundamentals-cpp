/*
	TODO: Ingrese un vector, y asigne los elementos pares a otro vector
*/
#include <iostream>
using namespace std;

int main()
{
	int lim, p;
	cout << "INGRESE CUANTOS ELEMENTOS DESEA INGRESAR" << endl;
	cin >> lim;
	lim -= 1;
	int v1[lim];
	cout << endl;

	for (int x = 0; x <= lim; x++)
	{
		cout << "INGRESE EL NUMERO n.- " << x + 1 << " " << endl;
		cin >> v1[x];
	}

	for (int x = 0; x <= lim; x++)
	{
		if (v1[x] % 2 == 0)
		{
			int v2[x];
			v2[x] = v1[x];
			cout << v2[x] << endl;
		}
	}

	return 0;
}

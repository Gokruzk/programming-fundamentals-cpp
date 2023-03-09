/*
	TODO: Ingrese un vector, imprima los pares e impares y calcule el promedio
	* promedio de pares, promedio de impares y promedio general (pp + pi) / 2
*/
#include <iostream>
using namespace std;

int main()
{
	int v[9];
	float pares, impares, cp, ci, pp, pi, pg;
	pares = 0;
	impares = 0;
	cp = 0;
	ci = 0;
	pp = 0;
	pi = 0;
	pg = 0;
	
	for (int x = 0; x <= 9; x++)
	{
		cout << "INGRESE EL ELEMENTO " << x + 1 << " DEL VECTOR" << endl;
		cin >> v[x];
	}

	for (int x = 0; x <= 9; x++)
	{
		if (v[x] % 2 == 0)
		{
			pares += v[x];
			cp += 1;
			cout << endl;
			cout << "PARES" << endl;
			cout << v[x] << endl;
		}
		else
		{
			impares += v[x];
			ci += 1;
			cout << endl;
			cout << "IMPARES" << endl;
			cout << v[x] << endl;
		}
	}

	pp = pares / cp;
	pi = impares / ci;
	pg = (pp + pi) / 2;

	cout << "PROMEDIO DE PARES = " << pp << endl;
	cout << "PROMEDIO DE IMPARES = " << pi << endl;

	cout << "PROMEDIO GENERAL = " << pg << endl;

	return 0;
}

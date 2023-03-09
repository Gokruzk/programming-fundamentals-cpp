/*
	TODO: Ingrese un vector, imprima los elementos que sean mayores a 10 y calcule el promedio de los los elementos menores a 10
*/
#include <iostream>
using namespace std;

int main()
{
	int lim;
	float prom, acum, acum1;
	prom = 0;
	acum = 0;
	acum1 = 0;

	cout << "INGRESE EL LIMITE DEL VECTOR" << endl;
	cin >> lim;
	lim -= 1;
	int b[lim];

	for (int x = 0; x <= lim; x++)
	{
		cout << "INGRESE LA POSICION " << x + 1 << " DEL VECTOR" << endl;
		cin >> b[x];
	}

	cout << endl;

	cout << "-------------------------------" << endl;
	cout << "NUMEROS SUPERIORES A 10 SON" << endl;
	for (int x = 0; x <= lim; x++)
	{
		if (b[x] > 10)
		{

			cout << "LA POSICION " << x + 1 << " ES:" << endl;
			cout << b[x] << endl;
		}
		else
		{
			acum += b[x];
			acum1 += 1;
		}
	}
	cout << "-------------------------------" << endl;

	cout << endl;
	cout << "PROMEDIO DE MENORES DE 10" << endl;
	prom = acum / acum1;
	cout << prom << endl;

	return 0;
}

/*
	TODO: Ingrese dos vectores y asigne a un tercero la suma de los anteriores
*/
#include <iostream>
using namespace std;

main()
{
	float a[4], b[4], c[4];
	int x, z;
	cout << "Primer Vector" << endl;
	for (x = 0; x <= 4; x++)
	{
		cout << "Ingrese el valor" << x + 1 << " del vector b" << endl;
		cin >> a[x];
		cout << "Ingrese el valor" << x + 1 << " del vector b" << endl;
		cin >> b[x];
		c[x] = a[x] + b[x];
	}

	for (x = 0; x <= 4; x++)
	{
		cout << c[x] << endl;
	}
}

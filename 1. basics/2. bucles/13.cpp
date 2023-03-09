/*
	TODO: Calcule la tabla de multiplicar de n, e ingrese su limite
*/

#include <iostream>
using namespace std;
main()
{
	int n, l, x = 1;
	cout << "Ingrese una tabla de multiplicar y su límite" << endl;
	cin >> n;
	cin >> l;
	cout << "------------------" << endl;
	while (x <= l)
	{
		cout << n << " x " << x << " = " << n * x << endl;
		x = x + 1;
	}
}

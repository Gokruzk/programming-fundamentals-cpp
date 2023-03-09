/*
	TODO: Ingrese la potencia de un numero ingresando base y exponente
*/
#include <iostream>
using namespace std;

main()
{
	int b, ex, x, poten, acum;
	acum = 1;
	cout << "INGRESE LA BASE Y LUEGO EXPONENTE" << endl;
	cin >> b;
	cin >> ex;

	cout << b << " elevado a " << ex << endl;
	for (x = 1; x <= ex; x++)
	{
		poten = b * acum;
		acum = acum * b;
	}
	cout << poten << endl;
}

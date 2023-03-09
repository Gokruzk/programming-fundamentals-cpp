/*
	TODO: Elabore un programa que permita calcular:
	?	1. Potencias
	?	2. Factorial
*/
#include <iostream>
using namespace std;

main()
{
	int op, b, e, x, pot = 1, f, ac = 1, n1, n2, n3;
	cout << "Elija una de las opciones" << endl;
	cout << "1.- Potencias" << endl;
	cout << "2.- Factorial" << endl;
	cin >> op;

	switch (op)
	{
	case 1:
		cout << "Usted eligio las potencias" << endl;
		cout << "Ingrese la base y luego el exponente" << endl;
		cin >> b;
		cin >> e;
		for (x = 1; x <= e; x++)
		{
			pot = pot * b;
		}
		cout << "La potencia es " << pot;
		break;
	case 2:
		cout << "Usted eligio Factorial" << endl;
		cout << "Ingrese el numero" << endl;
		cin >> f;
		for (x = 1; x <= f; x++)
		{
			ac = ac * f;
		}
		cout << "El factorial de " << f << " es " << ac << endl;
	}

	return 0;
}

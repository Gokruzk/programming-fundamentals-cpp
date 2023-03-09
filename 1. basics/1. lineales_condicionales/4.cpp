/*
	TODO: Calcular precio total de la compra de marcadores, si la cantidad es mayor a 1000 tiene un descuento de 8% sino un descuento de 9.5%
*/
#include <iostream>
using namespace std;

main()
{
	int marcadores;

	cout << "INGRESE CUANTOS MARCADORES VA A COMPRAR" << endl;
	cin >> marcadores;

	if (marcadores < 1000)
	{
		cout << "PRECIO TOTAL = " << marcadores * 0.80 << endl;
	}
	else
	{
		cout << "PRECIO TOTAL = " << marcadores * 0.95 << endl;
	}
	return 0;
}

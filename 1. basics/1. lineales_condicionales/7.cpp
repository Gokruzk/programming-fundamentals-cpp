/*
	TODO: Convertir pesos mexicanos a dolares
	* $0.55 = 1 peso mexicano
*/
#include <iostream>
using namespace std;

main()
{
	float P, D = 1;
	float EQ;
	float DOLARES;
	cout << "INGRESE CUANTOS PESOS MEXICANOS HA ADQUIRIDO: ";
	cin >> P;
	cout << "INGRESE A CUANTO EQUIVALE 1 DOLAR EN PESOS: ";
	cin >> EQ;
	DOLARES = P * EQ;

	cout << "LOS " << P << " ES IGUAL A " << DOLARES << " DOLARES" << endl;

	return 0;
}

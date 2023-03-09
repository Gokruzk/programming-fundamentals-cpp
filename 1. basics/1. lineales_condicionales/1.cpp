/*
	TODO: Calcular area de un triangulo
*/
#include <iostream>
using namespace std;

main()
{
	float A, B, H;

	cout << "INGRESE LA BASE DEL TRIANGULO" << endl;
	cin >> B;
	cout << "INGRESE LA ALTURA DEL TRIANGULO" << endl;
	cin >> H;

	A = (B * H) / 2;

	cout << "EL AREA DEL TRIANGULO ES " << A << endl;

	return 0;
}

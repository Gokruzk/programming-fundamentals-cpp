/*
	TODO: Calcular la intensidad de voltqje a partir de la resistencia
	* R = 4
	* V = I * R
*/
#include <iostream>
using namespace std;

main()
{
	float i, r, v;
	r = 4;
	cout << "RESISTENCIA =" << r << endl;
	cout << "INGRESE LA INTENSIDAD DEL VOLTAJE" << endl;
	cin >> i;

	cout << "EL VOLTAJE ES IGUAL A:" << r * i << endl;
	v = r * i;
	cout << "LA POTENCIA ES IGUAL A: " << v * i << endl;

	return 0;
}

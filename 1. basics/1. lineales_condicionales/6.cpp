/*
	TODO: Calcule cuanto debe pagar por metro cuadrado de pintura
	* 1M^2 = $3.25
*/
#include <iostream>
using namespace std;

main()
{
	float M2, RE;
	cout << "INGRESE CUANTOS METROS CUADRADOS TIENE SU PINTURA" << endl;
	cin >> M2;
	RE = M2 * 3.25;

	cout << "TIENE QUE PAGAR " << RE << " DOLARES" << endl;
}

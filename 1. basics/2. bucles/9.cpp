/*
	TODO: Ingrese n notas, calcular su promedio e indique si aprueba o no
	* (prom >= 7) ? aprueba : (prom < 7 && prom > 5) ? supletorio : reprobado
*/
#include <iostream>
using namespace std;

main()
{
	int x, cont;
	cont = 0;
	float prom, n, n1;
	cout << "CUANTAS NOTAS QUIERE INGRESAR" << endl;
	cin >> n;
	cout << endl;
	for (x = 1; x <= n; x++)
	{
		cout << "INGRESE NOTA " << x << endl;
		cin >> n1;
		cont = cont + n1;
	}

	prom = cont / n;

	cout << "SU PROMEDIO ES DE " << prom << endl;

	if (prom >= 7)
	{
		cout << "APROBADO" << endl;
	}
	else
	{
		if (prom < 7 && prom > 5)
		{
			cout << "SUPLETORIO" << endl;
		}
		else
		{
			cout << "REPROBADO" << endl;
		}
	}
}

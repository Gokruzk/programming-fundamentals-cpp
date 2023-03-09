/*
	TODO: Del 1 al 1000, calcule el promedio de los numeros pares e impares
*/
#include <iostream>
using namespace std;

main()
{
	int x, cont, ct, z, cont2, ct2, y, sum;
	cont = 0;
	ct = 0;
	cont2 = 0;
	ct2 = 0;
	for (x = 1; x <= 1000; x++)
	{
		if (x % 2 == 0)
		{
			cont = cont + x;
			ct = ct + 1;
		}
		else
		{
			cont2 = cont2 + x;
			ct2 = ct2 + 1;
		}
	}

	cout << "PROMEDIO PARES = " << cont / ct << endl;
	cout << "PROMEDIO IMPARES = " << cont2 / ct2 << endl;

	return 0;
}

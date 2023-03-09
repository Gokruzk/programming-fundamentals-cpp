/*
	TODO: Calcule el factorial de n numeros
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

main()
{
	int x, y, n;
	cout << "INGRESE HASTA QUE NUMERO DESEA LA LISTA" << endl;
	cin >> n;
	for (x = 1; x <= n; x++)
	{
		y = 1;
		for (int j = 1; j <= x; j++)
		{
			y *= j;
		}
		cout << "Factorial de " << x << ": " << y << endl;
	}

	return 0;
}

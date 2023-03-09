/*
	TODO Calcule el promedio de n notas pares
*/
#include <iostream>
using namespace std;

main()
{
	int x, n, acum, cont;
	cout << "Ingrese cuantas notas desea promediar" << endl;
	cin >> n;
	int a[n - 1];
	float prom;

	cout << "Ingrese las notas desea promediar" << endl;
	for (x = 0; x <= n - 1; x++)
	{
		cin >> a[x];
		if (a[x] % 2 == 0)
		{
			cont = cont + a[x];
			acum = acum + 1;
		}
	}
	prom = cont / acum;
	cout << "El promedio de las notas pares es " << prom << endl;

	return 0;
}

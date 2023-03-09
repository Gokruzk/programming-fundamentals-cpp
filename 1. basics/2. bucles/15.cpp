/*
	TODO: Elabore un programa que permita calcular:
	?	1. Promedio de n notas
	?	2. Tabla de multiplicar
	?	3. Sumar el promedio de los multiplos de 3 y 4 entre 1 y n
*/

#include <iostream>
using namespace std;

main()
{
	int op;
	cout << "1. PROMEDIO DE N NOTAS" << endl;
	cout << "2. TABLA DE MULTIPLICAR" << endl;
	cout << "3. SUMAR EL PROMEDIO DE LOS MÚLTIPLOS DE 3 Y 4 ENTRE 1 Y N" << endl;
	cin >> op;
	switch (op)
	{
	case 1:
		int n, nt, x;
		float prom, acum, no;
		cout << "1. PROMEDIO DE N NOTAS" << endl;
		cout << "INGRESE CUANTAS NOTAS VA A PROMEDIAR" << endl;
		cin >> n;

		for (x = 1; x <= n; x++)
		{
			cout << "INGRESE NOTA " << x << endl;
			cin >> no;
			acum = acum + no;
		}
		prom = acum / n;
		cout << "EL PROMEDIO ES " << prom << endl;
		if (prom >= 7)
		{
			cout << "APROBADO" << endl;
		}
		else
		{
			if (prom >= 5)
			{
				cout << "SUPLETARIO" << endl;
			}
			else
			{
				cout << "REMEDIAL" << endl;
			}
		}
		break;
	case 2:
		int tab;
		cout << "2. TABLA DE MULTIPLICAR" << endl;
		cout << "QUÉ TABLA DESEA SABER:" << endl;
		cin >> tab;
		for (x = 0; x <= 12; x++)
		{
			cout << tab << "x" << x << " = " << x * tab << endl;
		}
		break;
	case 3:
		int m, y, z, p, q;

		p = 0;
		q = 0;
		float prom2, prom3, sum, acum2, acum3;
		prom2 = 0;
		prom3 = 0;
		acum2 = 0;
		acum3 = 0;

		cout << "3. SUMAR EL PROMEDIO DE LOS MÚLTIPLOS DE 3 Y 4 ENTRE 1 Y N" << endl;
		cout << "HASTA QUE NUMERO CONTAR" << endl;
		cin >> m;
		cout << endl;
		for (y = 1; y <= m; y++)
		{
			if (y % 3 == 0)
			{
				p = p + 1;
				acum2 = acum2 + y;
			}
			else
			{
				if (y % 4 == 0)
				{
					q = q + 1;
					acum3 = acum3 + y;
				}
			}
		}
		prom2 = acum2 / p;
		cout << "PROMEDIO MULTIPLO DE 3 = " << prom2 << endl;
		prom3 = acum3 / q;
		cout << "PROMEDIO MULTIPLO DE 4 = " << prom3 << endl;
		sum = prom2 + prom3;
		cout << "SUMA DE PROMEDIOS = " << sum << endl;
	}

	return 0;
}

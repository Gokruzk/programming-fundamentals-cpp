#include <iostream>
#include <stdlib.h>
using namespace std;

main()
{
	int resp;
	do
	{
		int r, edad;
		cout << "1. SI PUEDE VOTAR" << endl;
		cout << "2. SUELDO SEMANAL" << endl;
		cin >> r;

		switch (r)
		{
		case 1:
			cout << "INGRESE SU EDAD" << endl;
			cin >> edad;
			if (edad >= 16)
			{
				cout << "USTED PUEDE VOTAR" << endl;
			}
			else
				cout << "USTED NO PUEDE VOTAR" << endl;
			cout << "DESEA SEGUIR; 1- SI 2-NO" << endl;
			cin >> resp;
			break;

		case 2:
			int h, hx, s, su;

			cout << "INGRESE LAS HORAS SEMANALES DE TRABAJO" << endl;
			cin >> h;
			if (h > 40)
			{
				hx = h - 40;
				s = 23 * hx;
				su = s + (11.50 * 40);
				cout << "SU SUELDO ES = $" << su << endl;
			}
			else
				cout << "SU SUELDO ES = $" << h * 11.50 << endl;
			cout << "DESEA SEGUIR; 1- SI 2-NO" << endl;
			cin >> resp;
		}
		system("cls");
	} while (resp == 1);
	
	return 0;
}

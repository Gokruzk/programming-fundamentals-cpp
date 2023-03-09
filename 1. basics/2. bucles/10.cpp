/*
	TODO: Una persona desea saber que cosas puede comprar
	* Si tiene $10 puede comprar una tarjeta de regalo
	* Si tiene <$101 puede comprar chocolates
	* Si tiene <=$250 puede comprar flores
	*
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

main()
{
	int resp;
	do
	{
		system("cls");
		float d;
		cout << "INGRESE LA CANTIDAD DE DINERO POSEE: ";
		cin >> d;
		if (d <= 10)
		{
			cout << "PUEDE COMPRAR UNA TARJETA DE REGALO" << endl;
		}
		else
		{
			if (d < 101)
			{
				cout << "PUEDE COMPRAR CHOCOLATES" << endl;
			}
			else
			{
				if (d <= 250)
				{
					cout << "PUEDE COMPRAR FLORES" << endl;
				}
				else
				{
					cout << "PUEDE COMPRAR UN ANILLO" << endl;
				}
			}
		}

		cout << "DESEA ELEJIR DE NUEVO ; 1.- SI 2.- NO" << endl;
		cin >> resp;
	} while (resp == 1);
	
	return 0;
}

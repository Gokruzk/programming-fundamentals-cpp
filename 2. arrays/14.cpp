/*
	TODO: Comprobar si una palabra es palindromo
*/
#include <iostream>
using namespace std;

main()
{
	int n, x, cont;
	cont = -1;
	cout << "Ingrese el numero de caracteres de su palabra" << endl;
	cin >> n;
	cin.ignore();
	char palabra[n - 1], invertida[n - 1];

	cout << "Ingrese la palabra" << endl;
	for (x = 0; x <= n - 1; x++)
	{
		cin >> palabra[x];
		cin.ignore();
		invertida[(n - 1) - x] = palabra[x];
	}

	cout<<"Plabra ingresada: ";
	for (x = 0; x <= n - 1; x++)
	{
		cout << palabra[x];
	}
	cout << endl;
	cout<<"Plabra invertida: ";
	for (x = 0; x <= n - 1; x++)
	{
		cout << invertida[x];
	}
	cout << endl;
	for (x = 0; x <= n - 1; x++)
	{

		if (palabra[x] == invertida[x])
		{
			cont = cont + 1;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << palabra[i];
	}

	if (cont == n - 1)
	{
		cout << " si es un palindromo" << endl;
	}
	else
	{
		cout << " no es un palindromo" << endl;
	}

	return 0;
}

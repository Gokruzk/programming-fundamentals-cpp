/*
	TODO: Elabore un programa modular que:
	?	1. Comprobar si un numero es primo
	?	2. Imprimir numeros primos entre 1 y 100
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int primo(int n);
	int op, r, num, cont, cont1;

	do
	{
		cout << "ELIJA UNA DE LAS OPCIONES DEL MENU" << endl;
		cout << "1. NUMERO PRIMO" << endl;
		cout << "2. MOSTRAR NUMEROS PRIMOS" << endl;
		cout << "3. SALIR" << endl;
		cin >> op;
		cout << endl;
		switch (op)
		{
		case 1:
		{
			system("CLS");
			cout << "1. NUMERO PRIMO" << endl;
			cout << "INGRESE UN NUMERO" << endl;
			cin >> num;
			cout << (primo(num) ? "SI " : "NO") << "ES PRIMO" << endl;
			cont = 0;
			break;
		}
		case 2:
		{
			for (int x = 1; x <= 100; x++)
			{
				if (primo(x))
				{
					cout << x << endl;
				}
			}
			cont1 = 0;
			break;
		}
		case 3:
		{
			break;
		}
		}

		cout << "DESEA CONTINUAR; 1= SI - 2=NO " << endl;
		cin >> r;
		system("CLS");
	} while (r == 1);

	return 0;
}

int primo(int n)
{
	int x, cont;
	cont = 0;
	for (int x = 1; x <= n; x++)
	{
		if (n % x == 0)
		{
			cont += 1;
		}
	}
	if (cont <= 2)
	{
		return true;
	}
	else
	{
		return false;
	}
}
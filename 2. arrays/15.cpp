/*
	TODO: Elabore un programa que realice
	?	1. Ingresar un vector de n elementos, ingrese en otros dos vectores multiplos de 3 y 4
	?	2. Operaciones basicas entre dos vectores ingresados
*/
#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
	int op;
	cout << "ELJA UNA DE LAS OPCIONES:" << endl;
	cout << "1.- VECTOR PADRE DE N ELEMENTOS CON MELLIZOS" << endl;
	cout << "2.- OPERACIONES BASICAS" << endl;
	cin >> op;

	switch (op)
	{
	case 1:
	{
		int lim;

		cout << "1.- VECTOR PADRE DE N ELEMENTOS CON MELLIZOS" << endl;
		cout << "INGRESE LA CANTIDAD DE ELEMENTOS" << endl;
		cin >> lim;
		lim -= 1;
		int v1[lim];

		for (int x = 0; x <= lim; x++)
		{
			cout << "INGRESE EL ELEMENTO N.- " << x + 1 << endl;
			cin >> v1[x];
		}

		for (int x = 0; x <= lim; x++)
		{
			int v2[x];
			int v3[x];
			if (v1[x] % 3 == 0)
			{
				v2[x] = v1[x];
				cout << "MULTIPLOS DE 3:" << endl;
				cout << v2[x] << endl;
			}
			if (v1[x] % 4 == 0)
			{
				v3[x] = v1[x];
				cout << "MULTIPLOS DE 4:" << endl;
				cout << v3[x] << endl;
			}
		}
	}
	break;
	case 2:
	{
		int oper;

		cout << "1.- OPERACIONES BASICAS" << endl;

		cout << "ELIJA:" << endl;
		cout << "1.- Suma" << endl;
		cout << "2.- Resta" << endl;
		cout << "3.- Multiplicacion de vectores" << endl;
		cout << "4.- Division de vectores" << endl;
		cin >> oper;

		switch (oper)
		{
		case 1:
			int s[10];
			int s2[10];
			int sum;
			sum = 0;
			cout << "1.- Suma" << endl;
			for (int y = 0; y <= 9; y++)
			{
				cout << "INGRESE VECTORES"
					 << " A " << endl;
				cin >> s[y];
				cout << "INGRESE VECTORES"
					 << " B " << endl;
				cin >> s2[y];
			}
			for (int y = 0; y <= 9; y++)
			{
				sum = s[y] + s2[y];
				cout << "Suma: " << sum << endl;
			}
			break;
		case 2:
			int r[10];
			int r2[10];
			int rest;
			rest = 0;
			cout << "2.- Resta" << endl;
			for (int y = 0; y <= 9; y++)
			{
				cout << "INGRESE VECTORES"
					 << " A " << endl;
				cin >> r[y];
				cout << "INGRESE VECTORES"
					 << " B " << endl;
				cin >> r2[y];
			}
			for (int y = 0; y <= 9; y++)
			{
				rest = r[y] - r2[y];
				cout << "Resta: " << rest << endl;
			}
			break;
		case 3:
			int m[10];
			int m2[10];
			int mult;
			mult = 0;

			cout << "3.- MULTIPLICACION" << endl;
			for (int y = 0; y <= 9; y++)
			{
				cout << "INGRESE VECTORES"
					 << " A " << endl;
				cin >> m[y];
				cout << "INGRESE VECTORES"
					 << " B " << endl;
				cin >> m2[y];
			}
			for (int y = 0; y <= 9; y++)
			{
				mult = m[y] * m2[y];
				cout << "Mult: " << mult << endl;
			}
			break;
		case 4:
			float d[10];
			float d2[10];
			int div;
			div = 0;

			cout << "4.- DIVISION" << endl;
			for (int y = 0; y <= 9; y++)
			{
				cout << "INGRESE VECTORES"
					 << " A " << endl;
				cin >> d[y];
				cout << "INGRESE VECTORES"
					 << " B " << endl;
				cin >> d2[y];
			}
			for (int y = 0; y <= 9; y++)
			{
				div = d[y] / d2[y];
				cout << "Div: " << div << endl;
			}
		}
	}

		getch();
		return 0;
	}
}
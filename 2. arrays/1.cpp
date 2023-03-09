#include <iostream>
using namespace std;

main()
{
	// NUMEROS ENTEROS
	int a[9], c[25], x;
	char b[9];

	a[0] = 0;
	a[1] = 8;
	a[2] = 0;
	a[3] = 5;
	a[4] = 4;
	a[5] = 2;
	a[6] = 7;
	a[8] = 9;
	a[9] = 1;
	a[10] = 3;

	cout << a[0] << a[1] << a[2] << a[3] << a[4] << a[5] << a[6] << a[7] << a[8] << a[9] << a[10] << endl;
	// CARACTERES

	b[0] = 'P';
	b[1] = 'a';
	b[2] = 'n';
	b[3] = 'c';
	b[4] = 'r';
	b[5] = 'a';
	b[6] = 'c';
	b[8] = 'i';
	b[9] = 'a';

	cout << b[0] << b[1] << b[2] << b[3] << b[4] << b[5] << b[6] << b[7] << b[8] << b[9] << endl;
	cout << b << endl;

	// VECTOR CON FOR
	for (x = 0; x <= 24; x++)
	{
		cout << "Ingrese el elemento " << x + 1 << " del vector" << endl;
		cin >> c[x + 1];
	}

	for (x = 0; x <= 24; x++)
	{
		cout << x << endl;
	}

	// VECTOR SE LLENA SOLO
	for (x = 0; x <= 24; x++)
	{
		c[25] = x + 1;
	}
	cout << x << endl;
	
	return 0;
}

/*
	TODO: Reemplazar vocales por un *
	* pan: p*n
*/
#include <iostream>
using namespace std;

main()
{
	int x, n;
	cout << "Ingrese cuantos caracteres tiene la palabra" << endl;
	cin >> n;
	char a[n - 1];

	cout << "Ingrese su palabra" << endl;

	for (x = 0; x <= n - 1; x++)
	{
		cin >> a[x];
		if (a[x] == 'a' or a[x] == 'e' or a[x] == 'i' or a[x] == 'o' or a[x] == 'u')
		{
			a[x] = '*';
		}
	}
	
	for (x = 0; x <= n - 1; x++)
	{
		cout << a[x];
	}

	return 0;
}

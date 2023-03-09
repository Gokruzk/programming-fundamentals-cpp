/*
	TODO: Reemplazar consonantes por un *
	* pan: *a*n
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
		if (a[x] != 'a' and a[x] != 'e' and a[x] != 'i' and a[x] != 'o' and a[x] != 'u')
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

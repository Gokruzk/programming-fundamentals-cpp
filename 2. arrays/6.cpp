/*
	TODO: Ingrese su nombre letra por letra
*/
#include <iostream>
using namespace std;
main()
{
	int x;
	char a[5];

	cout << "Ingrese su nombre(Letra por letra)" << endl;
	for (x = 0; x <= 5; x++)
	{
		cin >> a[x];
	}
	cout << endl;
	cout << "Su nombre es:" << endl;
	cout << endl;
	for (x = 0; x <= 5; x++)
	{
		cout << a[x] << endl;
	}

	return 0;
}

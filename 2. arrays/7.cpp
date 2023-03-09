/*
	TODO: Ingrese un vector con limite
*/
#include <iostream>
using namespace std;

int main()
{
	int lim;
	cout << "INGRESE EL LIMITE DEL VECTOR" << endl;
	cin >> lim;
	lim -= 1;
	int b[lim];

	for (int x = 0; x <= lim; x++)
	{
		cout << "INGRESE LA POSICION " << x + 1 << " DEL VECTOR" << endl;
		cin >> b[x];
	}

	cout << endl;

	for (int x = 0; x <= lim; x++)
	{
		cout << "LA POSICION " << x + 1 << " ES:" << endl;
		cout << b[x] << endl;
	}

	return 0;
}

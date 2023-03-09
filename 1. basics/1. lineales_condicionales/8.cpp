/*
	TODO: Calcular mayor entre dos numeros
*/
#include <iostream>
using namespace std;

main()
{
	int n1, n2;

	cout << "INGRESE DOS NUMEROS" << endl;
	cin >> n1;
	cin >> n2;

	if (n1 > n2)
	{
		cout << endl;
		cout << n1 << " ES EL MAYOR" << endl;
	}
	else
	{
		if (n1 == n2)
		{
			cout << endl;
			cout << "LOS NUMEROS SON IGUALES" << endl;
		}
		else
		{
			cout << endl;
			cout << n2 << " ES EL MAYOR" << endl;
		}
	}

	return 0;
}

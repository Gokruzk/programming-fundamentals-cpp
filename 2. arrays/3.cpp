/*
	TODO: Ingrese un vector y multiplique sus elementos por 3
*/
#include <iostream>
using namespace std;

main()
{
	// Los valores del vector se multiplican por 3
	int x, c[9];
	for (x = 0; x <= 9; x++)
	{
		cout << "Ingrese el elemento " << x + 1 << " del vector" << endl;
		cin >> c[x];
	}
	for (x = 1; x <= 24; x++)	//! error
	{
		cout << c[x] * 3 << endl;
	}

	return 0;
}

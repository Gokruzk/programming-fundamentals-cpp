/*
	TODO: Convertir un numero binario a entero
	* 10101011 = 171
*/

#include <iostream>
#include <math.h>
using namespace std;
main()
{
	int x, v[7], z, pot, res, sum = 0;
	pot = 7;

	for (x = 0; x <= 7; x++)
	{
		res = 0;
		cout << "INGRESE EL ELEMENTO " << x + 1 << " DE SU BINARIO:" << endl;
		cin >> v[x];

		if (v[x] == 1)
		{
			res = pow(2, pot);
			sum += res;
		}
		pot--;
	}
	
	cout << "[ ";
	for (int i = 0; i < 8; i++)
	{
		cout << v[i] << " ";
	}
	cout << "]" << endl;
	cout << "EL NUMERO ENTERO ES: " << sum << endl;

	return 0;
}

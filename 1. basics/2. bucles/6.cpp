#include <iostream>
#include <stdlib.h>
using namespace std;

main()
{
	int r;
	r = 1;
	do
	{
		int x, n, acum;
		acum = 1;
		cout << "FACTORIAL" << endl;
		cout << "DE QUE NUMERO QUIERE CALCULAR EL FACTORIAL" << endl;
		cin >> n;
		for (x = 1; x <= n; x++)
		{
			cout << x << "x";
			acum = acum * x;
		}
		cout << endl
			 << endl;
		cout << "EL FACTORIAL DE " << n << "ES IGUAL A " << acum << endl;
		cout << "DESEA HACER OTRO FACTORIAL ; 1=si 2=no" << endl;
		cin >> r;
		system("CLS");
	} while (r == 1);

	return 0;
}

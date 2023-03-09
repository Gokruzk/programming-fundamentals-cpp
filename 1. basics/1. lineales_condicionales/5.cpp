/*
	TODO: Calcular edad
*/
#include <iostream>
using namespace std;

main()
{
	int ed, an, ac;
	cout << "INGRESE EL AÑO EN QUE NACIO SU TRABAJADOR" << endl;
	cin >> an;
	cout << "INGRESE EL AÑO ACTUAL" << endl;
	cin >> ac;
	ed = ac - an;
	cout << "LA EDAD ES " << ed << endl;
	return 0;
}

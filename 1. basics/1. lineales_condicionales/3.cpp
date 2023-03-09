/*
	TODO: Calcular el valor final del cheque a pagar en un hotel, sabiendo que un dia de hospedaje cubre los montes de consumo del hotel y la comida + $100
*/
#include <iostream>
using namespace std;

main()
{
	int dias;
	float hotel, comida, p1, p2;
	cout << "INGRESE LOS DIAS" << endl;
	cin >> dias;
	cout << "INGRESE EL MONTO QUE SE CONSUMIRA EN EL HOTEL EN UN DIA" << endl;
	cin >> hotel;
	cout << "INGRESE EL MONTO DE COMIDA POR DIA" << endl;
	cin >> comida;

	p1 = hotel + comida + 100;
	p2 = p1 * dias;
	cout << "CONSUMIRA: " << endl;
	cout << "HOTEL: $" << hotel * dias << endl;
	cout << "COMIDA: $" << comida * dias << endl;
	cout << "GASTOS VARIOS: $" << 100 * dias << endl;

	cout << "EL CHEQUE TENDRA UN VALOR DE $" << p2 << endl;
}

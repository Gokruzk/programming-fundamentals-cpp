/*
	TODO: Elabore un programa que permita calcular:
	?	1. Precio de metros cubicos de agua consumidos
	?	2. Precio de consumo de kilowatts
	?	3. Precio final de un producto con 20% de descuento e IVA de 15%
*/

#include <iostream>
using namespace std;

main()
{
	int resp;
	do
	{
		int op;
		cout << "1. METROS CUBICOS DE AGUA" << endl;
		cout << "2. CONSUMO DE KILOWATTS" << endl;
		cout << "3. DESCUENTO E IVA DE UN PRODUCTO" << endl;
		cin >> op;
		switch (op)
		{
		case 1:

			cout << "1. METROS CUBICOS DE AGUA" << endl;
			float m3;
			cout << "EL METRO CUBICO DE AGUA = 0.48 DOLARES" << endl;
			cout << "INGRESE CUANTOS METROS CÚBICOS DE AGUA CONSUME" << endl;
			cin >> m3;

			cout << "DEBE PAGAR " << m3 * 0.48 << " DOLARES" << endl;
			cout << "DESEA SEGUIR? 1. SI 2. NO" << endl;
			cin >> resp;
			break;

		case 2:

			cout << "2. CONSUMO DE KILOWATTS" << endl;
			float kw, cost2;
			cout << "EL KILOWATTS DE ENERGÍA ELECTRICA = 0.807 DOLARES" << endl;
			cout << "INGRESE CUANTOS KILOWATTS DE ENERG�A ELECTRICA CONSUME" << endl;
			cin >> kw;

			cout << "DEBE PAGAR " << kw * 0.807 << " DOLARES" << endl;
			cout << "DESEA SEGUIR? 1. SI 2. NO" << endl;
			cin >> resp;
			break;

		case 3:

			float desc, precio;
			cout << "INGRESE EL PRECIO DE UN PRODUCTO, AL CUAL SE LE HARÁ UN DESCUENTO DEL 20%" << endl;
			cin >> precio;
			desc = precio * 0.20;
			cout << "EL PRECIO CON EL 20% DE DESCUENTO ES " << desc << endl;
			cout << "EL PRECIO CON IBA DE 15% ES " << desc * 0.15 << endl;
			cout << "DESEA SEGUIR? 1. SI 2. NO" << endl;
			cin >> resp;
		}
	} while (resp == 1);

	return 0;
}

/*
    TODO: Elaborar un algoritmo que permita mostrar el sueldo promedio de un grupo de empleados.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    float sueldo, data, prom;
    cout << "Ingrese cantidad de empleados: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese sueldo de empleado " << i + 1 << ": ";
        cin >> data;
        sueldo += data;
    }
    prom = sueldo / n;
    cout << "Promedio: " << prom;

    return 0;
}
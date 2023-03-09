/*
    TODO: Elaborar un algoritmo que solicite la edad de 15 personas, y que muestre cuantos son mayores de edad y cuantos son menores de edad hay.
*/

#include <iostream>
using namespace std;

int main()
{
    int may = 0, men = 0, ed;
    for (int i = 0; i < 15; i++)
    {
        cout << "Ingrese edad de persona " << i + 1 << ": ";
        do
        {
            cin >> ed;
            if (ed < 0)
            {
                cout << "La edad debe ser positiva" << endl;
                cout<<"Ingrese de nuevo: ";
            }
        } while (ed < 0);

        if (ed > 17)
        {
            may++;
        }
        else
        {
            men++;
        }
    }
    cout << "Mayores de edad: " << may << endl;
    cout << "Menores de edad: " << men << endl;

    return 0;
}
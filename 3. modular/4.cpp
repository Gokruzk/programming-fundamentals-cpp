/*
    TODO: Calcular la media de n numeros ingresados
*/
#include <iostream>
using namespace std;

int main(void)
{
    float readNums(int n);
    float media(float acum, int z);

    int v;
    float acum, med;

    cout << "Ingrese la cantidad de numeros a ingresar: ";
    cin >> v;
    acum = readNums(v);

    med = media(acum, v);

    cout << endl
         << "La media de los numeros ingresados es: " << med << endl;

    system("pause");
}

float readNums(int n)
{
    float acum = 0, x = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        cout << "Ingrese el #" << i + 1 << " valor: ";
        cin >> x;
        acum += x;
    }
    return acum;
}

float media(float acum, int n)
{
    float prom = 0;
    prom = acum / n;
    return prom;
}

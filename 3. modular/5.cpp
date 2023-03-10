/*
    TODO: Leer 10 números enteros por teclado y guardarlos en un array. Calcula y muestra la media de los números que estén en las posiciones pares del array.
*/
#include <iostream>
using namespace std;

int main()
{
    float readNums();
    int acum;
    float m;

    m = readNums();
    cout << endl
         << "La media de los numeros ubicados en las posiciones paresdel array es : " << m << endl;

    return 0;
}

float readNums()
{
    int v[9], i;
    float med = 0, acum = 0, cont = 0;

    cout << "Ingrese 10 numeros" << endl;
    for (i = 0; i < 10; i++)
    {
        cout << "Ingrese el numero a guardar en la posicion #" << i << ": ";
        cin >> v[i];
        if (i % 2 == 0)
        {
            acum += v[i];
            cont++;
        }
    }
    med = acum / cont;
    return med;
}
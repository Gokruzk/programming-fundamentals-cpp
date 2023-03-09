/*
    TODO: Elaborar un algoritmo que solicite 2 números enteros y muestre su producto por el método de sumas sucesivas.
*/

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, p;
    cout << "Ingrese n1: ";
    cin >> n1;
    cout << "Ingrese n2: ";
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        p += n1;
    }
    cout << n1 << " * " << n2 << " = " << p << endl;
    
    return 0;
}
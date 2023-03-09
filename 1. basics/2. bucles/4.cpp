/*
    TODO: Suma de los n primeros numeros naturales
*/

#include <iostream>
using namespace std;

int main()
{
    int n, sum;
    cout << "Ingrese n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Suma: " << sum << endl;

    return 0;
}
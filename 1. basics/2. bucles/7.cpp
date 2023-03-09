/*
    TODO: Suma n primeros numeros pares
    * 5: 2,4,6,8,10
*/

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, cont = 0, x = 1;
    cout << endl
         << "Ingrese n: ";
    cin >> n;
    cout << "[ ";
    while (cont < n)
    {
        if (x % 2 == 0)
        {
            cout << x << " ";
            sum += x;
            cont++;
        }
        x++;
    }
    cout << "]" << endl;
    cout << "Suma: " << sum << endl
         << endl;
    return 0;
}

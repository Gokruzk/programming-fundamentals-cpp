/*
    TODO: Elabore un algoritmo que muestre los números pares del 1 al 10.
*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
    
    return 0;
}
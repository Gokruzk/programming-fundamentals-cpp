/*
    TODO: Contar el número de elementos positivos, negativos y ceros en un array de 10 enteros
*/
#include <iostream>
using namespace std;

int main(void)
{
    void readv(int a[]);
    void cont(int a[]);

    int v[9];
    readv(v);
    cont(v);
    cout << endl;

    system("pause");
}

void readv(int a[])
{
    int i, cont = 0;
    float acum = 0;
    for (i = 0; i <= 9; i++)
    {
        cout << "Ingrese el #" << i + 1 << " numero: ";
        cin >> a[i];
    }
}
void cont(int a[])
{
    int pos = 0, neg = 0, ig = 0;
    for (int i = 0; i <= 9; i++)
    {
        if (a[i] > 0)
        {
            pos++;
        }
        else if (a[i] < 0)
        {
            neg++;
        }
        else if (a[i] == 0)
        {
            ig++;
        }
    }
    cout << endl
         << "POSITIVOS: " << pos;
    cout << endl
         << "NEGATIVOS: " << neg;
    cout << endl
         << "IGUALES A 0: " << ig;
}
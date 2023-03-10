/*
    TODO: Leer 10 enteros y mostrar la media de los valores negativos y la de los positivos.
*/
#include <iostream>
using namespace std;

int main(void)
{
    void readv(int a[]);
    void cont(int a[], int &po, int &ne);
    void med(int a[], int po, int ne);

    int p = 0, n = 0;
    int v[9];

    readv(v);
    cont(v, p, n);
    med(v, p, n);
    cout << endl;

    system("pause");
}
void readv(int a[9])
{
    int i;
    for (i = 0; i <= 9; i++)
    {
        cout << "Ingrese el #" << i + 1 << " numero: ";
        cin >> a[i];
    }
}

void cont(int a[], int &po, int &ne)
{
    po = 0, ne = 0;
    for (int i = 0; i <= 9; i++)
    {
        if (a[i] > 0)
        {
            po++;
        }
        else if (a[i] < 0)
        {
            ne++;
        }
    }
}

void med(int a[], int po, int ne)
{
    float acum = 0, acum1 = 0;
    float m = 0, m1 = 0;
    float v[9];
    for (int i = 0; i < 10; i++)
    {
        v[i] = a[i];
    }
    for (int i = 0; i <= 9; i++)
    {
        if (v[i] > 0)
        {
            acum += v[i];
        }
        else if (v[i] < 0)
        {
            acum1 += v[i];
        }
    }
    m = acum / po;
    m1 = acum1 / ne;
    cout << endl
         << "La media de los numeros positivos es: " << m;
    cout << endl
         << "La media de los numeros negativos es: " << m1;
}
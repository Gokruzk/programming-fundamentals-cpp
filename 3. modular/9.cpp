/*
    TODO: Leer N alturas y calcular la altura media. Calcular cuántas hay superiores a la media y cuántas inferiores.
*/
#include <iostream>
using namespace std;

int main(void)
{
    void readh(float a[], int n);
    float media(float a[], int n);
    void hMay(float a[], int n, float md);
    void hMen(float a[], int n, float md);

    int n;
    float v[100];
    float m;
    cout << "Ingrese la cantidad de alturas a ingresar: ";
    cin >> n;

    readh(v, n);
    m = media(v, n);
    hMay(v, n, m);
    hMen(v, n, m);

    cout << endl;

    system("pause");
}
void readh(float a[], int n)
{
    int i;
    float acum = 0;
    for (i = 0; i < n; i++)
    {
        cout << "Ingrese la altura #" << i + 1 << ": ";
        cin >> a[i];
    }
}
float media(float a[], int n)
{
    float acum = 0, med;
    for (int i = 0; i < n; i++)
    {
        acum += a[i];
    }
    med = acum / n;
    cout << endl
         << "La media de las alturas ingresadas es: " << med << endl;
    return med;
}
void hMay(float a[], int n, float md)
{
    cout << endl
         << "ALTURAS MAYOR A LA MEDIA:" << endl;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > md)
        {
            cout << "Altura #" << i + 1 << ": " << a[i] << endl;
        }
    }
}
void hMen(float a[], int n, float md)
{
    cout << endl
         << "ALTURAS MENOR A LA MEDIA:" << endl;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < md)
        {
            cout << "Alltura #" << i + 1 << ": " << a[i] << endl;
        }
    }
}
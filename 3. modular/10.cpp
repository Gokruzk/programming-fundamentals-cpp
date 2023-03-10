/*
    TODO: Determinar los valores que se encuentran repetidos consecutivamente entre varios números enteros ingresados por el usuario
*/
#include <iostream>
using namespace std;

int main(void)
{
    void read(int n, int a[]);
    int calc(int n, int a[], int b[]);
    void print(int cont, int b[]);

    int n, cont = 0;
    cout << "Escriba la cantidad de numeros a ingresar: ";
    cin >> n;
    int v1[n], v2[n];
    read(n, v1);
    cont = calc(n, v1, v2);
    print(cont, v2);

    system("pause");
}
void read(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "Ingrese el valor #" << i + 1 << ": ";
        cin >> a[i];
    }
}
int calc(int n, int a[], int b[])
{
    int cont = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            for (int j = cont; j <= cont; j++)
            {
                b[j] = a[i];
            }
            cont++;
        }
    }
    return cont;
}
void print(int cont, int b[])
{
    cout << "===================" << endl;
    cout << "Numeros repetidos consecutivamente:" << endl;
    for (int i = 0; i < cont; i++)
    {
        cout << b[i] << endl;
    }
}
/*
    TODO: Leer por teclado la nota de los alumnos de una clase y calcular la nota media del grupo. Mostar los alumnos con notas superiores a la media.
*/
#include <iostream>
using namespace std;
int main(void)

{
    void readv(float a[], int st);
    float media(float a[], int n);
    void stuMay(float a[], int n, float md);

    int std;
    float m;
    
    cout << endl
         << "Ingrese la cantidad de estudiantes del curso: ";
    cin >> std;
    float v[std];
    readv(v, std);
    m = media(v, std);
    stuMay(v, std, m);
    cout << endl;

    system("pause");
}

void readv(float a[], int st)
{
    int i;
    float acum = 0;
    for (i = 0; i < st; i++)
    {
        cout << "Ingrese la nota del alumno #" << i + 1 << ": ";
        cin >> a[i];
    }
    cout << endl;
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
         << "La media de las notas es igual a: " << med << endl;
    return med;
}

void stuMay(float a[], int n, float md)
{
    cout << endl
         << "ALUMNOS CON NOTA MAYOR A LA MEDIA:" << endl;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > md)
        {
            cout << "Alumno #" << i + 1 << ": " << a[i] << endl;
        }
    }
}
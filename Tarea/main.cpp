#include <math.h>
#include <iostream>

using namespace std;

int millas()
{
    int n;
    float km;
    cout << "Ingrese la cantidad de millas: ";
    cin >> n;
    km = n*1.61;
    cout << "La cantidad de millas en km es: " << km << endl;
    return 0;
}

int numero()
{
    int n;
    cout << "Ingrese el numero a verificar: ";
    cin >> n;
    if(n<0)
        cout << "El numero debe ser un entero positivo";
    else
        if(n%2==0)
            cout << "El numero es par";
        else
            cout << "El numero es impar";
    return 0;
}

int operandos(int a,int b)
{
    int res;
    char operadores;
    if()
}

int exponencial(int b,int e)
{
    return pow(b,e);
}

int main()
{
    int b,e;
    cout << "Ingrese el valor de la base: ";
    cin >> b;
    cout << "Ingrese el valor del exponente: ";
    cin >> e;
    cout << "El resultado es: " << exponencial(b,e) << endl;
}

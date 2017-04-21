#include <iostream>

using namespace std;

int exponencial(int b,int e)
{
    if(b==0)
        return 0;
    if(e==0)
        return 1;
    else
        return a**b;
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



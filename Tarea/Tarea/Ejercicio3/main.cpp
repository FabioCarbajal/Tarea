#include <iostream>

using namespace std;

int main()
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

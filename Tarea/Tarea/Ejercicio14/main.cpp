#include <iostream>

using namespace std;

int sum(const int array[], const int length)
{
    int suma=0;
    for(int i=0;i<length;suma+=array[i++]);
    return suma;
}

int main()
{
    int n;
    cout << "Ingrese la cantidad de elementos del arreglo" << endl;
    cin >> n;
    int array[n];
    cout << "Ingrese los elementos: " << endl;
    for(int i=0;i<n;i++)
        cin >> array[i];
    cout << "La suma es: " << sum(array,n) << endl;
}

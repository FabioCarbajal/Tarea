#include <iostream>

using namespace std;

void intercambio(int &a,int &b)
{
    int tam;
    tam=a;
    a=b;
    b=tam;
}

void invertir(int array[],int length)
{
    for(int i=0;i<length/2;i++)
        intercambio(array[i],array[length-(i+1)]);
}

int main()
{
    int n;
    cout << "Ingrese la cantidad de elementos del arreglo: ";
    cin >> n;
    int array[n];
    cout << "Ingrese los elementos: " << endl;
    for(int i=0; i<n; i++)
        cin >> array[i];
    cout << "Arreglo invertido: " << endl;
    invertir(array,n);
    for(int i=0; i<n; i++)
        cout << array[i];
}

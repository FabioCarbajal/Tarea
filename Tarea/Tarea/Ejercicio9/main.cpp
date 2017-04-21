#include <iostream>

using namespace std;

void imprimir(int arreglo[], int n)
{
    cout << "Arreglo ordenado: ";
    for(int i=0;i<n;i++)
        cout << "[" << arreglo[i] << "]";
}

void insercion(int arreglo[], int n)
{
    int i,b,c;
    for(i=0;i<=n-1;i++)
   {
       c=arreglo[i];
       b=i-1;
       while((b>=0) && (c<arreglo[b]))
       {
           arreglo[b+1]=arreglo[b];
           b=b-1;
       }
       arreglo[b+1]=c;
   }

}

int main()
{
    int n;
    cout << "Numeros de elementos del arreglo: ";
    cin >> n;
    int num[n];
    for(int i=0; i<n;i++)
    {
        cout << "Ingrese los numeros: " << (i+1) << endl;
        cin >> num[i];
    }
    insercion(num,n);
    imprimir(num,n);

    return 0;
}

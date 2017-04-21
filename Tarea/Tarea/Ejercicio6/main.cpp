#include <iostream>

using namespace std;

int main()
{
    char a;
    int b;
    int c;
    cout << "Ingrese un operador: " <<endl;
    cin >> a;
    cout << "Ingrese el primer numero a operar: "<<endl;
    cin >> b;
    cout << "Ingrese el segundo numero a operar: "<<endl;
    cin >> c;
    if(a=='+')
        cout << "La respuesta es: " << b+c;
    if(a=='-')
        cout << "La respuesta es: " << b-c;
    if(a=='*')
        cout << "La respuesta es: " << b*c;
    if(a=='/')
        cout << "La respuesta es: " << float(b/c);
    return 0;
}

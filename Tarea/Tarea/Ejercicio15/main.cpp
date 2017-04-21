#include <iostream>

using namespace std;

char palindrome(char [a])
{
    char a;
    char n;
    if (n<=1)
        cout << "Si es un palindrome";
    if (a[0]==a[n-1])
        cout << "Si es un palindrome";
    else
        cout << "No es un palindrome";
}

int main()
{
    char a;
    cout << "Ingrese la palabra a comprobar: ";
    cin >> a;
    palindrome(a);
}

#include <iostream>

using namespace std;

int main(){
    int t=4;
    int i;
    int j, k, a[t][t], b[t][t], c[t][t];
    cout << "MATRIZ A" << endl;
    for(i = 0 ; i < t ; i++){
        for(j=0;j<t;j++){
     cout << "Introduzca los elementos de la matriz: " << i << j;
     cin >> a[i][j];
 }
    }
    cout << endl;
    for(i=0;i<t;i++){
        for(j=0;j<t;j++){
            cout << a[i][j] << " ";
            if(j == 2)
               cout << endl;
    }
    }
    cout << endl;
    cout << "MATRIZ 2" << endl;
    for(i = 0 ; i < t; i++){
        for(j = 0 ; j <t; j++){
            cout << "Introduzca los valores de la matriz: " << i << j;
            cin >> b[i][j];
        }
    }
    cout << endl;
    for(i=0;i<t;i++){
        for(j=0;j<t;j++){
            cout << b[i][j] << " ";
            if(j == 2)
               cout << endl;
        }
    }
  for(i=0;i<t;i++){
      for(j=0;j<t;j++){
          c[i][j]=0;
          for(k=0;k<t;k++){
              c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
          }
      }
  }
  cout << endl << "MATRIZ C (Matriz A*B)." << endl;
  cout << endl;
  for(i=0;i<t;i++){
      for(j=0;j<t;j++){
          cout << c[i][j] << " ";
          if(j==2)
             cout << endl;
      }
  }
  return 0;
  }

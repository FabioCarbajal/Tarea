#include <iostream>

using namespace std;

void mezclar(int A[], int p, int q, int r)
{
  int i=p;
  int j=r+1;
  int* aux= new int[der-izq+1];
  int k=0;

  while ((i<=centro) &&(j<=der))
  {
      Cont++;
      if(A[i]<A[j])
      {
          aux[k]=A[i];
          i++;
      }
      else
      {
          aux[k]=A[j];
          j++;
      }
      k++;
  }

  while (i<=centro)
  {
      Cont++;
      aux[k]=A[i];
      i++;
      k++;
  }

  while (j<=der)
  {
      Cont++;
      aux[k]=A[j];
      j++;
      k++;
  }

  for(i=0;i<k;i++)
  {
      Cont++;
      A[i+izq]=aux[i];
  }

}


void ordenarMezcla(int A[], int p, int q)
{
  Cont++;
  int centro=0;

  if (p<q)
  {

      centro=(p+q)/2;
      ordenarMezcla(A,p,centro);
      ordenarMezcla(A,centro+1,q);
      mezclar(A,p,q,centro);
  }
}

int main()
{

    return 0;
}

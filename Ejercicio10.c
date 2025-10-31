/*Victor Seiji Nieto Morita
clase 1 ejercicio 10*/

#include <stdio.h>

int main ()
{
  int a, b, c;
  int mayor, medio, menor;

  printf("Ingrese el primer número: ");
  scanf("%d", &a);

  printf("Ingrese el segundo número: ");
  scanf("%d", &b);

  printf("Ingrese el tercer número: ");
  scanf("%d", &c);

  //Determinar el orden de los números
  if (a >= b && a >= c) 
  {
   mayor = a;
   if (b >= c) 
    {
     medio = b;
     menor = c;
    }
   else 
    {
     medio = c;
     menor = a;
    }
  }
   else
    {
     mayor = c;
     if (a >= b)
      {
      medio = a;
      menor = b;
      }
     else
      { 
       medio = b;
       menor = a;
      }
    }
 printf("\nLos números ordenados de mayor a menor son: %d, %d, %d\n", mayor, medio, menor);

 return 0;

}

   

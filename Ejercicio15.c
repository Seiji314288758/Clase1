/*Victor Seiji Nieto Morita
clase 2 ejercicio 15*/

#include <stdio.h>

int main()
{
  int numero;

  printf("Ingrese el numero de la carta (1 al 12): ");
  scanf("%d", &numero);

  switch (numero)
   {
    case 1:
       printf("As\n");
       break;
    case 2:
       printf("Sota\n");
       break;
    case 3:
       printf("Caballo\n");
       break;
    case 4: 
       printf("Rey\n");
       break;
    default:
       if (numero >= 2 && numero <= 9)
        {
         printf("No es as ni figura\n");
        }
    else
       {
        printf("Este no es un número de una carta de la baraja española\n");
       }
   }
return 0;
}

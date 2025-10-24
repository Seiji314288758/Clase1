#include <stdio.h>

int main ()
{
  int numero;

  printf("Ingres un numero entre el 1 y 7: ");
  scanf("%d", &numero);

  switch (numero)
  {
case 1:
   printf("Lunes\n");
   break;
case 2:
   printf("Martes\n");
   break;
case 3:
   printf("Miercoles\n");
   break;
case 4:
   printf("Jueves\n");
   break;
case 5:
   printf("Viernes\n");
   break;
case 6:
   printf("Sabado\n");
   break;
case 7:
   printf("Domingo\n");
   break;
default:
   printf("Número inválido. Debe estar entre 1 y 7.\n");
  }
return 0;

}

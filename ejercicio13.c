#include <stdio.h>
#include <math.h>

int main()
{
  int opcion;
  float base, altura, area;
  float base_mayor, base_menor;

  printf("=================================\n");
  printf("         CALCULO DE AREAS\n");
  printf("=================================\n");
  printf("1 - Calcular el área de un triángulo\n");
  printf("2 - Calcular el área de un trapecio\n");
  printf("3 - Calcular el área de un rectángulo\n");
  printf("=================================\n");

  printf("Seleccione una opción (1-3): ");
  scanf("%d", &opcion);

  switch (opcion)
   {
     case 1:
        printf("\nIngrese la base del triángulo: ");
        scanf("%f", &base);
        printf("\nIngres la altura del tiángulo: ");
        scanf("%f", &altura);
        area = (base * altura) / 2;
        printf("El área del triángulo es: %.2f\n", area);
        break;

     case 2;
        printf("\nIngrese la base mayor del trapecio: ");
        scanf("%f", &base_mayor);
        printf("\nIngrese la bale menor del trapecio: ");
        scanf("%f", &base_menor);
        printf("\nIngrese la altura del trapecio: ");
        scanf("%f", &altura);
        area = (base_mayor + base_menor) * altura) / 2;
        printf("El área del trapecio es: %.2f\n", area);
        break;

     case 3;
        printf("\nIngrese la base del rectángulo: ");
        scanf("%f", &base);
        printf("\Ingrese la altura del rectángulo: ");
        scanf("%f", &altura);
        area = base * altura;
        printf("El área del rectángulo es: %2.f\n", area);
        break;

default:
    printf("\nOpció no válida. Por favor, seleccione entre 1 y 3.\n");
   }

return 0;

}

          

  
        
       

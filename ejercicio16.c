#include <stdio.h>

int main()
{
  float x1, y1, x2, y2;
  float m;

  printf("Ingrese las coordenadas del pirmer punto (x1 y1): ");
  scanf("%f %f", &x1, &y1);

  printf("Ingrese las coordenadas del segundo punto (x2 y2): ");
  scanf("%f %f", &x2, &y2);

if (x2 == x1)
   {
    printf("La pendiente no está definida (La recta es vertical).\n");
   }
else
   {
    m = (y2 - y1) / (x2 - x1);
    printf("La pendiente de la recta es: %.2f\n", m);
   }
return 0;
}

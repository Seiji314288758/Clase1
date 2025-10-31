/*Victor Seiji Nieto Morita
clase 2 ejercicio 5*/

#include <stdio.h>

int main()
{
  const float PRECIO_ENTRADA = 7.0; // Precio base de la entrada
  int edad;
  float precio_final;

  printf("Ingresa tu edad: ");
  scanf("%d", &edad);

  if (edad < 5)
  {
   precio_final = PRECIO_ENTRADA * 0.40;  // 60% de descuento → paga el 40%
  }
  else if (edad > 60)
  {
   precio_final = PRECIO_ENTRADA * 0.45; // 55% de descuento → paga el 45%
  }
  else 
  {
   precio_final = PRECIO_ENTRADA; // Sin descuento
  }

  printf("El precio de su entrada es: %.2f Euros\n", precio_final);

  return 0;
}

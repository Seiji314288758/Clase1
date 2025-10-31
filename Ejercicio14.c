/*Victor Seiji Nieto Morita
clase 1 ejercicio 14*/

#include <stdio.h>

int main ()
{
  float horas, pago_hora, salario;

  printf("Ingrese las horas trabajadas en la semana: ");
  scanf("%f", &horas);

  printf("Ingrese el pago por hora: ");
  scanf("%f", &pago_hora);

  if (horas <= 40)
   {
    salario = horas * pago_hora;
   }
  else
    if (horas <= 50)
    {
     salario = (40 * pago_hora) + ((horas - 40) * pago_hora * 1.5);
    }
else 
    {
     salario = (40 * pago_hora) + (10 * pago_hora * 1.5) + ((horas - 50) * pago_hora * 2);
    }
printf("\nEl salario semanal es: %.2f\n", salario);

return 0;

}

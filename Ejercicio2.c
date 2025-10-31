/*Victor Seiji Nieto Morita
clase 2 ejercicio 2*/

#include <stdio.h>
#include <math.h>

void main()
{
  int num1, num2, res;

  printf("Escribe el primer numero: \n");
  scanf("%d", &num1);
  printf("Escribe el segundo numero: \n");
  scanf("%d", &num2);

  res = num1 % num2;

 if(res == 0)
{
printf("El numero es divisible  \n");
}
else
{
  printf("El numero no es divisible \n");
}

}

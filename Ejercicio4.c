/*Victor Seiji Nieto Morita
clase 1 ejercicio 4*/


#include <stdio.h>

int main()

{
    int num1, num2;

    printf("Eescribe el primer numero entero: ");
    scanf("%d", &num1);

    printf("Escribe el segundo numero entero: ");
    scanf("%d", &num2);

    if(num1 > num2) 
    {
       printf("El primer numero (%d) es mayor que el segundo (%d).\n", num1, num2);
    } 
    else if (num2 > num1)
    {
       printf("El segundo numero (%d) es mayor que el primero (%d).\n", num2, num1);
    }
    else 
    {
       printf("Ambos numeros son iguales (%d). \n", num1);
    }

    return 0;
}

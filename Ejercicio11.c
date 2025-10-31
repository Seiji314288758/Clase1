/*Victor Seiji Nieto Morita
clase 1 ejercicio 11*/

#include <stdio.h>

int main ()

{
  char letra;

  printf("Ingrese una letra: ");
  scanf( "%c", &letra);

  switch (letra)
  {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':

  printf("Es una vocal.\n");
  break;
    default:
  printf("No es una vocal.\n");
  }

return 0;

}


#include <stdio.h>

int main ()

{
  char letra;

  printf("Ingrese una letra: ");
  scanf(" %c", &letra);

  if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'  || 
      letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
    {
     printf("Es una vocal.\n");
    }

   else 
   {
    printf("No es una vocal.\n");
   }

return 0;
}

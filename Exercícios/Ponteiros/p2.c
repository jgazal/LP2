/*2. Qual o valor de y no final do programa? Escreva um   /comentário/ em cada
comando de atribuição explicando o que ele faz e o valor da variável à esquerda
do '=' após sua execução.

int main(){
  int y, *p, x;
  y = 0;
  p = &y;
  x = *p;
  x = 4;
  (*p)++;
  x--;
  *p = --x;
  printf ("y = %d\n", y);
  return(0);
}*/

#include<stdio.h>

int main()
{
    int y, *p, x;

    y = 0;
    p = &y;    /*Atribui ao ponteiro p o endereço da variável y.
                O conteúdo apontado por p é 0. */

    x = *p;   /*x recebe o conteúdo do ponteiro p, que está apontando para y e
                vale 0. */

    x = 4;    //x recebe 4

    (*p)++;   /*O conteúdo apontado por p é incrementado. Como p aponta para y,
                e y vale 0, então y passa a valer 1. */

    x--;         //x é decrementado, passando a valer 3.

    *p = --x;   /*Atribui um novo valor à variável apontada por p. Como p aponta
                  para y, então y recebe o decremento de x. Como x vale 3, sendo
                  decrementado passa a valer 2. Então o novo valor de y é 2.*/
                  
    printf ("y = %d\n", y); //O valor impresso no final será y=2

    return(0);
}

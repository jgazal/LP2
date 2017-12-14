/*1. Procure determinar quais valores são impressos ao final deste programa.
Confira sua resposta testando o programa no micro. Execute-o passo a passo
conferindo o valor das variáveis em cada momento.

a) void main()
{
  int a,b,*c;
  a = 3;
  b = 4;
  c = &a;
  b++;
  *c = a+2;
  printf("%d %d",a,b);
}*/

#include<stdio.h>

void main()
{
  int a,b,*c;

  a = 3;
  b = 4;
  c = &a;   /*Atribui ao ponteiro c o endereço da variável a.
              O conteúdo apontado por c é 3. */

  b++;      //b é incrementado, passando a valer 5.
  
  *c = a+2; /*Atribui um novo valor à posição de memória apontada por c, que no
            caso é a variável a (que vale 3) mais 2, resultando em a = 5. */

  printf("%d %d\n", a, b);  //O valor impresso no final será: 5 5
}

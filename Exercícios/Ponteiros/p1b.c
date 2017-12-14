/*1. Procure determinar quais valores são impressos ao final deste programa.
Confira sua resposta testando o programa no micro. Execute-o passo a passo
conferindo o valor das variáveis em cada momento.

b) void main()
{
  int a,b,*c;
  a = 4;
  b = 3;
  c = &a;
  *c = *c +1;
  c = &b;
  b = b+4;
  printf("%d %d %d",a,b,*c);
}*/

#include<stdio.h>

void main()
{
  int a,b,*c;

  a = 4;
  b = 3;
  c = &a;       /*Atribui ao ponteiro c o endereço da variável a.
                  O conteúdo apontado por c é 4. */

  *c = *c +1;   /*Atribui um novo valor à posição de memória apontada por c, que
                  no caso é o conteúdo apontado por c (que é o conteúdo de a,
                  que vale 4) mais 1, resultando em a = 5. */

  c = &b;       /*Atribui ao ponteiro c o endereço da variável b.
                  O conteúdo apontado por c é 3. */

  b = b+4;      //b é igual a ele mesmo mais 4, resultando em 3+4 = 7.

                /*Como o ponteiro c estava apontando para b, o conteúdo apontado
                  por c agora passa a ser 7. */

  printf("%d %d %d\n", a, b, *c); //O valor impresso no final será: 5 7 7
}

/*1. Procure determinar quais valores são impressos ao final deste programa.
Confira sua resposta testando o programa no micro. Execute-o passo a passo
conferindo o valor das variáveis em cada momento.

c)
int calcula(int);
void main()
{
  int a,b,c;
  char d;
  a=1;b=2;c=3;d='A';
  a+=b*c;
  d=(a>7)?d-1:d+1;
  b = calcula(b);
  c = calcula(calcula(a));
  a = c++;
  printf("%d - %d - %d - %c\n",a,b,c,d);
}
int calcula(int x)
{
  int i;
  if ((x=x*2)>5) return(x+3);
  for(i=0;i<10;i++)
  {
    if (i<5) continue;
    if (x>8) break;
    x+=2;
  }
return(x);
}*/

#include<stdio.h>

int calcula(int);

void main()
{
  int a,b,c;
  char d;

  a=1; b=2; c=3; d='A';
  a+=b*c;               //a=a + b*c => a=1+(2*3) => a=7;

  d=(a>7)?d-1:d+1;      /*Como a não é maior do que 7, entao d=d+1, que passa
                          a ser então A+1. d='B'. */

  b = calcula(b);       /*b é igual o valor da função "calcula". b, que vale
                          2, está sendo passado como parâmetro para a função.
                          No final o valor de b será igual a 10. */

  c = calcula(calcula(a)); /*Primeiro a é passado como parâmetro para a função
                             "calcula" e depois o retorno da função é passado
                              novamente como parâmetro. Nesse primeiro momento o
                              valor retornado será 9, que será passado como
                              parâmetro para a função. o valor de c será esse
                              o valor desse último retorno, que é igual a 21 (38?). */

  a = c++;                 /*a é igual o incremento de c, como c vale 21 (38?)
                             a=22. */

  printf("%d - %d - %d - %c\n",a,b,c,d); //O valor impresso no final será: 37 - 10 - 38 - B
}

int calcula(int x)
{
  int i;

  if ((x=x*2)>5) return(x+3); /*Para b, como x=2*2 é 4, então é menor que 5 e
                                sai desse laço.
                                Para c, no primeiro momento quando a é passado
                                como parâmetro, como x=1*2 é 2, então é menor
                                que 5 e sai desse laço.
                                Para c, no segundo momento, o valor passado como
                                parâmetro agora é 9. x=9*2 = 18, que é maior
                                do que 5, então retorna 18+3 = 21. */

  for(i=0;i<10;i++)
  {
    if (i<5) continue;
    if (x>8) break;
    x+=2;                     /*O valor de x é incrementado em 2 até o
                                contador i ser menor que 5. Se o valor de x for
                                meior que 8 então o laço pára.
                                Para b:
                                1º laço: x=2+2 = 4
                                2º laço: x=4+2 = 6
                                3º laço: x=6+2 = 8
                                4º laço: x=8+2 = 10
                                Atingiu a contagem de laços e o valor de x foi
                                maior do que 8.

                                Para c, no primeiro momento:
                                1ª laço: x=1+2 = 3
                                2º laço: x=3+2 = 5
                                3º laço: x=5+2 = 7
                                4º laço: x=7+2 = 9 */
  }
  return(x);                  /*Para b, o valor retornado será 10.
                                Para c, no primeiro momento, retorna 9.
                                Para c, no segundo momento, retorna 21. */
}

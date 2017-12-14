//4. Qual serão as saídas do seguinte programa?

#include <stdio.h>

int main()
{
    int valor;
    int *p1;
    int idade;
    int *p4;
    int **p5;      //p5 é um ponteiro para ponteiro inteiro

    //(a)
    valor = 10;    //Variável inteira "valor" recebe 10.

    p1 = &valor;   /*Atribui ao ponteiro p1 o endereço da variável "valor".
                     O conteúdo apontado por p1 é 10. */

    *p1 = 20;      /*Atribui um novo valor à posição de memória apontada por p1,
                  que no caso é a variável "valor". valor = 20. */

    printf("%d \n", valor);   //O valor impresso será: 20

    //(b)
    *p1--;                /*O endereço apontado por p1, que é "valor" será
                           decrementado*/

    valor = valor + 5;    /*A variável "valor" recebe ele mesmo mais 5.
                            valor = 25 */

    printf("%d \n", *p1);   //O endereço apontado por p1 tem valor 0.

    //(c)
    p4 = &idade;       //Atribui ao ponteiro p4 o endereço da variável "idade".

    idade = *p1;      //"idade" recebe o valor do endereço apontado por p1.

    printf("%d \n", idade);   /*O valor que "idade" recebeu do endereço apontado
                               por p1 é 0. */

    //(d)
    p5 = &p4;   /*O ponteiro p5 aponta para o endereço apontado pelo ponteiro p4,
                  que é o endereço de "idade".
                  Como p5 é um ponteiro para ponteiro, isso significa que podemos
                  acessar o seu conteúdo duas vezes. Seu conteúdo (*p5) é um
                  endereço. Assim, o comando **p5 acessa o conteúdo do endereço
                  do endereço apontado por p4.*/

    **p5 = *p4 + 1; /*O ponteiro p5 aponta para o endereço apontado pelo ponteiro
                      p4, atribuindo um novo valor à posição de memória apontada,
                      somando 1. Como o valor que está sendo apontado é o da
                      variável "idade", que é zero, somando 1 idade passa a
                      valer 1. */

    printf("%d \n", idade);   //O valor impresso será: 1

    return(0);
}

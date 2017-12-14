/*4.2 - Elabore um módulo que retorne o reverso de um número inteiro.
Ex: 932 -> 239 */

#include<stdio.h>
#include<math.h>

int reverso(int x)
{
    int rev;

    rev = 0;

    do
    {
      rev = x%10;
      printf("%d", rev);
      x = x/10;
    } while(x!=0);
    printf("\n");

    return rev;
}

int main()
{
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);
    reverso(n);
}

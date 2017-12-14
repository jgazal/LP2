 /*4.1 - Construa um módulo que calcule a quantidade de dígitos de determinado
         número inteiro.
OBS: Compilar: gcc ex41.c -o ex41 -lm */

#include<stdio.h>
#include<math.h>

int qtd_digitos(int x)
{
    int i;

    i = 0;

    do
    {
      i = i+1;
      x = x/10;
    } while(x != 0);

    return i;
}

int main()
{
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);
    printf("Dígitos: %d\n", qtd_digitos(n));
}

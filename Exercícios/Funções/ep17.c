/*Construa um algoritmo que calcule o somatório dos n primeiros termos da série
de Fibonacci (1, 1, 2, 3, 5,...).*/

#include<stdio.h>

int fibonnaci(int n)
{
    int a=1, b=1, soma=0, aux=0, i;
    for(i=3; i<=n; i++)
    {
        aux = a+b;
        a = b;
        b = aux;
        soma = soma + aux;
    }
    return soma+2;
}

int main()
{
    int t;

    printf("Informe até qual termo se deseja somar: ");
    scanf("%d", &t);
    printf("%d\n", fibonnaci(t));
}

/*6. Faça uma função recursiva que receba um número inteiro positivo par N e
imprima todos os números pares de 0 até N em ordem decrescente*/

#include<stdio.h>

int par(int n)
{
	if(n<0)
    {
        return 0;
	}

    if(n%2==0)
    {
        printf("%d\t", n);
    }

    par(n-1);
}

int main()
{
    int n, i;

    printf("Digite um número inteiro positivo par: ");
    scanf("%d", &n);
    printf("Números pares de 0 até N (Ordem Decrescente): \n");
    par(n);
    printf("\n");
}

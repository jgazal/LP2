/*5. Faça uma função recursiva que receba um número inteiro positivo par N e
imprima todos os números pares de 0 até N em ordem crescente.*/

#include<stdio.h>

int par(int n)
{
	if(n<0)
    {
        return 0;
		}

    par(n-1);

    if(n%2==0)
    {
        printf("%d\t", n);
    }
}

int main()
{
    int n, i;

    printf("Digite um número inteiro positivo par: ");
    scanf("%d", &n);
    printf("Números pares de 0 até N (Ordem Crescente): \n");
    par(n);
    printf("\n");
}

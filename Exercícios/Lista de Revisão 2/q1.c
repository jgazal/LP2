//1. Faça uma função recursiva que calcule a soma dos 100 primeiros números ímpares.

#include<stdio.h>

int somaImpares(int n)
{
    if(n<=0)
    {
        return 0;
    }
    else
    {
        return (2*n-1) + somaImpares(n-1);
    }
}

int main()
{
    int N=100;

    printf("Soma dos 100 primeiros números ímpares: %d\n", somaImpares(N));

    return 0;
}

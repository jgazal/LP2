//LP2 - Aula 04/10/2017 - Funções

#include<stdio.h>

void imprime(int n, char c)
{
    int i;

    for(i=0; i<n; i++)
    {
        printf("%c", c);
    }
    printf("\n");
}

int main()
{
    imprime(3, '+');
    imprime(5, '+');
    imprime(7, '=');
    imprime(5, '+');
    imprime(3, '+');
}


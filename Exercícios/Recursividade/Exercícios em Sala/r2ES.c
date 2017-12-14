//2) Implementar em C um algoritmo para imprimir recursivamente o vetor de inteiros de 10 posições.

#include<stdio.h>

int v[10];

void imprimeV(int i)
{
    if(i<10)
    {
        printf("%d", v[i++]);
        imprimeV(i);
    }
}

int main()
{
    imprimeV(0);
    
    return 0;
}

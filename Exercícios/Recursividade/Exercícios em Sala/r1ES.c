//1) Implementar em C um algoritmo para preencher recursivamente um vetor de inteiros de 10 posições com o valor 1.

#include<stdio.h>

int v[10];

void preencheV(int i)
{
    if(i<10)
    {
        v[i++] = 1;
        preencheV(i);
    }
}

int main()
{
    preencheV(0);
    
    return 0;
}

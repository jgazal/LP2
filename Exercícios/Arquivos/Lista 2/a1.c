/* 1. Faça um programa em C que recebe um vetor de n números, converta cada um
desses números para binário e grave a sequência de 0s e 1s em um arquivo texto.
Cada número deve ser gravado em uma linha */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, c=0, i, j;
    int bin[50];

    FILE*arq;
    arq = fopen("convDecBin.txt", "w");

    if(arq==NULL)
    {
        printf("Problema na criação do arquivo.\n");
        exit(1);
    }

    printf("Tamanho do vetor: ");
    scanf("%d", &n);
    int v[n];

    printf("Elementos do vetor: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &v[i]);
    }

    for(i=0; i<n; i++)
    {
        while(v[i] > 0)
        {
            bin[c] = v[i]%2;
            c++;
            v[i] = v[i]/2;
        }
    }
    for(j=c-1; j>=0; j--)
    {
        fprintf(arq, "%d", bin[j]);
    }

    fclose(arq);
}

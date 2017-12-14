/* Construa um algoritmo modularizado que, a partir de um vetor de 100 inteiros,
possibilite:
    a) a digitação dos valores no vetor;
    b) imprimir o valor do somatório de seus itens;
    c) imprimir a média dos valores fornecidos;
    d) calcular o desvio-padrão;
    e) substituir por zero todos os valores negativos;
    f) substituir por zero todos os valores repetidos (maiores que zero); */

#include<stdio.h>
#include<math.h>

void valoresVetor(int v[], int n)
{
    int i, j, soma=0;
    float media, desvio_padrao, quad_dist=0, dp;

    printf("Elementos do vetor: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &v[i]);
        soma = soma + v[i];
    }
    media = soma/4;

    for(i=0; i<n; i++)
    {
        quad_dist = quad_dist + pow(v[i] - media, 2);
    }
    dp = sqrt(quad_dist/4);

    printf("Soma: %d\n", soma);
    printf("Média: %.1f\n", media);
    printf("Desvio-padrão: %.2f\n", dp);
    printf("Substituição de valores negativos por 0: \n");
    for(i=0; i<n; i++)
    {
        if(v[i] < 0)
        {
          v[i] = 0;
        }
        printf("%d\n", v[i]);
    }
    printf("Substituição de valores maiores que zero repetidos: \n");
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if((v[j] == v[i]) && v[i]>0)
            {
                v[i] = 0;
                v[j] = 0;
            }
        }
        printf("%d\n", v[i]);
    }
}

int main()
{
    int v[100];

    valoresVetor(v, 100);
}

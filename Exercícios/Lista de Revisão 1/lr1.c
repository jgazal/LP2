/*1. Escrever um procedimento que receba como parâmetro um vetor V e seu
tamanho N e troque, a seguir, o 1o elemento com o último, o 2o com o
penúltimo, etc e escreva o vetor V assim modificado.*/

#include<stdio.h>

int trocaElementos(int v[], int n)
{
      int i, aux;

      printf("Ordenação dos elementos do vetor: \n");
      for(i=0; i<(n/2); i++)
      {
          aux = v[i];
          v[i] = v[(n-1)-i];
          v[(n-1)-i] = aux;
      }

      for(i=0; i<n; i++)
      {
          printf("v[%d] = %d\n", i, v[i]);
      }
}

int main()
{
    int N, i;

    printf("Tamanho do vetor: ");
    scanf("%d", &N);
    int v[N];

    printf("Elementos do vetor: \n");
    for(i=0; i<N; i++)
    {
        scanf("%d", &v[i]);
    }

    printf("%d\n", trocaElementos(v, N));

    return 0;
}

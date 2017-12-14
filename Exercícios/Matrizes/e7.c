//Faça um algoritmo que receba duas matrizes A[6][6] e B[6][6] e imprima uma matriz C, que seja a diferença de M com N.

#include<stdio.h>

int main()
{
    int A[2][2], B[2][2], C[2][2], i, j;
  
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &A[i][j]);
            printf("A[%d][%d] = %d\n", i, j, A[i][j]);
            scanf("%d", &B[i][j]);
            printf("B[%d][%d] = %d\n", i, j, B[i][j]);
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    printf("\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("C[%d][%d] = %d\n", i, j, C[i][j]);
        }
    }

    return 0;
}

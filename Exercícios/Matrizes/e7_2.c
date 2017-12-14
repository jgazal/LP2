//Faça um algoritmo que receba duas matrizes A[6][6] e B[6][6] e imprima uma matriz C, que seja a diferença de M com N.

#include<stdio.h>

int main()
{
    int i, j, o;

    printf("Matriz A e B de ordem: ");
    scanf("%d", &o);

    int A[o][o], B[o][o], C[o][o];

    printf("Matriz A: \n");
    for(i=0; i<o; i++)
    {
        for(j=0; j<o; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Matriz B: \n");
    for(i=0; i<o; i++)
    {
        for(j=0; j<o; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    printf("Matriz C: \n");
    for(i=0; i<o; i++)
    {
        for(j=0; j<o; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
            printf("C[%d][%d] = %d\n", i, j, C[i][j]);
        }
    }

    return 0;
}

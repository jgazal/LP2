//Faça um algoritmo que recebe uma matriz A[6][6] e imprima a soma dos elementos da sua diagonal principal e da sua diagonal secundária.

#include<stdio.h>

int main()
{
    int i, j, o, somaDP=0, somaDS=0;

    printf("Matriz de ordem: ");
    scanf("%d", &o);

    int A[o][o];

    for(i=0; i<o; i++)
    {
        for(j=0; j<o; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }   
    printf("Soma dos elementos da DP: \n");
    for(i=0; i<o; i++)
    {
        for(j=0; j<o; j++)
        {
            if(i==j)
            {
                somaDP = somaDP + A[i][j];
            }
        }
    }
    printf("%d\n", somaDP);
    printf("Soma dos elementos da DS: \n");
    for(i=0; i<o; i++)
    {
        for(j=0; j<o; j++)
        {
            if(i+j == o-1)
            {
                somaDS = somaDS + A[i][j];
            }
        }
    }
    printf("%d\n", somaDS);

    return 0;
}

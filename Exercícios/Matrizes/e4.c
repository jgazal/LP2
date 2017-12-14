//Faça um algoritmo que recebe uma matriz A[6][6] e imprima o menor elemento da sua diagonal secundária.

#include<stdio.h>

int main()
{
    int A[6][6], i, j, menor;

    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            scanf("%d", &A[i][j]);

            if(i + j == 6 - 1)
            {
                if(A[i][j] < menor)
                {
                    menor = A[i][j];
                }               
            }  
        } 
    }

    printf("Menor = %d\n", menor);

    return 0;
}

//Faça um algoritmo que recebe uma matriz A[6][6] e imprima a soma dos elementos da sua diagonal principal e da sua diagonal secundária.

#include<stdio.h>

int main()
{
    int A[6][6], soma1=0, soma2=0, i, j;

    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            scanf("%d", &A[i][j]);  
        } 
    }
    for(i=0; i<6; i++) 
    {
        for(j=0; j<6; j++)  
        {
            if(i==j)
            {
                soma1 = soma1 + A[i][j];
            }
            else
                //if(i + 1 == 6 - (j+1) + 1)
                if(i + j == 6 - 1)
                {
                    soma2 = soma2 + A[i][j];
                }  
        }
    }  
    printf("Soma Diagonal Principal = %d\n", soma1);
    printf("Soma Diagonal Secundária = %d\n", soma2);

    return 0;
}

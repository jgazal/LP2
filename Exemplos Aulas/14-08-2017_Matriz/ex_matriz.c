//Codifique um programa para ler uma matriz quadrada de ordem n e exibir apenas os elementos da diagonal principal.

#include<stdio.h>

int main()
{
    int A[3][3], i, j;

    for(i=0; i<3; i++) //Preenche a linha, trava a coluna
    {
        for(j=0; j<3; j++)  //Anda as colunas
        {
            scanf("%d", &A[i][j]);   
        }
    }  
    for(i=0; i<3; i++) 
    {
        for(j=0; j<3; j++)  
        {
            if(i==j)
            {
                printf("A[%d][%d] = %d\n", i, j, A[i][j]);
            }  
        }
    }   

    return 0;
}

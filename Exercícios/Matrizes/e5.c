//Faça um algoritmo que recebe uma matriz A[8][8] e calcula o maior elemento da sua diagonal principal. A seguir, a algoritmo deve dividir todos os elementos de A pelo maior encontrado. O algoritmo deve imprima a matriz alterada.

#include<stdio.h>

int main()
{
    int i, j, maior=0;
    float A[8][8];

    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            scanf("%f", &A[i][j]);

            if(i==j)
            {
                if(A[i][j] > maior)
                {
                    maior = A[i][j];
                }
            }     
        } 
    }
    printf("Maior elemento da diagonal princial: %d\n", maior);
    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            printf("A[%d][%d] = %.2f\n", i, j, A[i][j]/maior);
        }
    } 

    return 0;
}

//Faça um algoritmo que recebe uma matriz A[8][8] e calcula o maior elemento da sua diagonal principal. A seguir, a algoritmo deve dividir todos os elementos de A pelo maior encontrado. O algoritmo deve imprima a matriz alterada.

#include<stdio.h>

int main()
{
    int i, j, o, maior;

    printf("Matriz de ordem: ");
    scanf("%d", &o);

    float A[o][o];

    for(i=0; i<o; i++)
    {
        for(j=0; j<o; j++)
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
    printf("Maior elemento da DP = %d\n", maior);   
    for(i=0; i<o; i++)
    {
        for(j=0; j<o; j++)
        {
            printf("A[%d][%d] = %.4f\n", i, j, A[i][j]/maior);       
        }
    }
    
    return 0;
}

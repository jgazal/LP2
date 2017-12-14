//Faça um algoritmo que recebe uma matriz A[6][6] e imprima o menor elemento da sua diagonal secundária.

#include<stdio.h>

int main()
{
    int i, j, o, menor;

    printf("Matriz de ordem: ");
    scanf("%d", &o);

    int A[o][o];

    for(i=0; i<o; i++)
    {
        for(j=0; j<o; j++)
        {
            scanf("%d", &A[i][j]);
        
            if(i+j==o-1)
            {   
                if(A[i][j] < menor)
                {
                    menor = A[i][j];
                }
            } 
        }
    }   
 
    printf("Menor elemento da diagonal secundária: %d\n", menor);
    
    return 0;
}

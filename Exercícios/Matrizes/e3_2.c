//Faça um algoritmo que recebe uma matriz A[7][6] e imprima a soma dos elementos da linha 5 e da coluna 3.

#include<stdio.h>

int main()
{
    int i, j, L, C, soma=0, somaL5=0, somaC3=0;

    printf("Matriz: \n");
    printf("Linhas: ");
    scanf("%d", &L);
    printf("Colunas: ");
    scanf("%d", &C);
    
    int A[L][C];

    for(i=0; i<L; i++)
    {
        for(j=0; j<C; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for(i=0, j=0; i<L, j<C; i++, j++)
    {
        somaL5 = somaL5 + A[5][j];
        somaC3 = somaC3 + A[i][3];
        soma = somaL5 + somaC3;  
    }

    printf("Soma dos elementos da Linha 5: %d\n", somaL5);
    printf("Soma dos elementos da Coluna 3: %d\n", somaC3);
    printf("Soma dos elementos da Linha 5 e Coluna 3: %d\n", soma);

    return 0;
}

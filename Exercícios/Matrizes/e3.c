//Faça um algoritmo que recebe uma matriz A[7][6] e imprima a soma dos elementos da linha 5 e da coluna 3.

#include <stdio.h>

int main()
{
	int A[7][6], i, j, somaL=0, somaC=0, soma=0;

	for(i=0; i<7; i++)
	{
		for(j=0; j<6; j++)
		{
			printf("linha %d, coluna %d: ",i, j);
			scanf("%d", &A[i][j]);
		}
	}
	for(i=0, j=0;i<7, j<6; i++, j++)
	{
        somaL = somaL + A[5][j];
		somaC = somaC + A[i][3];
	}
	soma = somaL + somaC;

    printf("\n");
    printf("Soma dos elementos da linha 5: %d\n", somaL );
    printf("Soma dos elementos da coluna 3: %d\n", somaC);
    printf("Soma dos elementos da linha 5 e da coluna 3: %d\n", soma);

    return 0;
}

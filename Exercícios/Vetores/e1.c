//Faça um programa que preencha todas as casas de um vetor com o valor 0 (zero).

#include<stdio.h>

int main()
{
    int v[10], i;
	
	for(i=0; i<=9; i++)
	{
        v[i] = 0;
        printf("v[%d] = %d\n", i, v[i]);  	
	}

	return 0;
}

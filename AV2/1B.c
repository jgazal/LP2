/*1B - Faça uma função recursiva que receba um vetor de 100 posições e retorne o
somatório dos elementos ímpares do vetor. */

#include<stdio.h>

int somaImpares(int *V, int i)
{
    if(V[i]<0)
    {
        return 0;
    }
    else
    {
		    if(V[i]%2!=0)
		    {
			      return V[i] + somaImpares(V, --i);
		    }
		    else
		    {
			      return somaImpares(V, --i);
		    }
    }
}

int main()
{
	int x;
	int N[100];

	for(x=0; x<100; x++)
	{
		N[x] = x+1;
	}

    printf("Soma dos números ímpares do vetor: %d\n", somaImpares(N, 99));

    return 0;
}

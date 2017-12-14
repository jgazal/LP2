/* 4. Crie um programa em C que receba um vetor de números reais com 100 elementos. Escreva uma função recursiva que inverta ordem dos elementos presentes no vetor. */

#include <stdio.h>

void inverter(int v[], int posicao) 
{
    if(posicao<100/2) 
    {
        int aux = v[posicao];
        int nova_posicao = 100-posicao-1;

        v[posicao] = v[nova_posicao];
        v[nova_posicao] = aux;
        inverter(v, posicao+1);
    }
}

int main() 
{
    int v[100];

    printf("Elementos do vetor: \n");
    for(int i=0; i<100; i++)
    {
        scanf("%d", &v[i]);
    }
    inverter(v, 0);

    printf("Ordem inversa dos elementos do vetor: \n");
    for(int i=0; i<100; i++) 
    {
        printf("%d\t", v[i]);
    }
    printf("\n");
    
    return 0;
}

/* Faça um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o último, o segundo elemento com o penúltimo, etc., até trocar o 10º com o 11º. Mostre o vetor modificado.

Entrada
A entrada contém 20 valores inteiros, positivos ou negativos.

Saída
Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do vetor e Y é o valor armazenado naquela posição. */

#include<stdio.h>

int main()
{
    int N[20], i, j, aux;

    for(i=0; i<20; i++)
    {
        scanf("%d", &N[i]);
    }    
    for(i=0, j=19; i<10; i++, j--)
    {
        aux = N[i];
        N[i] = N[j];
        N[j] = aux;
    }  
    for(i=0; i<20; i++)
    {
        printf("N[%d] = %d\n", i, N[i]);
    } 

    return 0;
}

/*Implemente um programa que, ordene um vetor de tamanho N de forma decrescente,
modificando as rotinas:
a) InsertSort
b )SelectionSort
c) BubbleSort
obs. N é digitado pelo usuário, via entrada padrão (teclado). */

#include<stdio.h>

int main()
{
    int escolha, n, i, j, aux, Min;    

    printf("Tamanho do vetor: ");
    scanf("%d", &n);
    int v[n];

    printf("\nElementos do vetor: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &v[i]);
    }

    printf("\nEscolha o tipo de ordenação: \n");  
    printf("1- InsertSort\n");
    printf("2- SelectionSort\n");
    printf("3- BubbleSort\n");
    printf("Opção: ");
    scanf("%d", &escolha);
    printf("\n");

    switch(escolha)
    {
        case 1: 
            for (i=1; i<n; i++)
            {
                aux = v[i];
                j = i - 1;
            while ((j>=0) && (aux>v[j]))
            {
                v[j+1] = v[j];
                j--;
            }
            v[j+1] = aux;
            }
            for(i=0; i<n; i++)
            {
                printf("%d\t", v[i]);  
            }  
            printf("\n"); 
        break;

        case 2:
            for (i=0; i<n-1; i++)
            { 
                Min = i;
            for (j=i+1; j<n; j++)
            {
                if (v[j] > v[Min]) 
                {
                    Min = j;
                }   
            } 
            aux = v[Min];
            v[Min] = v[i];
            v[i] = aux;           
            }
            for(i=0; i<n; i++)
            {
                printf("%d\t", v[i]);  
            }  
            printf("\n");
        break;

        case 3:
            for(i=0; i<n-1; i++)
            {
                for(j=1; j<n-i; j++)
                {   
                    if (v[j] > v[j-1]) 
                    {
                        aux = v[j];
                        v[j] = v[j-1];
                        v[j-1] = aux;  
                    }            
                }
            }
            for(i=0; i<n; i++)
            {
                printf("%d\t", v[i]);  
            }  
            printf("\n");
        break;      
    }
    return 0;
}

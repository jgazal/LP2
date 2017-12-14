/*Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 100), correspondente a ordem de uma matriz M de inteiros, e construa a matriz de acordo com o exemplo abaixo.

Entrada
A entrada consiste de vários inteiros, um valor por linha, correspondentes as ordens das matrizes a serem construídas. O final da entrada é marcado por um valor de ordem igual a zero (0).

Saída
Para cada inteiro da entrada imprima a matriz correspondente, de acordo com o exemplo. Os valores das matrizes devem ser formatados em um campo de tamanho 3 justificados à direita e separados por espaço. Após o último caractere de cada linha da matriz não deve haver espaços em branco. Após a impressão de cada matriz deve ser deixada uma linha em branco.*/

#include <stdio.h>
int main()
{
    int a,b,c,g,h,i,j=1,N,p=0,q=0,r;

    while(1)
    {
        scanf("%d", &N);

        if(N==0) break;
        else
        {
            j=1;
            p=0;
            q=0;

            int ara[N][N];

            i=N;

            if(N%2==0)  //Par
            {
                r=N/2;
            } 
            else if(N%2==1) //Ímpar
            {
                r=(N/2)+1;
            }  
            for(c=1; c<=r; c++)
            {
                for(a=p; a<i; a++)
                {
                    for(b=q; b<i; b++)
                    {
                        ara[a][b]=j;
                    }        
                }
                j++;
                p++; 
                q++;
                i--;
            }
            for(g=0; g<N; g++)
            {
                for(h=0; h<N; h++)
                {
                    if(h==0)
                    {
                        printf("%3d",ara[g][h]);
                    }         
                    else 
                    {
                        printf(" %3d",ara[g][h]);
                    }   
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    return 0;
}

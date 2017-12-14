/*Pretende-se descobrir a quantidade de vezes as senhas são acessadas pelos usuários de uma determinada instituição. Para isso, desenvolva um programa que receba a quantidade de senhas a serem analisadas e leia em uma matriz as senhas, que são numéricas e inteiras, e a quantidade de vezes que ela é utilizada no mês. Após a leitura, que será aleatória para as senhas, deverá colocar em ordem crescente de utilização na matriz as senhas criando um ranking de utilização. Ex.

Posição     Senha      No de utilização.
10          1134            3
9           2345            5                                   */

#include <stdio.h>

int main(){

    int n, i, j, qtdJ=0;
    int min, x, y;
    int aux1=0, aux2=0;
    
    scanf("%d", &n);                                                                  
    int M[n][3];
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<3; j++)
        {
            if(j==0)
            {
                M[i][j] = n - qtdJ;
                qtdJ++;
            }
            else 
            { 
                scanf("%d", &M[i][j]);
            } 
        }        
    }
   
    for(x=0; x<n-1; x++)
    {
        min=x;
        for(y=x+1; y<n; y++)
        {
            if(M[y][2] < M[min][2])
            {
                min = y;
            }
        }
        aux1 = M[min][1];
        aux2 = M[min][2];
        M[min][1] = M[x][1];
        M[min][2] = M[x][2];
        M[x][1] = aux1;
        M[x][2] = aux2;   
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d     ", M[i][j]);
        }
        printf("\n");    
    }

    return 0;
}

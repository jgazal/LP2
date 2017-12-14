/*Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão acima da diagonal principal da matriz, conforme ilustrado abaixo (área verde).

Entrada
A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz. Seguem os 144 valores de ponto flutuante que compõem a matriz.

Saída
Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.*/

#include<stdio.h>

int main()
{
    float M[12][12], aux=0.0;
    int i, j, C, x, y, p=1;
    char O[2];

    scanf("%s", O);
    
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%f", &M[i][j]);
        }
    }  

    for(x=0; x<12; x++)
    {
        for(y=p; y<12; y++)
        {
            aux += M[x][y];     
        }
        p++; 
    } 
  
    if(O[0] == 'S')
    {
        printf("%.1f\n", aux);
    }
    else if(O[0] == 'M')
    {
        aux = aux/66.0;
        printf("%.1f\n", aux);
    }   

    return 0;
}

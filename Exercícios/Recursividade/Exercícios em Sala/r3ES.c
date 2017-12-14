/*3) Dada a implementação em portugol da função abaixo:
    função F(N : natural) : natural
    início
        se N < 4 então
            retorne 3 N
        senão
            retorne 2 * F(N - 4) + 5
        fim
Quais são os valores de F(3) e de F(7)?*/

#include<stdio.h>

int F(int N)
{
    if(N<4)
    {
        return 3*N;
    }
    else
    {
        return 2*F(N-4)+5;
    }
}

int main()
{
    printf("F(3) = %d\n", F(3));
    printf("F(7) = %d\n", F(7));   
}

/*  R:  F(3) = 9
        F(7) = 23 */

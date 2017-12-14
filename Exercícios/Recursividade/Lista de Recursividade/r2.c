/*2. Considere a função abaixo:
int X(int a)
{
    if ( a <= 0 )
    return 0;
    else
    return a + X(a-1);
}
O que essa função faz? */

#include<stdio.h>

int X(int a)
{
    if(a<=0)
    {
        return 0;
    }
    else
    {
        return a + X(a-1);
    }
}

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", X(n));
}

//R: Essa função calcula o somatório de 0 até n(a).

//1. Escreva uma função recursiva, potencia(x,y), que devolva x elevado a potência y.

#include<stdio.h>

int potencia(int x, int y)
{
    if(y==0)
    {
        return 1;
    }
    if(y==1)
    {
        return x;
    }
    return x*potencia(x, y-1);
}

int main()
{
    int b, e;

    printf("Base: ");
    scanf("%d", &b);
    printf("Expoente: ");
    scanf("%d", &e);
    printf("Potência: %d^%d = %d\n", b, e, potencia(b, e));
}

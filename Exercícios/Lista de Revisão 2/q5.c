/*5. Escreva uma função recursiva que faça o seguinte: leia um número; se o
número for negativo, a função pára; caso contrário, a função imprime o número e
faz uma chamada recursiva a si mesma.*/

#include<stdio.h>
#include<stdlib.h>

int leNumero(int n)
{
    if(n<0)
    {
        exit(1);
    }
    else
    {
        return n;
    }
    return leNumero(n);
}

int main()
{
    int N;

    printf("Número: ");
    scanf("%d", &N);

    printf("Número: %d\n", leNumero(N));

    return 0;
}

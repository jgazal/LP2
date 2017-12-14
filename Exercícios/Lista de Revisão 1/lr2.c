/*2. Qual o valor de X(4)? Apresentar todas as chamadas recursivas e seus
retornos via comentário.

int X(int n) {
    if (n == 1 || n == 2) return n;
    else return X(n-1) + n * X(n-2);
} */

#include<stdio.h>

int X(int n)
{
    if (n == 1 || n == 2)   //Se n for igual a 1 ou 2 retorna ele mesmo.
    {
        return n;
    }
    else                 
    {
        return X(n-1) + n*X(n-2); // n=1  X(1) = 1
                                  // n=2  X(2) = 2
                                  // n=3  X(3) = 2+3*X(3-2) = 2+3*1 = 5
                                  // n=4  X(4) = 5+4*(4-2) = 5+4*2 = 13
    }
}

int main()
{
    int N;

    printf("Valor de n: ");
    scanf("%d", &n);
    printf("X(%d) =  %d\n", n, X(n));  //Para N=4 o valor de X é 13.

    return 0;
}

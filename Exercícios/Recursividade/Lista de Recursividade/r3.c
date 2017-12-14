/* 3. Seja a série de Fibonacci:
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
que pode ser definida recursivamente por:
    Fib(n) = {1                     se n=1 v n=2
             {Fib(n-1 + Fib(n-2)    se n>2
Então escreva uma função recursiva que gere o termo de ordem n da série de Fibonacci. */

#include<stdio.h>

int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return (fibonacci(n-1) + fibonacci(n-2));
}

int main()
{
    int n, i;

    printf("Termo de ordem n da série de Fibonacci: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("%d\t", fibonacci(i+1));
    }
    printf("\n");
}

//Exercício - 09/10/2017
//Fazer um programa que solicite ao usuário dois números e apresente
//na tela o resultado da sua soma e do dobro de cada um deles.
//Utilize uma função para calcular a soma e outra para o dobro.

#include<stdio.h>

int soma(int a, int b)
{
    return a+b; 
}

int dobro(int x)
{
    return 2*x;
}

int main()
{
    int n1, n2, total;

    printf("Informe dois números: ");
    scanf("%d %d", &n1, &n2);
    total = soma(n1, n2);
    printf("%d + %d = %d\n", n1, n2, total);
    printf("2 x %d = %d e 2 x %d = %d\n", n1, dobro(n1), n2, dobro(n2));
}

//Exercício - 09/10/2017
//Fazer um programa que solicite ao usuário dois números e apresente
//na tela o resultado da sua soma e do dobro de cada um deles.
//Utilize uma função para calcular a soma e outra para o dobro.

#include<stdio.h>

void soma(int a, int b)
{
    int soma;

    soma = a + b;
    printf("\nSoma: %d\n", soma);    
}

void dobro(int a, int b)
{
    int d1, d2;    

    d1 = 2*a;
    d2 = 2*b; 
    printf("\nDobro do número 1: %d\n", d1);
    printf("Dobro do número 2: %d\n", d2);
}

int main()
{
    int a, b;

    printf("Digite dois números: \n");
    printf("Número 1: ");
    scanf("%d", &a);
    printf("Número 2: ");
    scanf("%d", &b);
    soma(a, b);
    dobro(a, b);
}

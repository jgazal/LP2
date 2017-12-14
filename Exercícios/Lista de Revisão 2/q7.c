/*7. Determine o que a seguinte função recursiva em C calcula.
int func(int n) {
    if(n == 0) return 0;
    return (n + func(n-1));
} */

#include<stdio.h>

int func(int n)
{
    if(n == 0) return 0;
    return (n + func(n-1));   //n=0   0
                              //n=1   1
                              //n=2   3
                              //n=3   6
                              //n=4   10
                              //n=5   15
//R: A função recursiva faz a soma do número atual "n" + o resultado da soma do número anterior.
//Ex: Se o número atual n=5, e o resultado da soma do número anterior (n=4) é 10.
//Então a soma do número atual (n=5) + o resultado da soma do número anterior (n=4) = 5+10 = 15.
}

int main()
{
    int N;

    printf("Valor de N: ");
    scanf("%d", &N);
    printf("%d\n", func(N));

    return 0;
}

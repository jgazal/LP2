/*6. Considere uma partida de futebol entre duas equipes A x B, cujo placar
final é m x n, em que m e n são números de gols marcados por A e B,
respectivamente. Escreva um algoritmo recursivo que imprima todas as possíveis
sucessões de gols marcados. Por exemplo, para um placar final de 3 x 1, as
possíveis sucessões de gols são “AAAB”, “AABA”, “ABAA” e “BAAA”.  */

#include<stdio.h>
#include<string.h>

void troca(char *x, char *y)
{
    char temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

void sucessoesDeGols(char *a, int l, int r)
{
    int i;

    if(l==r)
    {
        printf("%s\n", a);
    }
    else
    {
        for (i=l+1; i<=r; i++)
        {
           troca((a+l), (a+i));
           sucessoesDeGols(a, l+1, r);
           troca((a+l), (a+i));
        }
    }
}

int main()
{
    int A, B;

    printf("Gols marcados pelo time A: ");
    scanf("%d", &A);
    printf("Gols marcados pelo time B: ");
    scanf("%d", &B);
    printf("\n");

    int tam_vetor = A+B;
    int i;
    char v1[A], v2[B], v3[tam_vetor];
    char sucessoes[tam_vetor];

    for(i=0; i<A; i++)
    {
        v1[i] = 'A';
        printf("v1[%d]: %c\n", i, v1[i]);
    }
    printf("----------\n");
    for(i=0; i<B; i++)
    {
        v2[i] = 'B';
        printf("v2[%d]: %c\n", i, v2[i]);
    }
    printf("----------\n");
    for(i=0; i<tam_vetor; i++)
    {
        v3[tam_vetor] = '\0';
        v3[i] = v1[i];
        v3[tam_vetor-1] = v2[B-1];
        printf("v3[%d]: %c\n", i, v3[i]);
    }
    strcpy(sucessoes, v3);
    int n = strlen(sucessoes);

    printf("----------\n");
    printf("Possíveis sucessões de gols: \n");
    printf("%s\n", sucessoes);
    sucessoesDeGols(sucessoes, 0, (n-1));

    return 0;
}

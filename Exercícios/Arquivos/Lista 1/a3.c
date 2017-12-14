/* 3- Faça um programa que receba dois arquivos do usuário, e crie um terceiro
arquivo com o conteúdo dos dois primeiros juntos (o conteúdo do primeiro seguido
do conteúdo do segundo). */

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    FILE *a1, *a2, *a3;

    a1 = fopen("arq1.txt", "r");
    a2 = fopen("arq2.txt", "r");
    a3 = fopen("arq3.txt", "w");

    if(a1==NULL || a2==NULL || a3==NULL)
    {
        printf("Não foi possível abrir o arquivo\n");
        exit(1);
    }

    char c1 = fgetc(a1);
    char c2 = fgetc(a2);

    while(c1!=EOF)
    {
        fputc(c1, a3);
        c1 = fgetc(a1);
    }

    while(c2!=EOF)
    {
        fputc(c2, a3);
        c2 = fgetc(a2);
    }

    fclose(a1);
    fclose(a2);
    fclose(a3);
}

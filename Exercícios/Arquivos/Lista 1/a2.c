/* 2- Faça um programa em Linguagem C que receba do usuário um arquivo, e mostre
na tela quantas linhas esse arquivo possui. */

#include<stdio.h>

int main()
{
    int linhas=0;
    char linha[20], ch;

    FILE*arq;

    arq = fopen("arquivo.txt", "r");

    if(arq==NULL)
    {
        printf("Não foi possível abrir o arquivo\n");
        exit(1);
    }

    while((ch=fgetc(arq))!=EOF)
    {
        if(ch=='\n')
        {
            linhas++;
        }
    }
    printf("Quantidade de linhas do arquivo: %d\n", linhas);

    fclose(arq);
}

/* Faça um programa em que o usuário digite o nome de um arquivo texto e seja mostrado na tela o conteúdo desse arquivo. */

#include<stdio.h>

int main()
{
    FILE*arquivo;
    char c;
    char nome[41];

    //Pergunta o nome do arquivo
    printf("Nome do arquivo: ");
    scanf(" %40[^\n]", nome);

    //Abre o arquivo para leitura
    arquivo = fopen(nome, "r");

    //Lê caracteres até o fim do arquivo
    c = getc(arquivo);
    while(c!=EOF)
    {
        printf("%c", c);
        c = getc(arquivo);
    }

    //Fecha o arquivo
    fclose(arquivo);

}

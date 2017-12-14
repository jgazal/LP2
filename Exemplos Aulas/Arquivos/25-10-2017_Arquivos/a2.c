/* Faça um programa para criar um arquivo com o nome que o usuário quiser. Depois leia um texto do teclado e grave nesse arquivo. */

#include<stdio.h>

int main()
{
    FILE*saida;

    char nome[41], texto[81];

    //Pergunta o nome do arquivo
    printf("Nome do arquivo: ");
    scanf(" %40[^\n]", nome);

    //Abre o arquivo para gravação
    saida = fopen(nome, "w");

    //Lê o texto que será gravado
    printf("Texto: ");
    scanf(" %81[^\n]", texto);

    //Grava o texto no arquivo
    fprintf(saida, texto);

    //Fecha o arquivo
    fclose(saida);
}

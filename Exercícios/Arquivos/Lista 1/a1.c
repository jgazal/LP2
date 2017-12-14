/* 1- Codifique, compile e execute um programa que:
    a. crie/abra um arquivo texto de nome “arq.txt”,
    b. permita que o usuário entre com diversos caracteres nesse arquivo, até que
    o usuário entre com o caractere ‘0’,
    c. reinicie o arquivo, fazendo o ponteiro apontar para seu início, e
    d. lendo-o caractere por caractere, e escrevendo na tela todos os caracteres
    armazenados. */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char caracter, imprimeCaracter[20];

    FILE *arq;
    arq = fopen("arq.txt","w+");

    if(arq==NULL)
    {
        printf("Problema ao criar arquivo.\n");
        exit(1);
    }

    printf("Quantidade de caracteres (digite 0 para sair): ");
    caracter=getchar();

    while(caracter!='0')
    {
        fprintf(arq,"%c",caracter);
        caracter=getchar();
    }
    rewind(arq);

    while(fgets(imprimeCaracter,20,arq)!=NULL)
    {
        printf("%s",imprimeCaracter);
    }

    fclose(arq);
}

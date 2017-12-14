/* 6- Faça um programa em C que recebe como entrada o nome de um arquivo de
entrada e o nome de um arquivo de saída. Cada linha do arquivo de entrada possui
colunas de tamanho de 30 caracteres. No arquivo de saída deverá ser escrito o
arquivo de entrada de forma inversa. Veja um exemplo:

Arquivo de entrada:
Hoje é dia de prova de AP
A prova está muito fácil
Vou tirar uma boa nota

Arquivo de saída:
Aton aob amu rarit uov
Licáf otium átse avorp A
PA ed avorp ed aid é ejoH */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char linha[30], c;
    int i;

    FILE *arq1, *arq2;

    arq1 = fopen("arqEntrada.txt", "r");
    arq2 = fopen("arqSaida.txt", "w");

    if(arq1==NULL || arq2==NULL)
    {
        printf("Não foi possível abrir o arquivo\n");
        exit(1);
    }

    while(fgets(linha, 30, arq1)!=NULL)
    {
        int tam = strlen(linha);
        for(i=0; i<tam/2; i++)
        {
            c = linha[i];
            linha[i] = linha[tam-1-i];
            linha[tam-1-i] = c;
        }
        fprintf(arq2, "%s", linha);
      }

    fclose(arq1);
    fclose(arq2);
}

/* 5- Faça um programa no qual o usuário informa o nome do arquivo, e uma palavra,
e retorne o número de vezes que aquela palavra aparece no arquivo. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char nome_arq[21], palavra[21], linha[21];
    int l=0, cont=0;

    FILE*arq;

    printf("Nome do arquivo: ");
    scanf("%20s", nome_arq);
    arq = fopen(nome_arq, "r");
    printf("Palavra a ser buscada no arquivo: ");
    scanf("%20s", palavra);

    if(arq==NULL)
    {
        printf("Não foi possível abrir o arquivo\n");
        exit(1);
    }

    while(fgets(linha, 20, arq)!=NULL)
    {
        l++;
        if(strstr(linha, palavra)!=NULL)
        {
            printf("Palavra %s encontrada na linha %d\n", palavra, l);
            cont+=1;
        }
    }
    printf("Quantidade de vezes que a palavra %s aparece: %d\n", palavra, cont);

    fclose(arq);

    return 0;
}

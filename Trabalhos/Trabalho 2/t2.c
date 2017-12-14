/*2. Faça um editor de textos, inspirado no NotePad (Bloco de Notas) ou WordPad/
Word, que permita ao usuário inicialmente ler um texto de um arquivo texto
armazenado em disco, armazene este texto em um vetor de strings em memória, onde
cada linha do texto terá um número indicando a linha correspondente. Uma vez
lido o arquivo, o programa deve ler comandos do usuário (laço), que poderá ser
um dos seguintes comandos:

a. Listar (opção 1: indicar o intervalo de linhas que deseja exibir na tela,
linha inicial até linha final);
b. Editar (opção 2: indicar qual a linha deseja editar, mostrar o seu conteúdo
atual, ler um novo conteúdo e substituir o conteúdo da linha antiga pelo novo
conteúdo);
c. Inserir (opção 3: indicar depois de qual linha desejo inserir uma nova linha
de texto, “abrindo espaço” após esta linha e inserindo um novo texto);
d. Apagar (opção 4: indicar qual linha deseja apagar, exibir seu conteúdo,
confirmar a remoção e remover esta linha do texto);
e. Abandonar (opção 5: sair do programa, sem salvar o texto editado, onde é
pedida uma confirmação do usuário sobre a execução desta opção);
f. Sair (opção 6: sair do programa, onde o texto será salvo em um arquivo em
disco sobrescrevendo o arquivo original, sendo pedida uma confirmação do usuário
sobre a execução desta opção).
O programa no final deve portanto ter a capacidade de ler um arquivo de texto do
disco, editar (listar, incluir, excluir, modificar linhas de texto) e salvar em
disco o texto novo que foi editado, executando as operações usuais de um editor
de textos simples.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int opcao, i, li, lf, qtdLinhas=0, op;
char str1[50][100], str2[50][100], strtmp[50][100], temp1[100], temp2[50][100];
FILE *arq1, *arq2;

void retornaMenu()
{
    printf("\nPressione 0 (Zero) para voltar: \n");
    while(opcao!=0)
    {
        scanf("%d", &opcao);
    }
}

void listar()
{
    system("clear");
    printf("===Listar===\n");
    arq1 = fopen("arquivo.txt", "r");
    if(arq1==NULL)
    {
        printf("Não foi possível abrir o arquivo.\n");
        exit(1);
    }
    while(fgets(str1[qtdLinhas], 100, arq1)!=NULL)
    {
        qtdLinhas++;
    }

    printf("Linha inicial: ");
    scanf("%d", &li);
    printf("Linha final: ");
    scanf("%d", &lf);
    printf("\n");

    for(i=li-1; i<=lf-1; i++)
    {
        printf("%d %s", i+1, str1[i]);
    }

    fclose(arq1);

    qtdLinhas=0;

    retornaMenu();
}

void editar()
{
    system("clear");
    printf("===Editar===\n");
    arq1 = fopen("arquivo.txt", "r");
    arq2 = fopen("alterado.txt", "w");
    if(arq1==NULL || arq2==NULL)
    {
        printf("Não foi possível abrir o arquivo.\n");
        exit(1);
    }

    while(fgets(str1[qtdLinhas], 100, arq1)!=NULL)
    {
        qtdLinhas++;
    }

    for(i=0; i<qtdLinhas; i++)
    {
        printf("%d %s", i+1, str1[i]);
    }
    printf("\nLinha que se deseja editar: ");
    scanf("%d", &li);
    printf("%d %s", li, str1[li-1]);

    printf("\nDigite o texto da linha %d: \n", li);
    scanf(" %[^\n]s", temp1);
    strcat(temp1, "\n");

    for(i=0; i<qtdLinhas; i++)
    {
        if(i==li-1)
        {
            strcpy(str1[i], temp1);
        }
        strcpy(temp2[i], str1[i]);
    }

    for(i=0; i<qtdLinhas; i++)
    {
        fprintf(arq2, "%s", temp2[i]);
    }

    remove("arquivo.txt");
    rename("alterado.txt", "arquivo.txt");

    fclose(arq1);
    fclose(arq2);

    qtdLinhas=0;

    retornaMenu();
}

void inserir()
{
    system("clear");
    printf("===Inserir===\n");
    arq1 = fopen("arquivo.txt", "r");
    arq2 = fopen("alterado.txt", "w");
    if(arq1==NULL || arq2==NULL)
    {
        printf("Nao foi possivel abrir o arquivo.\n");
        exit(1);
    }

    while(fgets(str1[qtdLinhas], 100, arq1)!=NULL)
    {
        qtdLinhas++;
    }
    for(i=0; i<qtdLinhas; i++)
    {
        printf("%d %s", i+1, str1[i]);
    }

    printf("\nApos qual linha se deseja inserir uma nova linha: ");
    scanf("%d", &li);
    printf("\nDigite o texto da linha %d: \n", li+1);
    scanf(" %[^\n]s", temp1);
    strcat(temp1, "\n");

    for(i=0; i<li; i++)
    {
        strcpy(temp2[i], str1[i]);
    }
    strcpy(temp2[li], temp1);

    for (i=li; i<qtdLinhas; i++)
    {
        strcpy(temp2[i+1], str1[i]);
    }
    qtdLinhas++;

    for(i=0; i<qtdLinhas; i++)
    {
        fprintf(arq2, "%s", temp2[i]);
    }

    remove("arquivo.txt");
    rename("alterado.txt", "arquivo.txt");

    fclose(arq1);
    fclose(arq2);

    qtdLinhas=0;

    retornaMenu();
}

void apagar()
{
    system("clear");
    printf("===Apagar===\n");
    arq1 = fopen("arquivo.txt", "r");
    arq2 = fopen("alterado.txt", "w");
    if(arq1==NULL || arq2==NULL)
    {
        printf("Nao foi possivel abrir o arquivo.\n");
        exit(1);
    }

    while(fgets(str2[qtdLinhas], 100, arq1)!=NULL)
    {
        qtdLinhas++;
    }

    for(i=0; i<qtdLinhas; i++)
    {
        printf("%d %s", i+1, str2[i]);
    }
    printf("\nLinha que se deseja apagar: ");
    scanf("%d", &li);
    printf("%d %s", li, str2[li-1]);

    printf("\nTem certeza que deseja excluir? [S=1 / N=0]: ");
    scanf("%d", &op);

    if(op==1)
    {
        for(i=0; i<li; i++)
        {
            strcpy(temp2[i], str2[i]);
        }

        for (i=li; i<qtdLinhas; i++)
        {
            strcpy(temp2[i-1], str2[i]);
        }
        qtdLinhas--;

        for(i=0; i<qtdLinhas; i++)
        {
            fprintf(arq2, "%s", temp2[i]);
        }
    }
    else
    {
        for(i=0; i<qtdLinhas; i++)
        {
            fprintf(arq2, "%s", str2[i]);
        }
    }

    if(op==0)
    {
        printf(" ");
    }

    remove("arquivo.txt");
    rename("alterado.txt", "arquivo.txt");

    fclose(arq1);
    fclose(arq2);

    qtdLinhas=0;

    retornaMenu();
}

void abandonar()
{
    system("clear");
    printf("===Abandonar===\n");
    arq1 = fopen("arquivo.txt", "r");
    arq2 = fopen("alterado.txt", "w");
    if(arq1==NULL || arq2==NULL)
    {
        printf("Não foi possível abrir o arquivo.\n");
        exit(1);
    }

    while(fgets(str1[qtdLinhas], 100, arq1)!=NULL)
    {
        qtdLinhas++;
    }
    for(i=0; i<qtdLinhas; i++)
    {
        printf("%d %s", i+1, strtmp[i]);
    }

    printf("\nTem certeza que deseja sair sem salvar as alterações no arquivo? [S=1 / N=0]: ");
    scanf("%d", &op);

    if(op==1)
    {
      for(i=0; i<qtdLinhas; i++)
      {
          fprintf(arq2, "%s", strtmp[i]);
      }

      remove("arquivo.txt");
      rename("alterado.txt", "arquivo.txt");

      system("clear");
      printf("Saindo...\n");

      exit(1);
    }
    if(op==0)
    {
        retornaMenu();
    }

    fclose(arq1);
    fclose(arq2);

    qtdLinhas=0;
}

void tmp()
{
    arq1 = fopen("arquivo.txt", "r");
    if(arq1==NULL)
    {
        printf("Não foi possível abrir o arquivo.\n");
        exit(1);
    }

    while(fgets(strtmp[qtdLinhas], 100, arq1)!=NULL)
    {
        qtdLinhas++;
    }

    fclose(arq1);

    qtdLinhas=0;
}

int main()
{
    tmp();

    do{
        system("clear");
        printf("=====Editor de Texto=====\n");
        printf("-----------MENU----------\n");
        printf("1- Listar\n");
        printf("2- Editar\n");
        printf("3- Inserir\n");
        printf("4- Apagar\n");
        printf("5- Abandonar\n");
        printf("6- Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                listar();
            break;

            case 2:
                editar();
            break;

            case 3:
                inserir();
            break;

            case 4:
                apagar();
            break;

            case 5:
                abandonar();
            break;

            case 6:
                system("clear");
                printf("Saindo...\n");
            break;

            default:
                system("clear");
                printf("Opção inválida.\n");
                retornaMenu();
        }
      }while(opcao!=6);

      return 0;
}

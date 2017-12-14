/* 3. Implemente um controle simples de mercadorias em uma despensa doméstica.
Sobre cada produto podem ser armazenado um código numérico, descrição e
quantidade atual. O programa deve ter opções para entrada e retirada de produtos,
bem como um relatório geral e um de produtos não disponíveis. Armazene os dados
em arquivo binário. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int qtd_reg, i, opcao, cod;
FILE*arq;

typedef struct
{
  int codigo;
  char descricao[20];
  int qtd_atual;
}mercadorias;
mercadorias m;

void retorna_menu()
{
  printf("Pressione 0 (Zero) para voltar: \n");
  while(opcao!=0)
  {
    scanf("%d", &opcao);
  }
}

void entrada_produto()
{
  system("clear");
  printf("=====Entrada de produto=====\n");
  printf("Quantidade de registros: ");
  scanf("%d", &qtd_reg);
  printf("\n");

  arq = fopen("mercadoria.dat", "wb");
  if(arq==NULL)
  {
    printf("Problema na criação do arquivo.\n");
    exit(1);
  }

  for(i=0; i<qtd_reg; i++)
  {
    printf("Registro: %d\n", i+1);
    printf("Código: ");
    scanf("%d", &m.codigo);
    printf("Descrição: ");
    scanf ("%s",m.descricao);
    printf("Quantidade atual: ");
    scanf("%d", &m.qtd_atual);
    fwrite (&m, sizeof(mercadorias), 1, arq);
    printf("\n");
  }
  fclose(arq);
}

void retira_produto()
{
  system("clear");
  printf("=====Retirada de produto=====\n");
  arq = fopen("mercadoria.dat", "r+b");
  printf("Código do produto a ser retirado: ");
  scanf("%d", &cod);
  while(fread(&m, sizeof(mercadorias), 1, arq)!=0)
  {
      if(m.codigo==cod)
      {
        m.codigo = '\0';
        strcpy(m.descricao, " ");
        m.qtd_atual = '\0';
        fwrite (&m, sizeof(mercadorias), 1, arq);
      }
      else
      {
        printf("Produto não encontrado.\n");
      }
  }
  fclose(arq);
}

void relatorio_geral()
{
  system("clear");
  printf("=====Relatório geral=====\n");
  arq = fopen("mercadoria.dat", "rb");
  printf("Mercadoria disponível: \n");
  printf("-----------------------\n");
  while(fread(&m, sizeof(mercadorias), 1, arq)!=0)
  {
    if(m.qtd_atual>0)
    {
      printf ("Código: %d\nDescrição: %s\nQuantidade: %d\n",
              m.codigo, m.descricao, m.qtd_atual);
      printf("\n");
    }
  }
  fclose(arq);

  arq = fopen("mercadoria.dat", "rb");
  printf("Mercadoria não disponível: \n");
  printf("---------------------------\n");
  while(fread(&m, sizeof(mercadorias), 1, arq)!=0)
  {
    if(m.qtd_atual==0)
    {
      printf ("Código: %d\nDescrição: %s\n", m.codigo, m.descricao);
      printf("\n");
    }
  }
  fclose(arq);
}

void prod_nao_disp()
{
  system("clear");
  printf("=====Produtos não disponíveis=====\n");
  arq = fopen("mercadoria.dat", "rb");
  while(fread (&m, sizeof(mercadorias), 1, arq)!=0)
  {
    if(m.qtd_atual==0)
    {
      printf ("Código: %d\nDescrição: %s \n", m.codigo, m.descricao);
      printf("\n");
    }
    else if(m.qtd_atual>0)
    {
      printf("\n");
    }
  }
  fclose(arq);
}

int main()
{
    do{
        system("clear");
        printf("===========================MENU===========================\n");
        printf("(1) entrada de produto\n");
        printf("(2) retirada de produto\n");
        printf("(3) relatório geral\n");
        printf("(4) produtos não disponíveis\n");
        printf("(5) Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
          case 1:
              entrada_produto();
              retorna_menu();
          break;

          case 2:
              retira_produto();
              retorna_menu();
          break;

          case 3:
              relatorio_geral();
              retorna_menu();
          break;

          case 4:
              prod_nao_disp();
              retorna_menu();
          break;

          case 5:
              system("clear");
              printf("Saindo\n");
          break;

          default:
              system("clear");
              printf("Valor inválido\n");
              retorna_menu();
        }
      }while(opcao!=5);
}

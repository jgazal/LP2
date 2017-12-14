/* 4. Faça um programa gerenciar uma agenda de contatos. Para cada contato
armazene o nome, o telefone e o aniversário (dia e mês). O programa deve permitir
(1) inserir contato,
(2) remover contato,
(3) pesquisar um contato pelo nome,
(4) listar todos os contatos,
(5) listar os contatos cujo nome inicia com uma dada letra,
(6) imprimir os aniversariantes do mês.
Sempre que o programa for encerrado, os contatos devem ser armazenados em um
arquivo binário. Quando o programa iniciar, os contatos devem ser inicializados
com os dados contidos neste arquivo binário. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int qtd_cont, opcao, i;
char nome[20], nome_remov[20], letra[1];
FILE*arq;

typedef struct
{
    char nome[20];
    int telefone;
    int diaAniv;
    int mesAniv;
}agenda;
agenda a;

void retorna_menu()
{
  printf("Pressione 0 (Zero) para voltar: \n");
  while(opcao!=0)
  {
      scanf("%d", &opcao);
  }
}

void insereContato()
{
  system("clear");
  printf("=====Inserir contato====\n");
  arq = fopen("agenda.dat", "wb");
  if(arq==NULL)
  {
      printf("Problema na criação do arquivo.\n");
      exit(1);
  }

  printf("Quantidade de contatos: ");
  scanf("%d", &qtd_cont);
  printf("\n");

  for(i=0; i<qtd_cont; i++)
  {
      printf("Nome: ");
      scanf("%s", a.nome);
      printf("Telefone: ");
      scanf("%d", &a.telefone);
      printf("Aniversário(dia e mês): \n");
      scanf("%d %d", &a.diaAniv, &a.mesAniv);
      fwrite (&a, sizeof(agenda), 1, arq);
      printf("\n");
  }
  fclose(arq);
}

void removeContato()
{
  system("clear");
  printf("=====Remover contato====\n");
  printf("Nome do contato: ");
  scanf("%s", nome_remov);
  while(fread(&a, sizeof(agenda), 1, arq)!=0)
  {
      if(a.nome==nome_remov)
      {
        a.telefone = '\0';
        strcpy(a.nome, " ");
        a.diaAniv = '\0';
        a.mesAniv = '\0';
        fwrite (&a, sizeof(agenda), 1, arq);
      }
  }
  fclose(arq);
}

void pesqContatoNome()
{
  system("clear");
  printf("=====Pesquisar contato pelo nome====\n");
  printf("Nome do contato: ");
  scanf("%s", nome);
  printf("\n");
  arq = fopen("agenda.dat", "rb");
  while(fread(&a, sizeof(agenda), 1, arq)!=0)
  {
      if(strcmp(a.nome, nome)==0)
      {
        printf ("Nome: %s\nTelefone: %d\nAniversário: %d/%d\n",
                      a.nome, a.telefone, a.diaAniv, a.mesAniv);
        printf("\n");
      }
  }
  fclose(arq);
}

void listarContatos()
{
  system("clear");
  printf("=====Listar todos os contatos====\n");
  arq = fopen("agenda.dat", "rb");
  while(fread(&a, sizeof(agenda), 1, arq)!=0)
  {
      printf("Nome: %s\n", a.nome);
      printf("Telefone: %d\n", a.telefone);
      printf("Aniversário: %d/%d\n", a.diaAniv, a.mesAniv);
      printf("\n");
  }
  fclose(arq);
}

void listarContatosLetra()
{
  system("clear");
  printf("=====Listar os contatos cujo nome inicia com uma dada letra=====\n");
  printf("Letra: ");
  scanf("%s", letra);
  arq = fopen("agenda.dat", "rb");
  while(fread(&a, sizeof(agenda), 1, arq)!=0)
  {
      if(a.nome==letra)
      {
          printf("Nome: %s\n", a.nome);
          printf("Telefone: %d\n", a.telefone);
          printf("Aniversário: %d/%d\n", a.diaAniv, a.mesAniv);
          printf("\n");
      }
  }
  fclose(arq);
}

void aniversarianteMes()
{
  system("clear");
  printf("=====Aniversariantes do mês=====\n");
  printf("Data atual: %s\n", __DATE__);

  time_t timer;
  struct tm* tm_info;
  char mes[3];
  time(&timer);
  tm_info = localtime(&timer);
  strftime(mes, 3, "%m", tm_info);
  printf("Mês atual: %s\n", mes);
  printf("\n");

  arq = fopen("agenda.dat", "rb");
  while(fread(&a, sizeof(agenda), 1, arq)!=0)
  {
      if(a.mesAniv==atoi(mes))
      {
          printf("Nome: %s\n", a.nome);
          printf("Telefone: %d\n", a.telefone);
          printf("Aniversário: %d/%d\n", a.diaAniv, a.mesAniv);
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
        printf("(1) inserir contato\n");
        printf("(2) remover contato\n");
        printf("(3) pesquisar um contato pelo nome\n");
        printf("(4) listar todos os contatos\n");
        printf("(5) listar os contatos cujo nome inicia com uma dada letra\n");
        printf("(6) imprimir os aniversariantes do mês\n");
        printf("(7) Sair\n");
        printf("\nOpção: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
          case 1:
              insereContato();
              retorna_menu();
          break;

          case 2:
              removeContato();
              retorna_menu();
          break;

          case 3:
              pesqContatoNome();
              retorna_menu();
          break;

          case 4:
              listarContatos();
              retorna_menu();
          break;

          case 5:
              listarContatosLetra();
              retorna_menu();
          break;

          case 6:
              aniversarianteMes();
              retorna_menu();
          break;

          case 7:
              system("clear");
              printf("Saindo\n");
          break;

          default:
              system("clear");
              printf("Valor inválido\n");
              retorna_menu();
        }
      }while(opcao!=7);
}

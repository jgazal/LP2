#include<stdio.h>
#include<stdlib.h>

int TA[16], TB[16], TC[16], TD[16];
int TSA[16], TSB[16], TSC[16], TSD[16];
int opA, opB, opC, opD;
int i, opcao;

void retornaMenu()
{
  printf("\nPressione 0 (Zero) para voltar: \n");
  while(opcao!=0)
  {
      scanf("%d", &opcao);
  }
}

void tabelaVerdade()
{
  for(i=0; i<16; i++)
  {
    //Entrada A
    if(i<8)
    {
      TA[i]=0;
    }
    if(i>7 && i<16)
    {
      TA[i]=1;
    }
    //Entrada B
    if(i<4 || (i>7 && i<12))
    {
      TB[i]=0;
    }
    if((i>3 && i<8) || (i>11 && i<16))
    {
      TB[i]=1;
    }
    //Entrada C
    if(i<2 || (i>3 && i<6) || (i>7 && i<10) || (i>11 && i<14))
    {
      TC[i]=0;
    }
    if((i>1 && i<4) || (i>5 && i<8) || (i>9 && i<12) || (i>13 && i<16))
    {
      TC[i]=1;
    }
    //Entrada D
    if(i%2==0)
    {
      TD[i]=0;
    }
    else
    {
      TD[i]=1;
    }
  }

  for(i=0; i<16; i++)
  {
    //Saída A
    if(TA[i]==1)
    {
      TSA[i]=1;
    }
    else
    {
      TSA[i]=0;
    }
    //Saída B
    if(TB[i]==1 && TA[i]==0)
    {
      TSB[i]=1;
    }
    else
    {
      TSB[i]=0;
    }
    //Saída C
    if(TC[i]==1 && TA[i]==0 && TB[i]==0)
    {
      TSC[i]=1;
    }
    else
    {
      TSC[i]=0;
    }
    //Saída D
    if((TD[i]==1 && TA[i]==0 && TB[i]==0 && TC[i]==0) ||
       (TA[i]==0 && TB[i]==0 && TC[i]==0 && TD[i]==0))
      {
        TSD[i]=1;
      }
      else
      {
        TSD[i]=0;
      }
  }
  system("clear");
  printf("=========TABELA-VERDADE=========\n");
  printf("\nA   B   C   D || SA  SB  SC  SD\n");
  printf("--------------------------------\n");
  for(i=0; i<16; i++)
  {
    printf("%d   %d   %d   %d || %d   %d   %d   %d\n", TA[i], TB[i], TC[i], TD[i],
                                                  TSA[i], TSB[i], TSC[i], TSD[i]);
  }
  retornaMenu();
}

void opcoesOnibus()
{
  system("clear");
  printf("=====Opções de ônibus=====\n");
  printf("Marque as opções desejas com 1, senão com 0.\n");
  printf("\nA - Preço menor: ");
  scanf("%d", &opA);
  printf("B - Ar-condicionado: ");
  scanf("%d", &opB);
  printf("C - Wi-fi: ");
  scanf("%d", &opC);
  printf("D - Lanche: ");
  scanf("%d", &opD);
  printf("\n");

  printf("As linhas de ônibus abaixo atendem as opções escolhidas.\n");
  //Prioridade opção A
  if(opA==1)
  {
    for(i=0; i<16; i++)
    {
      if(TSA[i]==1)
      {
        printf("Linha nº: %d\n", i+1);
      }
    }
  }
  //Prioridade opção B
  if(!opA && opB)
  {
    for(i=0; i<16; i++)
    {
      if(TSB[i]==1)
      {
        printf("Linha nº: %d\n", i+1);
      }
    }
  }
  //Prioridade opção C
  if(!opA && !opB && opC)
  {
    for(i=0; i<16; i++)
    {
      if(TSC[i]==1)
      {
        printf("Linha nº: %d\n", i+1);
      }
    }
  }
  //Prioridade opção D
  if(!opA && !opB && !opC)
  {
    for(i=0; i<16; i++)
    {
      if(TSD[i]==1)
      {
        printf("Linha nº: %d\n", i+1);
      }
    }
  }
  retornaMenu();
}

int main()
{
    do
    {
      system("clear");
      printf("=====Viagem de ônibus=====\n");
      printf("-----------MENU-----------\n");
      printf("1- Tabela-verdade\n");
      printf("2- Escolher ônibus\n");
      printf("3- Sair\n");
      printf("\nOpção: ");
      scanf("%d", &opcao);

      switch(opcao)
      {
        case 1:
          tabelaVerdade();
        break;

        case 2:
          opcoesOnibus();
        break;

        case 3:
          system("clear");
          printf("Saindo...\n");
        break;

        default:
          system("clear");
          printf("Opção inválida.\n");
          retornaMenu();
      }
    }while(opcao!=3);

    return 0;
}

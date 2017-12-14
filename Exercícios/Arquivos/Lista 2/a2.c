/* 2. Registre tudo que ocorrer com o carro: manutenções, combustível, lavagens,
etc., tudo com o valor gasto e a quilometragem. Além de um relatório geral,
inclua uma consulta sobre custo por quilômetro e consumo médio. Armazene os
dados em arquivo binário. */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, opcao, qtd_reg;
    float gasto_total=0, gasto_total2=0, consumo_medio, custo_km, km_total=0;
    FILE*arq;

    typedef struct
    {
        char data[10];
        int manutencoes;
        float custoManutencao;
        float combustivel;
        float custoCombustivel;
        int lavagens;
        float custoLavagem;
        float kilometragem;
        float total_gasto;
    }carro;
    carro c;

    system("clear");
    printf("Quantidade de registros: ");
    scanf("%d", &qtd_reg);

    do{
        system("clear");
        printf("===========================MENU===========================\n");
        printf("(1) inserir despesas\n");
        printf("(2) relatório geral\n");
        printf("(3) consulta de custo (Quilometragem e consumo médio)\n");
        printf("(4) sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
          case 1:
              system("clear");
              printf("=====Inserir despesas=====\n");
              arq = fopen("carro.dat", "wb");
              if(arq==NULL)
              {
                  printf("Problema na criação do arquivo.\n");
                  exit(1);
              }

              for(i=0; i<qtd_reg; i++)
              {
                  printf("Registro: %d\n", i+1);
                  printf("Data: ");
                  scanf("%s", c.data);
                  printf("Manutenções: ");
                  scanf ("%d", &c.manutencoes);
                  printf("Gasto com manutenções: R$");
                  scanf("%f", &c.custoManutencao);
                  printf("Combustível: ");
                  scanf ("%f", &c.combustivel);
                  printf("Gasto com combustivel: R$");
                  scanf("%f", &c.custoCombustivel);
                  printf("Lavagens: ");
                  scanf ("%d", &c.lavagens);
                  printf("Gasto com lavagem: R$");
                  scanf("%f", &c.custoLavagem);
                  printf("kilometragem: ");
                  scanf("%f", &c.kilometragem);
                  c.total_gasto = (c.custoManutencao+c.custoCombustivel+c.custoLavagem);
                  fwrite (&c, sizeof(carro), 1, arq);
                  printf("\n");
              }
              fclose(arq);

              printf("Pressione 0 (Zero) para voltar: \n");
              while(opcao!=0)
              {
                  scanf("%d", &opcao);
              }
          break;

          case 2:
              system("clear");
              printf("=====Relatório geral=====\n");
              arq = fopen("carro.dat", "rb");
              while(fread(&c, sizeof(carro), 1, arq)!=0)
              {
                  printf("Data: %s\n", c.data);
                  printf("Manutenções: %d\n", c.manutencoes);
                  printf("Gasto com manutenções: R$%.2f\n", c.custoManutencao);
                  printf("Combustível: %.1f\n", c.combustivel);
                  printf("Gasto com combustivel: R$%.2f\n", c.custoCombustivel);
                  printf("Lavagens: %d\n", c.lavagens);
                  printf("Gasto com lavagem: R$%.2f\n", c.custoLavagem);
                  printf("kilometragem: %.1f\n", c.kilometragem);
                  printf("Total gasto no dia: R$%.2f\n", c.total_gasto);
                  gasto_total+=c.total_gasto;
                  printf("\n");
              }
              printf("---------------------\n");
              printf("Gasto total: R$%.2f\n", gasto_total);
              printf("\n");
              fclose(arq);

              printf("Pressione 0 (Zero) para voltar: \n");
              while(opcao!=0)
              {
                  scanf("%d", &opcao);
              }
          break;

          case 3:
              system("clear");
              printf("=====Consulta de custo=====\n");
              arq = fopen("carro.dat", "rb");
              while(fread(&c, sizeof(carro), 1, arq)!=0)
              {
                  gasto_total2+=c.total_gasto;
                  consumo_medio = gasto_total2/qtd_reg;
                  km_total+=c.kilometragem;
                  custo_km = km_total/consumo_medio;
              }
              printf("Custo por kilometro: R$%.2f\n", custo_km);
              printf("Consumo médio: R$%.2f\n", consumo_medio);
              printf("\n");
              fclose(arq);

              printf("Pressione 0 (Zero) para voltar: \n");
              while(opcao!=0)
              {
                  scanf("%d", &opcao);
              }
          break;

          case 4:
              system("clear");
              printf("Saindo\n");
          break;

          default:
              system("clear");
              printf("Valor inválido\n");
              printf("Pressione 0 (Zero) para voltar: \n");
              while(opcao!=0)
              {
                  scanf("%d", &opcao);
              }
        }
      }while(opcao!=4);
}

//Exercício 16 - Capítulo 4 - Pág 95 - Livro: Lógica de Programação - Forbellone

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct registro
{
    char proprietario[10];
    char combustivel[10];
    char modelo[10];
    char cor[10];
    int num_chassi;
    int ano;
    char placa[7];

} REGISTRO;

int main()
{
    REGISTRO R[5000];
    
    int i, x, j, opcao, chassi, sp=0;
    char novo_proprietario[10], p2[4], splaca[5000][7];
    
    printf("==========REGISTRO PADRÃO==========\n");
    printf("===================================\n");
    for(i=0; i<5000; i++)
    {
        printf("Proprietário %d: ", i+1);
        scanf("%s", R[i].proprietario); 
        printf("Combustível: "); 
        scanf("%s", R[i].combustivel);
        printf("Modelo: ");
        scanf("%s", R[i].modelo); 
        printf("Cor: ");
        scanf("%s", R[i].cor); 
        printf("Nº chassi: ");
        scanf("%d", &R[i].num_chassi);
        printf("Ano: ");
        scanf("%d", &R[i].ano);
        printf("Placa: ");
        scanf("%s", R[i].placa);
        for(j=0; j<5000; j++)
        {
            strcpy(splaca[j], R[i].placa);
        }
        printf("\n");
    }  
    printf("\n");
    printf("=====================================RELATÓRIO======================================\n");
    printf("====================================================================================\n");      
    printf("\nProprietários cujos carros são do ano de 1980 ou posterior e movidos a diesel\n");
    printf("____________________________________________________________________________________\n");
    for(i=0; i<5000; i++)
    {
        if(R[i].ano >=1980 && strcmp(R[i].combustivel,"diesel")==0)
        {
            printf("Proprietário: %s\n", R[i].proprietario);
        }
    } 
    printf("------------------------------------------------------------------------------------\n");
    printf("Placas que começam com a letra A e terminam com 0, 2, 4 ou 7\n");
    printf("____________________________________________________________________________________\n");
    for(i=0; i<5000; i++)
    {
        if((R[i].placa[0]=='A') && (R[i].placa[6]=='0'||'2'||'4'||'7'))
        {
            printf("Placa: %s\n", R[i].placa);  
            printf("Proprietário: %s\n",R[i].proprietario);
        }
    }
    printf("------------------------------------------------------------------------------------\n");
    printf("Placas que possuem como segunda letra uma vogal e a soma dos valores numéricos é par\n");
    printf("____________________________________________________________________________________\n");
    //Conversão de char para int
    for(i=0; i<5000; i++)
    {    
        for(j=3; j<7; j++)  
        {
            int p1 = splaca[i][j];
            p2[0] = p1;
            sp = sp + atoi(p2);
        }
    }
    printf("\n");
          
    for(i=0; i<5000; i++)   
    {
        if(((R[i].placa[1]=='A')|| (R[i].placa[1]=='E') || (R[i].placa[1]=='I') || (R[i].placa[1]=='O') || (R[i].placa[1]=='U')) && (sp%2==0))
        {
            printf("Placa: %s\n", R[i].placa);
            printf("Modelo: %s\n", R[i].modelo);
            printf("Cor: %s\n", R[i].cor);
            printf("\n");
        }
    }
    printf("------------------------------------------------------------------------------------\n");
    printf("Troca de proprietário\n");
    printf("____________________________________________________________________________________\n");
    printf("Número do chassi: ");
    scanf("%d", &chassi);
    for(i=0; i<5000; i++)
    {
        if(((R[i].placa[3]!='0') && (R[i].placa[4]!='0') && (R[i].placa[5]!='0') && (R[i].placa[6]!='0')) && (chassi == R[i].num_chassi))
        {
            printf("Novo proprietário: ");
            scanf("%s", novo_proprietario);
            strcpy(R[i].proprietario, novo_proprietario);
        }
    }
    printf("\n");
    printf("Proprietários\n");
    for(i=0; i<5000; i++)
    {
        printf("%s\n", R[i].proprietario);
    }

    return 0;
}

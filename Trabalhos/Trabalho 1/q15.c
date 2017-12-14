//Exercício 15 - Capítulo 4 - Pág 95 - Livro: Lógica de Programação - Forbellone

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct ficha
{
    int codigo;
    int doado;
    char nome_obra[50];
    char nome_autor[50];
    char editora[50];
    int num_pags;

}   FICHA;

int main()
{
    FICHA CE[500], CH[500], CB[500];

    int i, j, opcao, codigo, area;
    char obra[50];   
    
    printf("        Cadastro dos livros       \n");
    printf("__________________________________\n");
    printf("=====Livros - Ciências Exatas=====\n");
    for(i=0; i<500; i++)
    {
        printf("Código de catalogação: ");
        scanf("%d", &CE[i].codigo);
        printf("Doado (1-SIM | 2-Nâo): ");
        scanf("%d", &CE[i].doado);
        printf("Nome da obra: ");
        scanf("%s", CE[i].nome_obra);
        printf("Nome do autor: ");
        scanf("%s", CE[i].nome_autor);
        printf("Editora: ");
        scanf("%s", CE[i].editora);
        printf("Nº de páginas: ");
        scanf("%d", &CE[i].num_pags);   
        printf("\n");
    }
    printf("=====Livros - Ciências Humanas=====\n");
    for(i=0; i<500; i++)
    {
        printf("Código de catalogação: ");
        scanf("%d", &CH[i].codigo);
        printf("Doado (1-SIM | 2-Nâo): ");
        scanf("%d", &CH[i].doado);
        printf("Nome da obra: ");
        scanf("%s", CH[i].nome_obra);
        printf("Nome do autor: ");
        scanf("%s", CH[i].nome_autor);
        printf("Editora: ");
        scanf("%s", CH[i].editora);
        printf("Nº de páginas: ");
        scanf("%d", &CH[i].num_pags); 
        printf("\n");
    }
    printf("=====Livros - Ciências Biomédicas=====\n");
    for(i=0; i<500; i++)
    {
        printf("Código de catalogação: ");
        scanf("%d", &CB[i].codigo);
        printf("Doado (1-SIM | 2-Nâo): ");
        scanf("%d", &CB[i].doado);
        printf("Nome da obra: ");
        scanf("%s", CB[i].nome_obra);
        printf("Nome do autor: ");
        scanf("%s", CB[i].nome_autor);
        printf("Editora: ");
        scanf("%s", CB[i].editora);
        printf("Nº de páginas: ");
        scanf("%d", &CB[i].num_pags);
        printf("\n");
    }
    do{
        system("clear");
        printf("   MENU DE CONSULTA AO SISTEMA INFORMATIZADO DA BIBLIOTECA   \n");
        printf("_____________________________________________________________\n");
        printf("1- Consulta às informações (Código + Área)\n");   
        printf("2- Consulta às informações (Nome da obra + Área)\n"); 
        printf("3- Obras de cada área que foram doação\n"); 
        printf("4- Obras de cada área que foram comprados\n"); //num_pags 100-300)
        printf("5- Alterar registro\n");
        printf("6- Excluir registro\n"); 
        printf("7- Sair\n");
        printf("\nOpção: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                do{
                    system("clear");
                    printf("=====CONSULTA AS INFORMAÇÕES=====\n");
                    printf("_________________________________\n");
                    printf("Código: ");
                    scanf("%d", &codigo);
                    printf("Área (1- CE | 2- CH | 3- CB): ");
                    scanf("%d", &area);
                    printf("\n");
                    for(i=0; i<500; i++)
                    {
                        if((codigo==CE[i].codigo) && (area==1))
                        {
                            printf("Código de catalogação: %d\n", CE[i].codigo);
                            printf("Doado (1-SIM | 2-Nâo): %d\n", CE[i].doado);
                            printf("Nome da obra: %s\n", CE[i].nome_obra);
                            printf("Nome do autor: %s\n", CE[i].nome_autor);
                            printf("Editora: %s\n", CE[i].editora);
                            printf("Nº de páginas: %d\n", CE[i].num_pags);
                        }
                        else if((codigo==CH[i].codigo) && (area==2))
                        {
                            printf("Código de catalogação: %d\n", CH[i].codigo);
                            printf("Doado (1-SIM | 2-Nâo): %d\n", CH[i].doado);
                            printf("Nome da obra: %s\n", CH[i].nome_obra);
                            printf("Nome do autor: %s\n", CH[i].nome_autor);
                            printf("Editora: %s\n", CH[i].editora);
                            printf("Nº de páginas: %d\n", CH[i].num_pags);
                        }       
                        else if((codigo==CB[i].codigo) && (area==3))
                        {
                            printf("Código de catalogação: %d\n", CB[i].codigo);
                            printf("Doado (1-SIM | 2-Nâo): %d\n", CB[i].doado);
                            printf("Nome da obra: %s\n", CB[i].nome_obra);
                            printf("Nome do autor: %s\n", CB[i].nome_autor);
                            printf("Editora: %s\n", CB[i].editora);
                            printf("Nº de páginas: %d\n", CB[i].num_pags);
                        }  
                        else
                        {
                            printf("\nCódigo inexistente ou área incorreta\n");                    
                        }                                  
                    }
                    printf("\nPara retornar ao MENU digite -1 ou digite qualquer número para continuar pesquisa\n");
                    scanf("%d", &opcao);                 
                   }while(opcao!=-1);               
            break;
            case 2:
                do{
                    system("clear");
                    printf("=====CONSULTA AS INFORMAÇÕES=====\n");
                    printf("_________________________________\n");
                    printf("Nome da obra: ");
                    scanf("%s", obra);
                    printf("Área (1- CE | 2- CH | 3- CB): ");
                    scanf("%d", &area);
                    printf("\n");
                    for(i=0; i<500; i++)
                    {
                        if((strcmp(obra,CE[i].nome_obra)==0) && (area==1))
                        {
                            printf("Código de catalogação: %d\n", CE[i].codigo);
                            printf("Doado (1-SIM | 2-Nâo): %d\n", CE[i].doado);
                            printf("Nome da obra: %s\n", CE[i].nome_obra);
                            printf("Nome do autor: %s\n", CE[i].nome_autor);
                            printf("Editora: %s\n", CE[i].editora);
                            printf("Nº de páginas: %d\n", CE[i].num_pags);
                        }
                        else if((strcmp(obra,CH[i].nome_obra)==0) && (area==2))
                        {
                            printf("Código de catalogação: %d\n", CH[i].codigo);
                            printf("Doado (1-SIM | 2-Nâo): %d\n", CH[i].doado);
                            printf("Nome da obra: %s\n", CH[i].nome_obra);
                            printf("Nome do autor: %s\n", CH[i].nome_autor);
                            printf("Editora: %s\n", CH[i].editora);
                            printf("Nº de páginas: %d\n", CH[i].num_pags);
                        }       
                        else if((strcmp(obra,CB[i].nome_obra)==0) && (area==3))
                        {
                            printf("Código de catalogação: %d\n", CB[i].codigo);
                            printf("Doado (1-SIM | 2-Nâo): %d\n", CB[i].doado);
                            printf("Nome da obra: %s\n", CB[i].nome_obra);
                            printf("Nome do autor: %s\n", CB[i].nome_autor);
                            printf("Editora: %s\n", CB[i].editora);
                            printf("Nº de páginas: %d\n", CB[i].num_pags);
                        }  
                        else
                        {
                            printf("\nObra inexistente ou área incorreta\n");                    
                        }                                  
                    } 
                    printf("\nPara retornar ao MENU digite -1 ou digite qualquer número para continuar pesquisa\n");
                    scanf("%d", &opcao);                 
                   }while(opcao!=-1); 

            break;
            case 3:
                do{
                    system("clear");
                    printf("=====OBRAS DOAÇÃO=====\n");
                    printf("______________________\n");
                    for(i=0; i<500; i++)
                    {
                        if(CE[i].doado == 1)
                        {   
                            printf("=====Ciências Exatas=====\n");
                            printf("Nome da obra: %s\n", CE[i].nome_obra);
                            printf("Nome do autor: %s\n", CE[i].nome_autor);
                            printf("\n");
                        }
                        if(CH[i].doado == 1)
                        {   
                            printf("=====Ciências Humanas=====\n");
                            printf("Nome da obra: %s\n", CH[i].nome_obra);
                            printf("Nome do autor: %s\n", CH[i].nome_autor);
                            printf("\n");
                        }
                        if(CB[i].doado == 1)
                        {   
                            printf("=====Ciências Biológicas=====\n");
                            printf("Nome da obra: %s\n", CB[i].nome_obra);
                            printf("Nome do autor: %s\n", CB[i].nome_autor);
                            printf("\n");
                        }
                    }
                    printf("\nPara retornar ao MENU digite -1\n");
                    scanf("%d", &opcao); 
                }while(opcao!=-1);
            break;
            case 4:
                do{
                    system("clear");
                    printf("=====OBRAS COMPRADAS=====\n");
                    printf("_________________________\n");
                    for(i=0; i<500; i++)
                    {
                        if(CE[i].doado == 2)
                        {   
                            printf("=====Ciências Exatas=====\n");
                            printf("Nome da obra: %s\n", CE[i].nome_obra);
                            printf("Nome do autor: %s\n", CE[i].nome_autor);
                            printf("\n");
                        }
                        if(CH[i].doado == 2)
                        {   
                            printf("=====Ciências Humanas=====\n");
                            printf("Nome da obra: %s\n", CH[i].nome_obra);
                            printf("Nome do autor: %s\n", CH[i].nome_autor);
                            printf("\n");
                        }
                        if(CB[i].doado == 2)
                        {   
                            printf("=====Ciências Biológicas=====\n");
                            printf("Nome da obra: %s\n", CB[i].nome_obra);
                            printf("Nome do autor: %s\n", CB[i].nome_autor);
                            printf("\n");
                        }
                    }
                    printf("\nPara retornar ao MENU digite -1\n");
                    scanf("%d", &opcao); 
                }while(opcao!=-1);
            break;
            case 5:
                do{
                    system("clear");
                    printf("=====ALTERAR REGISTRO=====\n");
                    printf("__________________________\n");
                    printf("Código: ");
                    scanf("%d", &codigo);
                    printf("Área (1- CE | 2- CH | 3- CB): ");
                    scanf("%d", &area);
                    printf("\n");
                    for(i=0; i<500; i++)
                    {
                        if((codigo==CE[i].codigo) && (area==1))
                        {
                            printf("Doado (1-SIM | 2-Nâo): ");
                            scanf("%d", &CE[i].doado);
                            printf("Nome da obra: ");
                            scanf("%s", CE[i].nome_obra);
                            printf("Nome do autor: ");
                            scanf("%s", CE[i].nome_autor);
                            printf("Editora: ");
                            scanf("%s", CE[i].editora);
                            printf("Nº de páginas: ");
                            scanf("%d", &CE[i].num_pags);   
                            printf("\n");
                        }
                        else if((codigo==CH[i].codigo) && (area==2))
                        {
                            printf("Doado (1-SIM | 2-Nâo): ");
                            scanf("%d", &CH[i].doado);
                            printf("Nome da obra: ");
                            scanf("%s", CH[i].nome_obra);
                            printf("Nome do autor: ");
                            scanf("%s", CH[i].nome_autor);
                            printf("Editora: ");
                            scanf("%s", CH[i].editora);
                            printf("Nº de páginas: ");
                            scanf("%d", &CH[i].num_pags); 
                            printf("\n");
                        }       
                        else if((codigo==CB[i].codigo) && (area==3))
                        {
                            printf("Doado (1-SIM | 2-Nâo): ");
                            scanf("%d", &CB[i].doado);
                            printf("Nome da obra: ");
                            scanf("%s", CB[i].nome_obra);
                            printf("Nome do autor: ");
                            scanf("%s", CB[i].nome_autor);
                            printf("Editora: ");
                            scanf("%s", CB[i].editora);
                            printf("Nº de páginas: ");
                            scanf("%d", &CB[i].num_pags);
                            printf("\n");
                        }  
                        else
                        {
                            printf("\nCódigo inexistente ou área incorreta\n");                    
                        }                                  
                    }
                    printf("\nPara retornar ao MENU digite -1\n");
                    scanf("%d", &opcao); 
                }while(opcao!=-1);
            break;
            case 6:
                do{
                    system("clear");
                    printf("=====EXCLUIR REGISTRO=====\n");
                    printf("__________________________\n");
printf("Código: ");
                    scanf("%d", &codigo);
                    printf("Área (1- CE | 2- CH | 3- CB): ");
                    scanf("%d", &area);
                    for(i=0; i<500; i++)
                    {
                        if((codigo==CE[i].codigo) && (area==1))
                        {
                            CE[i].doado = 0;
                            strcpy(CE[i].nome_obra, "");
                            strcpy(CE[i].nome_autor, "");
                            strcpy(CE[i].editora,"");
                            CE[i].num_pags = 0; 
                            printf("Livro excluido\n");  
                            printf("\n");
                        }
                        else if((codigo==CH[i].codigo) && (area==2))
                        {
                            CH[i].doado = 0;
                            strcpy(CH[i].nome_obra, "");
                            strcpy(CH[i].nome_autor, "");
                            strcpy(CH[i].editora,"");
                            CE[i].num_pags = 0; 
                            printf("Livro excluido\n");  
                            printf("\n");
                        }     
                        else if((codigo==CB[i].codigo) && (area==3))
                        {
                            CB[i].doado = 0;
                            strcpy(CB[i].nome_obra, "");
                            strcpy(CB[i].nome_autor, "");
                            strcpy(CB[i].editora,"");
                            CE[i].num_pags = 0; 
                            printf("Livro excluido\n");  
                            printf("\n");
                        }  
                        else
                        {
                            printf("\nCódigo inexistente ou área incorreta\n");                    
                        }                                  
                    }
                    printf("\nPara retornar ao MENU digite -1\n");
                    scanf("%d", &opcao); 
                }while(opcao!=-1);
            break;
            case 7:
                system("clear");
                printf("Saindo\n");       
            break;
        }
    
    }while(opcao!=7);
   

    return 0;
}

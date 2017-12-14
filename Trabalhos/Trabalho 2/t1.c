/*1. Faça um programa que abra um arquivo HTML e elimine todas as “tags” do
texto, ou seja, o programa deve gerar um novo arquivo em disco que elimine todas
as tags Html que são caracterizadas por comandos entre “<” e “>”. Veja abaixo um
exemplo de um texto em HTML e do texto que deverá ser gerado pelo programa após
 eliminar as tags Html.

 <HTML>
 <HEAD>
 <TITLE>Minha Pagina Web</TITLE>                 Minha Pagina Web
 </HEAD>
 <BODY>
 Meu Texto<BR>                                   Meu Texto
 Minha Imagem<IMG SRC="img.jpg">                 Minha Imagem
 <A HREF="pag1.html">Meu Link</A>                Meu Link
 </BODY>
 </HTML>  */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char caracter;
    int aux;

    FILE *arq1, *arq2;

    arq1 = fopen("MinhaPagina.html", "r");
    arq2 = fopen("MinhaPagina.txt", "w");
    if(arq1==NULL || arq2==NULL)
    {
        printf("Não foi possível abrir/criar o arquivo.\n");
        exit(1);
    }

    caracter = getc(arq1);
    while(caracter!=EOF)
    {
        if(caracter=='<')
        {
            aux = 0;
        }
        if(caracter=='>')
        {
            caracter = getc(arq1);
            aux = 1;
        }
        if(aux==1)
        {
            fprintf(arq2, "%c", caracter);
        }
        caracter = getc(arq1);
    }
    fclose(arq1);
    fclose(arq2);

    return 0;
}

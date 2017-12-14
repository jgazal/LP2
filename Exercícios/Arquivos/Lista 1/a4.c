/* 4- Desenvolver um programa em C que lê o conteúdo de um arquivo e cria um
arquivo com o mesmo conteúdo, mas com todas as letras minúsculas convertidas para
maiúsculas. Os nomes dos arquivos serão fornecidos, via teclado, pelo usuário. A
função que converte maiúscula para minúscula é o toupper(). Ela é aplicada em cada
caractere da string. */

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
      FILE *arq1 *arq2;

      arq1 = fopen("minusculo.txt", "r");
      arq2 = fopen("maiusculo.txt", "w");

      if(arq1==NULL || arq2==NULL)
      {
          printf("Não foi possível abrir o arquivo\n");
          exit(1);
      }

      char c = fgetc(arq1);
      while(c!=EOF)
      {
          fputc(toupper(c), arq2);
          c = fgetc(arq1);
      }

      fclose(arq1);
      fclose(arq2);

      return 0;
}

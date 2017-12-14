/*3B - Escreva um procedimento/função que receba o arquivo que contém as notas
de uma disciplina no formato da questão 2B, e escreva no arquivo texto
"saida.txt" o nome de cada aluno com sua respectiva média ((P1+P2+P3+P4)/4) e um
caractere indicando se o aluno foi aprovado ou reprovado na disciplica (use 'A'
para indicar aprovação e 'R' para indicar reprovação). Considere que um aluno
está aprovado se tiver média maior ou igual a 6.0. Para o exemplo da questão 2B,
o programa deve criar um arquivo "saida.txt" com o seguinte conteúdo:

João da Silva 3.9 R
Manuel Santos 8.2 A
Fulana de Tal 6.7 A     */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char nome[81];
	float n1, n2, n3, n4;
	float media;

	FILE *arq1, *arq2;

	arq1 = fopen("notas.txt", "r");
	arq2 = fopen("saida.txt", "w");
	if(arq1==NULL || arq2==NULL)
	{
		printf("Erro na abertura/criação do arquivo.\n");
		exit(1);
	}

	while(fscanf(arq1, " %[^\n]80", nome)!=EOF)
	{
		fscanf(arq1, " %f %f %f %f", &n1, &n2, &n3, &n4);

		media = (n1+n2+n3+n4)/4;
		fprintf(arq2, "%s %.1f", nome, media);

		if(media>=6)
		{
			fprintf(arq2, " A\n");
		}
		else
		{
			fprintf(arq2, " R\n");
		}
	}

	fclose(arq1);
	fclose(arq2);

	return 0;
}

//Exercício 18 - Capítulo 4 - Pág 97 - Livro: Lógica de Programação - Forbellone

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct aluno
{
	int nmat, serie, turma, nasc;
	char nome[50], sexo[2], natural[20];
	float media, idade, rep;
};
struct aluno al[30];

int main ()
{
	int i, h=0, t=0;
	float a1a=0, r1a=0, a1b=0, r1b=0, a2a=0, r2a=0, a2b=0, r2b=0, m1a=0, f1a=0, m1b=0, f1b=0, m2a=0, f2a=0, m2b=0, f2b=0, soma1=0, soma2=0, j=0, k=0, ci=0, es=0, re1=0, pr1=0, re2=0, pr2=0, s1m=0, s2m=0;
	char s1n[50], s2n[50];
	for(i=0;i<30;i++)
	{
		if(al[i].serie==1 && al[i].turma==1)
		{
			{
			if(media>7)
				a1a=a1a+1;
			else
				r1a=r1a+1;
			}
		if(al[i].serie==1 && al[i].turma==2)
			{
			if(media>7)
				a1b=a1b+1;
			else
				r1b=r1b+1;
			}
		if(al[i].serie==2 && al[i].turma==1)
			{
			if(media>7)
				a2a=a2a+1;
			else
				r2a=r2a+1;
			}
		if(al[i].serie==2 && al[i].turma==2)
			{
			if(media>7)
				a2b=a2b+1;
			else
				r2b=r2b+1;
			}
		}
	}
	
	for(i=0;i<30;i++)
	{
		if(al[i].serie==1 && al[i].turma==1)
		{
			{
			if(strcmp(al[i].sexo,'m')==0)
				m1a=m1a+1;
			else
				f1a=f1a+1;
			}
		if(al[i].serie==1 && al[i].turma==2)
			{
			if(strcmp(al[i].sexo,'m')==0)
				m1b=m1b+1;
			else
				f1b=f1b+1;
			}
		if(al[i].serie==2 && al[i].turma==1)
			{
			if(strcmp(al[i].sexo,'m')==0)
				m2a=m2a+1;
			else
				f2a=f2a+1;
			}
		if(al[i].serie==2 && al[i].turma==2)
			{
			if(strcmp(al[i].sexo,'m')==0)
				m2b=m2b+1;
			else
				f2b=f2b+1;
			}
		}
	
	for(i=0;i<30;i++)
	{
		if(al[i].serie==1)
		{
			soma1=soma1+al[i].idade;
			j++;
		}
		else
		{
			soma2=soma2+al[i].idade;
			k++;
		}
	}
		
	for(i=0;i<30;i++)
		{
		if(strcmp(al[i].natural, 'anapolis')==0)
			ci++;
		else
			es++;	
		}	
		
	for(i=0;i<30;i++)
		{
		if(al[i].turma==1)
			{
			if(al[i].rep>0)
				re1++;
			else
				pr1++;
			}
		if(al[i].turma==2)
			{
			if(al[i].rep>0)
				re2++;
			else
				pr2++;	
			}
		}
		
	for(i=0;i<30;i++)
	{
		if(al[i].serie==1)
		{
			s1m[h]=al[i].media;
			strcpy(s1n[h],al[i].nome);
			h++;
		}
		else
		{
			s2m[h]=al[i].media;
			strcpy(s2n[h],al[i].nome);
			t++;
		}
	}
	
	for(i=0;i<h;i++)
		for(j=1;j<=h-i;j++)
			{
			if(s1m[j]<s1m[j-1])
				aux1=s1m[j];
				strcpy(aux2,s1n[j]);
				s1m[j]=s1m[j-1];
				strcpy(s1n[j], s1n[j-1]);
				s1m[j-1]=aux1;
				strcpy(s1m[j-1], aux2);	
			}
	
	for(i=0;i<t;i++)
		for(j=1;j<=t-i;j++)
			{
			if(s2m[j]<s2m[j-1])
				aux1=s2m[j];
				strcpy(aux2,s2n[j]);
				s2m[j]=s2m[j-1];
				strcpy(s2n[j], s2n[j-1]);
				s2m[j-1]=aux1;
				strcpy(s2n[j-1], aux2);	
			}
	}
	prinf("Foram %.2f % aprovados e %.2f % reprovados na turma A da primeira serie.\n", a1a/(a1a+r1a), r1a/(a1a+r1a));
	prinf("Foram %.2f % aprovados e %.2f % reprovados na turma B da primeira serie.\n", a1b/(a1b+r1b), r1b/(a1b+r1b);
	prinf("Foram %.2f % aprovados e %.2f % reprovados na turma A da segunda serie.\n", a2a/(a2a+r2a), r2a/(a2a+r2a));
	prinf("Foram %.2f % aprovados e %.2f % reprovados na turma B da segunda serie.\n", a2b/(a1a2b+r2b), r2b/(a2b+r2b));
	printf("No total foram aprovados %.2f % e reprovados %.2f da primeira serie.\n", (a1a+a1b)/(a1a+a1b+r1a+r1b), (r1a+r1b)/(a1a+a1b+r1a+r1b));
	printf("No total foram aprovados %.2f % e reprovados %.2f da segunda serie.\n", (a2a+a2b)/(a2a+a2b+r2a+r2b), (r2a+r2b)/(a2a+a2b+r2a+r2b));
	printf("%.2f % sao homens e %.2f % mulheres na turma A da primeira serie.\n", m1a/(m1a+f1a), f1a/(m1a+f1a));
	printf("%.2f % sao homens e %.2f % mulheres na turma B da primeira serie.\n", m1b/(m1b+f1b), f1b/(m1b+f1b);
	printf("%.2f % sao homens e %.2f % mulheres na turma A da segunda serie.\n", m2a/(m2a+f2a), f2a/(m2a+f2a));
	printf("%.2f % sao homens e %.2f % mulheres na turma B da segunda serie.\n", m2b/(m1a2b+f2b), f2b/(m2b+f2b));
	printf("No total sao %.2f % homens e %.2f mulheres da primeira serie.\n", (m1a+m1b)/(m1a+m1b+f1a+f1b), (f1a+f1b)/(m1a+m1b+f1a+f1b));
	printf("No total sao %.2f % homens e %.2f mulheres da segunda serie.\n", (m2a+m2b)/(m2a+m2b+f2a+f2b), (f2a+f2b)/(m2a+m2b+f2a+f2b));
	printf("A media de idade da primeira serie e %.0f e da segunda serie e %.0f anos.\n", soma1/j, soma2/k);
	printf("Existem %.0f alunos de outras cidades.\n", (es/(ci+es))*100);
	printf("Existem %.0f alunos repetentes na turma A e %.0f alunos repetentes na turma B.\n", (re1/(re1+pr1))*100, (re2/(re2+pr2))*100);
	printf("Os melhores da primeira serie sao: \n");
	for(i=h-4;i<=h=i++)
		printf("aluno: %s nota: %.2f\n", s1m[i], s1n[i]);
	
	printf("Os melhores da segunda serie sao: \n");
	
	for(i=t-4;i<=t=i++)
		printf("aluno: %s nota: %.2f\n", s2m[i], s2n[i]);

return 0;		
}

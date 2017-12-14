//Exercício 17 - Capítulo 4 - Pág 96 - Livro: Lógica de Programação - Forbellone

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct onibus
{
	char de[20], para[20];
	int dia, mes, ano, lin;
	float hora, min, dis;
	struct polt
	{
		int npas, npol;
		char nome[50], sex[2];
	};
	struct polt pol[44];
};
struct onibus bus[10];

int main ()
{
	int l, i, j, cont=0, mas=0, fem=0, cor=0, jan=0, vaz=0, poltt[10][44];
	float t1, t2, hc, mc, pv;
	
	printf("Digite o numero da linha: \n");
	scanf("%d\n", &l);
	printf("O horario de saida e: %.0f : %.0f H, e a distancia percorrida e de %.0f Km\n", bus[l].hora, bus[l].min, bus[l].dis);
	
	t1=floor(bus[l].dis/60);
	t2=((bus[l].dis/60)-t1)*60;
	
	if(bus[l].min+t2>=60)
		{
		hc=bus[l].hora+t1+1;
		mc=(bus[l].min+t2)-60;
		}
		
	printf("A duracao da viagem e de %.0f H e %.0f M. A chegada é prevista para %.0f H e %.0f M.\n", bus[l].hora, bus[l].min, hc, mc);
	
	for(j=1;j<=44;j++)
		if(bus[l].pol[j].npas>0)
			cont++;
	
	pv=44-cont;
	
	printf("O onibus esta com %.0f% de ocupacao possuindo %.0f poltronas livres.\n", ((44-pv)/44)*100, pv);
	
	for(j=0;j<=44;j++)
		{
		if(strcmp(bus[l].pol[j].sex,"m")==0)
			mas++;
		else
			fem++;
		}
	
	printf("Existem %.0f% de passageiros do sexo masculino e %.0f% de passageiros do sexo feminino.\n", (mas/(mas+fem))*100, 100-((mas/(mas+fem))*100));
			
	cont=0;
	
	printf("As seguintes linhas estao lotadas: \n");
	
	for(i=0;i<10;i++)
	{
		for(j=1;j<=44;j++)
			if(bus[i].pol[j].npas>0)
				cont++;
		
		if(cont=43)
			printf("Linha %d esta lotada.\n", bus[i].lin);
		
		cont=0;
	}
	
		
	for(i=0;i<10;i++)
	{
		for(j=1;j<=44;j++)
		{
			if(bus[i].pol[j].npas>0)
			{
				if(bus[i].pol[j].npol%2==0)
					cor++;
				else
					jan++;
			}
			else
				vaz++;
		}
		
	}
	printf("Existem %d% de janelas ocupadas e %d% de corredores ocupados e 	%d poltronas livres.\n", (jan*100)/440, 440-((jan*100)/400), jan);
	
	return 0;
}

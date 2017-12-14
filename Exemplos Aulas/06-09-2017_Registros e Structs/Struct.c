#include <stdio.h>

typedef struct{
	char nome[20];
	char destino[50];
	char partida[50];
	int poltrona;
	int idade;
	int num;
	float valor;
	int semana[3][3];
}PASSAGEM;

int main(){
	
	PASSAGEM L1[50], L2[30];
	
	int i, contM=0, contm=0;//contM=> cont maior, contm=> conte menor;
	
	for ( i=0; i<50; i++){
		scanf("%d%d%d%f", &L1[i].poltrona, &L1[i].idade, &L1[i].num, &L1[i].valor);
		for ( int j=0; j<3; j++){
			for ( int k=0; k<3; k++){
				scanf("%d", &L1[i].semana[i][k]);
			}
		}
		gets(L1[i].nome);
		gets(L1[i].destino);
		gets(L1[i].partida);
	}
	//Criar outro for por questão de estetica, pode ser usar o anterior;
	
	for ( i=0; i<50; i++){
		if ( L1[i].idade < 18)
			contm=cont+1;
		else 
			contM++;
	}
	printf("!");
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "ManipulaArquivos.h"

#define TAM 50

#ifndef CriarEntradas
#define CriarEntradas

void gera_dado(FILE *fp);

#endif

void gera_dado(FILE *fp){
	long int cont=0;
		
	srand(time(NULL));
	
	char v[]={
	'a','A','b','B','c','C','d','D','e','E','f','F',
	'g','G','h','H','i','I','j','J','k','K','l','L',
	'm','M','n','N','o','O','p','P','q','Q','r','R',
	's','S','t','T','u','U','v','V','w','W','x','X',
	'y','Y','z','Z'
	};
	
	//Gerando e inicializando o vetor de controle com 1milhão de entradas
	long int *c=(long int*)malloc(sizeof(long int)*1000000);
	for(int i=0;i<1000000;i++)
		c[i]=0;
	
	//abre o arquivo
	fp=fopen(url,"w");
	
	//variáveis de controle do código
	int x=300, y=0, z=32500, fim;
	char mail[10];
	
	//loop para criação das entradas
	for(int i=0;i<100000;i++){
		
		strcpy(mail,"@email.com");
		
		y=rand()%RAND_MAX;
		
		//Garantindo que não haja valores repetidos
		if(c[y]==0){
			c[y]=1;
			if(fp!=NULL){
				fprintf(fp,"%d\t",y);
			}
		}else if(c[y]!=0){
			long int w=y;
			while(c[w]!=0||w<100000){
				w++;
			}
			c[w]=1;
			if(fp!=NULL){
				fprintf(fp,"%d\t",w);
			}
		}
		
		int t;
		
		//Geração e gravação do nome
		char aux[50], aux1[50], aux2[50];
		fim=5+rand()%25;
		for(t=0;t<fim;t++){
			aux[t]=v[rand()%51];
		}
		
		aux[t]='\0';
		//printf("%s\t%d\n",aux,i);
		grava_dados(fp,aux);
		
		//Geração e gravação do email
		strcpy(aux1,aux);
		strcat(aux1,mail);
		grava_dados(fp,aux1);
		
		//Geração e gravação da senha
		fim=5+rand()%25;
		for(t=0;t<fim;t++){
			aux2[t]=v[rand()%51];
		}
		
		aux[t]='\0';
		grava_senha(fp,aux2);
	}
	
	fecha_arquivo(fp);
	free(c);
}

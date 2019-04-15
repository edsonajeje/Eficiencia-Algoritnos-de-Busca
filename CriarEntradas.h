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
				printf("y=%d\t",y);
			}
		}else{
			long int w=y;
			w+=rand()%300;
			while(c[w]!=0&&w<1000000){
				w+=1;
			}
			c[w]=1;
			if(fp!=NULL){
				fprintf(fp,"%d\t",w);
				printf("w=%d\t",w);
			}
		}
	}
	
	free(c);
}

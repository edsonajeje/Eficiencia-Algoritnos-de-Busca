#include <stdio.h>

char url[]="entrada.txt";

#ifndef ManipulaArquivos
#define ManipulaArquivos


//Protótipos das funções
FILE abre_arquivo(FILE *fp);
void grava_dados(FILE *fp, char a[]);
void grava_senha(FILE *fp, char a[]);

void fecha_arquivo(FILE *fp);

#endif


FILE abre_arquivo(FILE *fp){
	fp=fopen(url,"w");
	if(fp!=NULL)
		printf("Abriu\n");
	return *fp;
}

void grava_dados(FILE *fp, char a[]){
	//abre_arquivo(fp);
	if(fp!=NULL){
		fprintf(fp,"%s\t",a);
	}else{
		printf("Erro ao Gravar os Dados!\n");
	}
}

void grava_senha(FILE *fp, char a[]){
	//abre_arquivo(fp);
	if(fp!=NULL){
		fprintf(fp,"%s\n",a);
	}else{
		printf("Erro ao Gravar os Dados!\n");
	}
}

void fecha_arquivo(FILE *fp){
	int r=fclose(fp);
	if(r==0)
		printf("Arquivo Fechado\n");
}

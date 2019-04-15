#include<stdlib.h>
#include<string.h>

#ifndef CriarVetor
#define CriarVetor

typedef struct usuario{
	long int cod;
	char nome[TAM];
	char email[TAM];
	char senha[TAM];
}User;

User *a=(User*)malloc(100000*sizeof(User));

void abastecer(User a[], FILE *fp);

#endif

void abastecer(User a[], FILE *fp){
	printf("entrou no abastecer\n");
	int i=0;
	fp=fopen(url,"r");
	if(fp == NULL){
		printf("\nErro na abertura do arquivo!");
		exit(1);
	}else {
		while(!feof(fp)){
			fscanf(fp,"%d %s %s %s",&a[i].cod, &a[i].nome, &a[i].email, &a[i].senha);
			i++;
		}
		fecha_arquivo(fp);
	}
}

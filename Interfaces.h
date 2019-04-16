#include "Bibliotecas.h"



#ifndef Interfaces
#define Interfaces

int iniciar();

#endif



int iniciar(){
	int qtd=150;
	
	struct timeval inicio, fim;
	double tmili_seq, tmili_bin;
	int chave;
	
	tmili_seq=-1; tmili_bin=0;
	
	srand(time(NULL));
	long int cod=rand()%RAND_MAX;
	
	User *vet_temp=(User*)malloc(100000*sizeof(User));
	
	//sequencial X binaria & BubbleSort
	while(tmili_seq<=tmili_bin){
		for(int i=0;i<qtd;i++){
			cod=rand()%RAND_MAX;
			printf("Entrou no for vez %d\n",i);
			vet_temp[i].cod=a[cod].cod;
			strcpy(vet_temp[i].nome,a[cod].nome);
			strcpy(vet_temp[i].email,a[cod].email);
			strcpy(vet_temp[i].senha,a[cod].senha);
			
			printf("%d\t",vet_temp[i].cod);
			if(qtd<999999)
				cod+=((rand()%RAND_MAX)/3)/1000;
			else
				cod=999999;
		}
		
		chave=vet_temp[rand()%cod].cod;
		
		//busca sequencial
		gettimeofday(&inicio,NULL);
		sequencial(vet_temp,chave,qtd);
		//printf("Saiu sequencial\n");
		gettimeofday(&fim,NULL);
		tmili_seq=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
		
		//busca binaria
		gettimeofday(&inicio,NULL);
		bubble(vet_temp,qtd);
		//printf("Saiu bubble\n");
		binaria(vet_temp,chave,qtd);
		//printf("Saiu binaria\n");
		gettimeofday(&fim,NULL);
		tmili_bin=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
		
		printf("Sequencial = %lf\tBinaria = %lf",tmili_seq, tmili_bin);
		
		free(vet_temp);
		qtd+=100;
	}
}

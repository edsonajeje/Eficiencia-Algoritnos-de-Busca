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
	
	//sequencial X binaria & BubbleSort
	while(tmili_seq<=tmili_bin){
		User *vet_temp=(User*)malloc(qtd*sizeof(User));
		for(int i=0;i<qtd;i++){
			vet_temp[i]=a[cod];
			if(qtd<90000)
				cod+=rand()%RAND_MAX/3;
			else
				cod+=rand()%1000;
		}
		
		chave=vet_temp[rand()%cod].cod;
		
		//busca sequencial
		gettimeofday(&inicio,NULL);
		sequencial(vet_temp,chave,qtd);
		gettimeofday(&fim,NULL);
		tmili_seq=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
		
		//busca binaria
		gettimeofday(&inicio,NULL);
		bubble(vet_temp,qtd);
		binaria(vet_temp,chave,qtd);
		gettimeofday(&fim,NULL);
		tmili_bin=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
		
		printf("Sequencial = %lf\tBinaria = %lf",tmili_seq, tmili_bin);
		
		free(vet_temp);
		qtd+=100;
	}
}

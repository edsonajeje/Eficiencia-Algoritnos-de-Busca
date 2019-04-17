#include "Bibliotecas.h"



#ifndef Interfaces
#define Interfaces


void seq_bin_bubble();
void seq_bin_insertion();
void seq_bin_merge();
void seq_bin_quick();
void seq_bin_selection();
void seq_bin_shell();


void iniciar();

#endif

void seq_bin_bubble(){
	int qtd=1000;
	
	struct timeval inicio, fim;
	double tmili_seq, tmili_bin;
	
	tmili_seq=-1; tmili_bin=0;
	
	srand(time(NULL));
	long int cod;

	User *vet_temp=(User*)malloc(100000*sizeof(User));
	User *vet_temp2=(User*)malloc(100000*sizeof(User));
	
	for(int i=0;i<100000;i++){
		vet_temp[i].cod=a[i].cod;
		strcpy(vet_temp[i].nome,a[i].nome);
		strcpy(vet_temp[i].email,a[i].email);
		strcpy(vet_temp[i].senha,a[i].senha);
		
		vet_temp2[i].cod=a[i].cod;
		strcpy(vet_temp2[i].nome,a[i].nome);
		strcpy(vet_temp2[i].email,a[i].email);
		strcpy(vet_temp2[i].senha,a[i].senha);
	}
	
	//sequencial X binaria & BubbleSort
	while(tmili_seq<=tmili_bin){
		int chave[qtd];
		int cont=0, y;
		
		for(int i=0;i<qtd;i++){
			y=rand()%RAND_MAX*3;
			if(y>RAND_MAX&&y<100000){
				chave[i]=y;
			}else{
				chave[i]=rand()%RAND_MAX;
			}
		}
		
		//Ordena��o
		gettimeofday(&inicio,NULL);
		bubble(vet_temp2,100000);
		gettimeofday(&fim,NULL);
		tmili_bin=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
			
		for(cont;cont<qtd;cont++){
						
			//busca sequencial
			gettimeofday(&inicio,NULL);
			sequencial(vet_temp,chave[cont],qtd);
			gettimeofday(&fim,NULL);
			tmili_seq=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
			
			//busca binaria
			gettimeofday(&inicio,NULL);
			binaria(vet_temp2,chave[cont],qtd);
			gettimeofday(&fim,NULL);
			tmili_bin+=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
			
			printf("QTD = %d\tSequencial = %lf\tBinaria = %lf\n",qtd, tmili_seq, tmili_bin);
		
		}
		
		qtd+=1000;
	}
}


void seq_bin_insertion(){
	int qtd=100;
	
	struct timeval inicio, fim;
	double tmili_seq, tmili_bin;
	
	tmili_seq=-1; tmili_bin=0;
	
	srand(time(NULL));
	long int cod;

	User *vet_temp=(User*)malloc(100000*sizeof(User));
	User *vet_temp2=(User*)malloc(100000*sizeof(User));
	
	for(int i=0;i<100000;i++){
		vet_temp[i].cod=a[i].cod;
		strcpy(vet_temp[i].nome,a[i].nome);
		strcpy(vet_temp[i].email,a[i].email);
		strcpy(vet_temp[i].senha,a[i].senha);
		
		vet_temp2[i].cod=a[i].cod;
		strcpy(vet_temp2[i].nome,a[i].nome);
		strcpy(vet_temp2[i].email,a[i].email);
		strcpy(vet_temp2[i].senha,a[i].senha);
	}
	
	//sequencial X binaria & BubbleSort
	while(tmili_seq<=tmili_bin){
		int chave[qtd];
		int cont=0, y;
		
		for(int i=0;i<qtd;i++){
			y=rand()%RAND_MAX*3;
			if(y>RAND_MAX&&y<100000){
				chave[i]=y;
			}else{
				chave[i]=rand()%RAND_MAX;
			}
		}
		
		//Ordena��o
		gettimeofday(&inicio,NULL);
		insertion(vet_temp2,100000);
		gettimeofday(&fim,NULL);
		tmili_bin=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
			
		while(cont<qtd){
						
			//busca sequencial
			gettimeofday(&inicio,NULL);
			sequencial(vet_temp,chave[cont],qtd);
			gettimeofday(&fim,NULL);
			tmili_seq=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
			
			//busca binaria
			gettimeofday(&inicio,NULL);
			binaria(vet_temp2,chave[cont],qtd);
			gettimeofday(&fim,NULL);
			tmili_bin+=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
			
			printf("QTD = %d\tSequencial = %lf\tBinaria = %lf\n",qtd, tmili_seq, tmili_bin);
			
			cont++;
		}
		
		qtd+=50;
	}
}

void seq_bin_merge(){
	int qtd=100;
	
	struct timeval inicio, fim, inicio1, fim1;
	double tmili_seq, tmili_bin;
	clock_t ini, f;
	
	tmili_seq=-1; tmili_bin=0;
	
	srand(time(NULL));
	long int cod;

	User *vet_temp=(User*)malloc(100000*sizeof(User));
	User *vet_temp2=(User*)malloc(100000*sizeof(User));
	
	for(int i=0;i<100000;i++){
		vet_temp[i].cod=a[i].cod;
		strcpy(vet_temp[i].nome,a[i].nome);
		strcpy(vet_temp[i].email,a[i].email);
		strcpy(vet_temp[i].senha,a[i].senha);
		
		vet_temp2[i].cod=a[i].cod;
		strcpy(vet_temp2[i].nome,a[i].nome);
		strcpy(vet_temp2[i].email,a[i].email);
		strcpy(vet_temp2[i].senha,a[i].senha);
	}
	
	//sequencial X binaria & BubbleSort
	while(tmili_seq<=tmili_bin){
		int chave[qtd];
		int cont=0, y;
		
		for(int i=0;i<qtd;i++){
			y=rand()%RAND_MAX*3;
			if(y>RAND_MAX&&y<100000){
				chave[i]=y;
			}else{
				chave[i]=rand()%RAND_MAX;
			}
		}
		
		//Ordena��o
		//gettimeofday(&inicio,NULL);
		ini=clock();
		mergeSort(vet_temp2,0,100000);
		//gettimeofday(&fim,NULL);
		f=clock();
		//tmili_bin=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
		tmili_bin=(f-ini)/1000;
			
		for(cont;cont<qtd;cont++){
						
			//busca sequencial
			//gettimeofday(&inicio1,NULL);
			ini=clock();
			sequencial(vet_temp,chave[cont],qtd);
			//gettimeofday(&fim1,NULL);
			f=clock();
			tmili_seq=(f-ini)/1000;//(1000*(fim1.tv_sec-inicio1.tv_sec)+(fim1.tv_usec-inicio1.tv_usec)/1000);
			
			//busca binaria
			//gettimeofday(&inicio,NULL);
			ini=clock();
			binaria(vet_temp2,chave[cont],qtd);
			//gettimeofday(&fim,NULL);
			f=clock();
			tmili_bin+=(f-ini)/1000;//(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
			
			//printf("QTD = %d\tSequencial = %lf\tBinaria = %lf\n",qtd, tmili_seq, tmili_bin);
		
		}
		
		qtd+=50;
		printf("QTD = %d\tSequencial = %lf\tBinaria = %lf\n",qtd, tmili_seq, tmili_bin);
	}
}
void seq_bin_quick(){
	int qtd=100;
	
	struct timeval inicio, fim;
	double tmili_seq, tmili_bin;
	
	tmili_seq=-1; tmili_bin=0;
	
	srand(time(NULL));
	long int cod;

	User *vet_temp=(User*)malloc(100000*sizeof(User));
	User *vet_temp2=(User*)malloc(100000*sizeof(User));
	
	for(int i=0;i<100000;i++){
		vet_temp[i].cod=a[i].cod;
		strcpy(vet_temp[i].nome,a[i].nome);
		strcpy(vet_temp[i].email,a[i].email);
		strcpy(vet_temp[i].senha,a[i].senha);
		
		vet_temp2[i].cod=a[i].cod;
		strcpy(vet_temp2[i].nome,a[i].nome);
		strcpy(vet_temp2[i].email,a[i].email);
		strcpy(vet_temp2[i].senha,a[i].senha);
	}
	
	//sequencial X binaria & BubbleSort
	while(tmili_seq<=tmili_bin){
		int chave[qtd];
		int cont=0, y;
		
		for(int i=0;i<qtd;i++){
			y=rand()%RAND_MAX*3;
			if(y>RAND_MAX&&y<100000){
				chave[i]=y;
			}else{
				chave[i]=rand()%RAND_MAX;
			}
		}
		
		//Ordena��o
		gettimeofday(&inicio,NULL);
		quicksort(vet_temp2,0,100000);
		gettimeofday(&fim,NULL);
		tmili_bin=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
			
		while(cont<qtd){
						
			//busca sequencial
			gettimeofday(&inicio,NULL);
			sequencial(vet_temp,chave[cont],qtd);
			gettimeofday(&fim,NULL);
			tmili_seq=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
			
			//busca binaria
			gettimeofday(&inicio,NULL);
			binaria(vet_temp2,chave[cont],qtd);
			gettimeofday(&fim,NULL);
			tmili_bin+=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
			
			printf("QTD = %d\tSequencial = %lf\tBinaria = %lf\n",qtd, tmili_seq, tmili_bin);
			
			cont++;
		}
		
		qtd+=50;
	}
}

void seq_bin_selection(){
	int qtd=100;
	
	struct timeval inicio, fim;
	double tmili_seq, tmili_bin;
	
	tmili_seq=-1; tmili_bin=0;
	
	srand(time(NULL));
	long int cod;

	User *vet_temp=(User*)malloc(100000*sizeof(User));
	User *vet_temp2=(User*)malloc(100000*sizeof(User));
	
	for(int i=0;i<100000;i++){
		vet_temp[i].cod=a[i].cod;
		strcpy(vet_temp[i].nome,a[i].nome);
		strcpy(vet_temp[i].email,a[i].email);
		strcpy(vet_temp[i].senha,a[i].senha);
		
		vet_temp2[i].cod=a[i].cod;
		strcpy(vet_temp2[i].nome,a[i].nome);
		strcpy(vet_temp2[i].email,a[i].email);
		strcpy(vet_temp2[i].senha,a[i].senha);
	}
	
	//sequencial X binaria & BubbleSort
	while(tmili_seq<=tmili_bin){
		int chave[qtd];
		int cont=0, y;
		
		for(int i=0;i<qtd;i++){
			y=rand()%RAND_MAX*3;
			if(y>RAND_MAX&&y<100000){
				chave[i]=y;
			}else{
				chave[i]=rand()%RAND_MAX;
			}
		}
		
		//Ordena��o
		gettimeofday(&inicio,NULL);
		selection(vet_temp2,100000);
		gettimeofday(&fim,NULL);
		tmili_bin=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
			
		while(cont<qtd){
						
			//busca sequencial
			gettimeofday(&inicio,NULL);
			sequencial(vet_temp,chave[cont],qtd);
			gettimeofday(&fim,NULL);
			tmili_seq=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
			
			//busca binaria
			gettimeofday(&inicio,NULL);
			binaria(vet_temp2,chave[cont],qtd);
			gettimeofday(&fim,NULL);
			tmili_bin+=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
			
			printf("QTD = %d\tSequencial = %lf\tBinaria = %lf\n",qtd, tmili_seq, tmili_bin);
			
			cont++;
		}
		
		qtd+=50;
	}
}

void seq_bin_shell(){
	int qtd=100;
	
	struct timeval inicio, fim;
	double tmili_seq, tmili_bin;
	
	tmili_seq=-1; tmili_bin=0;
	
	srand(time(NULL));
	long int cod;

	User *vet_temp=(User*)malloc(100000*sizeof(User));
	User *vet_temp2=(User*)malloc(100000*sizeof(User));
	
	for(int i=0;i<100000;i++){
		vet_temp[i].cod=a[i].cod;
		strcpy(vet_temp[i].nome,a[i].nome);
		strcpy(vet_temp[i].email,a[i].email);
		strcpy(vet_temp[i].senha,a[i].senha);
		
		vet_temp2[i].cod=a[i].cod;
		strcpy(vet_temp2[i].nome,a[i].nome);
		strcpy(vet_temp2[i].email,a[i].email);
		strcpy(vet_temp2[i].senha,a[i].senha);
	}
	
	//sequencial X binaria & BubbleSort
	while(tmili_seq<=tmili_bin){
		int chave[qtd];
		int cont=0, y;
		
		for(int i=0;i<qtd;i++){
			y=rand()%RAND_MAX*3;
			if(y>RAND_MAX&&y<100000){
				chave[i]=y;
			}else{
				chave[i]=rand()%RAND_MAX;
			}
		}
		
		//Ordena��o
		gettimeofday(&inicio,NULL);
		shell(vet_temp2,100000);
		gettimeofday(&fim,NULL);
		tmili_bin=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
			
		while(cont<qtd){
						
			//busca sequencial
			gettimeofday(&inicio,NULL);
			sequencial(vet_temp,chave[cont],qtd);
			gettimeofday(&fim,NULL);
			tmili_seq=(1000000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000000);
			
			//busca binaria
			gettimeofday(&inicio,NULL);
			binaria(vet_temp2,chave[cont],qtd);
			gettimeofday(&fim,NULL);
			tmili_bin+=(1000000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000000);
			
			//printf("QTD = %d\tSequencial = %lf\tBinaria = %lf\n",qtd, tmili_seq, tmili_bin);
			
			cont++;
		}
		
		qtd+=50;
		printf("QTD = %d\tSequencial = %lf\tBinaria = %lf\n",qtd, tmili_seq, tmili_bin);
	}
}

void iniciar(){
	//seq_bin_bubble();
	//seq_bin_insertion();
	//seq_bin_merge();
	//seq_bin_quick();
	//seq_bin_selection();
	seq_bin_shell();
}

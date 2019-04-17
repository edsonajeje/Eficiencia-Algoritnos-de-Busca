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
	int chave;
	
	tmili_seq=-1; tmili_bin=0;
	
	srand(time(NULL));
	long int cod;
	
	User *vet_temp=(User*)malloc(100000*sizeof(User));
	
	//sequencial X binaria & BubbleSort
	while(tmili_seq<=tmili_bin){
		cod=rand()%RAND_MAX;
		for(int i=0;i<qtd;i++){
			vet_temp[i].cod=a[cod].cod;
			strcpy(vet_temp[i].nome,a[cod].nome);
			strcpy(vet_temp[i].email,a[cod].email);
			strcpy(vet_temp[i].senha,a[cod].senha);
			
			if(qtd<999999)
				cod+=((rand()%RAND_MAX)/1000)/100;
			else
				cod=999999;
		}
		
		chave=rand()%RAND_MAX;
		
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
		
		printf("QTD = %d\tSequencial = %lf\tBinaria = %lf\n",qtd, tmili_seq, tmili_bin);
		
		//free(vet_temp);
		qtd+=1000;
	}
}


void seq_bin_insertion(){
	int qtd=100;
	
	struct timeval inicio, fim;
	double tmili_seq, tmili_bin;
	int chave;
	
	tmili_seq=-1; tmili_bin=0;
	
	srand(time(NULL));
	long int cod;
	
	User *vet_temp=(User*)malloc(100000*sizeof(User));
	
	//sequencial X binaria & InsertionSort
	while(tmili_seq<=tmili_bin){
		cod=rand()%RAND_MAX;
		for(int i=0;i<qtd;i++){
			vet_temp[i].cod=a[cod].cod;
			strcpy(vet_temp[i].nome,a[cod].nome);
			strcpy(vet_temp[i].email,a[cod].email);
			strcpy(vet_temp[i].senha,a[cod].senha);
			
			if(qtd<999999)
				cod+=((rand()%RAND_MAX)/1000)/100;
			else
				cod=999999;
		}
		
		chave=rand()%RAND_MAX;
		
		//busca sequencial
		gettimeofday(&inicio,NULL);
		sequencial(vet_temp,chave,qtd);
		//printf("Saiu sequencial\n");
		gettimeofday(&fim,NULL);
		tmili_seq=((fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec));
		
		//busca binaria
		gettimeofday(&inicio,NULL);
		insertion(vet_temp,qtd);
		//printf("Saiu bubble\n");
		binaria(vet_temp,chave,qtd);
		//printf("Saiu binaria\n");
		gettimeofday(&fim,NULL);
		tmili_bin=((fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec));
		
		printf("QTD = %d\tSequencial = %lf\tBinaria = %lf\n",qtd, tmili_seq, tmili_bin);
		
		//free(vet_temp);
		qtd+=50;
	}
}

void seq_bin_merge(){
	int qtd=1000;
	
	struct timeval inicio, fim;
	double tmili_seq, tmili_bin;
	int chave;
	
	tmili_seq=-1; tmili_bin=0;
	
	srand(time(NULL));
	long int cod;
	
	User *vet_temp=(User*)malloc(100000*sizeof(User));
	
	//sequencial X binaria & BubbleSort
	while(tmili_seq<=tmili_bin){
		cod=rand()%RAND_MAX;
		for(int i=0;i<qtd;i++){
			vet_temp[i].cod=a[cod].cod;
			strcpy(vet_temp[i].nome,a[cod].nome);
			strcpy(vet_temp[i].email,a[cod].email);
			strcpy(vet_temp[i].senha,a[cod].senha);
			
			if(qtd<999999)
				cod+=((rand()%RAND_MAX)/1000)/100;
			else
				cod=999999;
		}
		
		chave=rand()%RAND_MAX;
		
		//busca sequencial
		gettimeofday(&inicio,NULL);
		sequencial(vet_temp,chave,qtd);
		//printf("Saiu sequencial\n");
		gettimeofday(&fim,NULL);
		tmili_seq=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
		
		//busca binaria
		gettimeofday(&inicio,NULL);
		mergeSort(vet_temp,0,qtd);
		//printf("Saiu bubble\n");
		binaria(vet_temp,chave,qtd);
		//printf("Saiu binaria\n");
		gettimeofday(&fim,NULL);
		tmili_bin=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
		
		printf("QTD = %d\tSequencial = %lf\tBinaria = %lf\n",qtd, tmili_seq, tmili_bin);
		
		//free(vet_temp);
		qtd+=1000;
	}
}
void seq_bin_quick(){
	int qtd=1000;
	
	struct timeval inicio, fim;
	double tmili_seq, tmili_bin;
	int chave;
	
	tmili_seq=-1; tmili_bin=0;
	
	srand(time(NULL));
	long int cod;
	
	User *vet_temp=(User*)malloc(100000*sizeof(User));
	
	//sequencial X binaria & BubbleSort
	while(tmili_seq<=tmili_bin){
		cod=rand()%RAND_MAX;
		for(int i=0;i<qtd;i++){
			vet_temp[i].cod=a[cod].cod;
			strcpy(vet_temp[i].nome,a[cod].nome);
			strcpy(vet_temp[i].email,a[cod].email);
			strcpy(vet_temp[i].senha,a[cod].senha);
			
			if(qtd<999999)
				cod+=((rand()%RAND_MAX)/1000)/100;
			else
				cod=999999;
		}
		
		chave=rand()%RAND_MAX;
		
		//busca sequencial
		gettimeofday(&inicio,NULL);
		sequencial(vet_temp,chave,qtd);
		//printf("Saiu sequencial\n");
		gettimeofday(&fim,NULL);
		tmili_seq=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
		
		//busca binaria
		gettimeofday(&inicio,NULL);
		quicksort(vet_temp,0,qtd);
		//printf("Saiu bubble\n");
		binaria(vet_temp,chave,qtd);
		//printf("Saiu binaria\n");
		gettimeofday(&fim,NULL);
		tmili_bin=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
		
		printf("QTD = %d\tSequencial = %lf\tBinaria = %lf\n",qtd, tmili_seq, tmili_bin);
		
		//free(vet_temp);
		qtd+=1000;
	}
}

void seq_bin_selection(){
	int qtd=1000;
	
	struct timeval inicio, fim;
	double tmili_seq, tmili_bin;
	int chave;
	
	tmili_seq=-1; tmili_bin=0;
	
	srand(time(NULL));
	long int cod;
	
	User *vet_temp=(User*)malloc(100000*sizeof(User));
	
	//sequencial X binaria & BubbleSort
	while(tmili_seq<=tmili_bin){
		cod=rand()%RAND_MAX;
		for(int i=0;i<qtd;i++){
			vet_temp[i].cod=a[cod].cod;
			strcpy(vet_temp[i].nome,a[cod].nome);
			strcpy(vet_temp[i].email,a[cod].email);
			strcpy(vet_temp[i].senha,a[cod].senha);
			
			if(qtd<999999)
				cod+=((rand()%RAND_MAX)/1000)/100;
			else
				cod=999999;
		}
		
		chave=rand()%RAND_MAX;
		
		//busca sequencial
		gettimeofday(&inicio,NULL);
		sequencial(vet_temp,chave,qtd);
		//printf("Saiu sequencial\n");
		gettimeofday(&fim,NULL);
		tmili_seq=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
		
		//busca binaria
		gettimeofday(&inicio,NULL);
		selection(vet_temp,qtd);
		//printf("Saiu bubble\n");
		binaria(vet_temp,chave,qtd);
		//printf("Saiu binaria\n");
		gettimeofday(&fim,NULL);
		tmili_bin=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
		
		printf("QTD = %d\tSequencial = %lf\tBinaria = %lf\n",qtd, tmili_seq, tmili_bin);
		
		//free(vet_temp);
		qtd+=1000;
	}
}

void seq_bin_shell(){
	int qtd=1000;
	
	struct timeval inicio, fim;
	double tmili_seq, tmili_bin;
	int chave;
	
	tmili_seq=-1; tmili_bin=0;
	
	srand(time(NULL));
	long int cod;
	
	User *vet_temp=(User*)malloc(100000*sizeof(User));
	
	//sequencial X binaria & BubbleSort
	while(tmili_seq<=tmili_bin){
		cod=rand()%RAND_MAX;
		for(int i=0;i<qtd;i++){
			vet_temp[i].cod=a[cod].cod;
			strcpy(vet_temp[i].nome,a[cod].nome);
			strcpy(vet_temp[i].email,a[cod].email);
			strcpy(vet_temp[i].senha,a[cod].senha);
			
			if(qtd<999999)
				cod+=((rand()%RAND_MAX)/1000)/100;
			else
				cod=999999;
		}
		
		chave=rand()%RAND_MAX;
		
		//busca sequencial
		gettimeofday(&inicio,NULL);
		sequencial(vet_temp,chave,qtd);
		//printf("Saiu sequencial\n");
		gettimeofday(&fim,NULL);
		tmili_seq=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
		
		//busca binaria
		gettimeofday(&inicio,NULL);
		shell(vet_temp,qtd);
		//printf("Saiu bubble\n");
		binaria(vet_temp,chave,qtd);
		//printf("Saiu binaria\n");
		gettimeofday(&fim,NULL);
		tmili_bin=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
		
		printf("QTD = %d\tSequencial = %lf\tBinaria = %lf\n",qtd, tmili_seq, tmili_bin);
		
		//free(vet_temp);
		qtd+=1000;
	}
}

void iniciar(){
	seq_bin_bubble();
	//seq_bin_insertion();
	/*seq_bin_merge();
	seq_bin_quick();
	seq_bin_selection();
	seq_bin_shell();*/
}

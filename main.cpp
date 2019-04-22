
#include "Bibliotecas.h"
#include "Interfaces.h"

FILE *fp;
	

main(){
	
	//gera_dado(fp);
	
	abastecer(a,fp);
	
	iniciar();
	/*
	int qtd=100, y;
	
	int *chave=(int*)malloc(100000*sizeof(int));
	
	clock_t t;
	struct timeval inicio, fim;
	double tmili_seq=0, tmili_bin=0,tmili_seq2=0, tmili_bin2=0;
	
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
	
	for(int i=0;i<qtd;i++){
		y=rand()%RAND_MAX*3;
		if(y>RAND_MAX&&y<100000){
			chave[i]=y;
		}else{
			chave[i]=rand()%RAND_MAX;
		}
	}
	
	//sequencial X binaria & BubbleSort
	while(tmili_seq<=tmili_bin){
		int cont=0;
		
		y=rand()%RAND_MAX*3;
		if(y>RAND_MAX&&y<100000){
			chave[qtd-1]=y;
		}else{
			chave[qtd-1]=rand()%RAND_MAX;
		}
		
		
		//Ordenação
		gettimeofday(&inicio,NULL);
		selection(vet_temp2,100000);
		gettimeofday(&fim,NULL);
		tmili_bin=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
			
		while(cont<qtd){
						
			//busca sequencial
			gettimeofday(&inicio,NULL);
			t=clock();
			sequencial(vet_temp,cont,chave,qtd);
			gettimeofday(&fim,NULL);
			t=clock()-t;
			tmili_seq+=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
			tmili_seq2+=((float)t)/CLOCKS_PER_SEC;
			
			
			//busca binaria
			gettimeofday(&inicio,NULL);
			t=clock();
			binaria(vet_temp2,cont,chave,qtd);
			gettimeofday(&fim,NULL);
			t=clock()-t;
			tmili_bin+=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
			tmili_bin2+=((float)t)/CLOCKS_PER_SEC;
			
			cont++;
			if(tmili_seq>tmili_bin)
				break;
		}
		qtd+=50;
		printf("QTD = %d\tSequencial = %lf\tBinaria = %lf\nQTD = %d\tSequencial = %lf\tBinaria = %lf\n\n",qtd, tmili_seq, tmili_bin,qtd, tmili_seq2, tmili_bin2);
	}
	free(vet_temp);
	free(vet_temp2);
	free(chave);*/
}






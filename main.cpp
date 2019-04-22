
#include "Bibliotecas.h"
#include "Interfaces.h"

FILE *fp;
	

main(){
	
	//gera_dado(fp);
	
	abastecer(a,fp);
	
	iniciar();
	
	/*int qtd=1000;
	
//	struct timeval inicio, fim;
	
	clock_t t;
		struct timeval inicio, fim;
	float aux, aux2, tmili_seq, tmili_bin, tmili_seq2, tmili_bin2;
	bool achou=false;
	
	tmili_seq=-1; tmili_bin=0;
	
	srand(time(NULL));
	long int cod;

	User *vet_temp=(User*)malloc(100000*sizeof(User));
	User *vet_temp2=(User*)malloc(100000*sizeof(User));
	
	for(int i=0;i<100000;i++){
		//printf("For copiar vetor vez %d\t",i);
		vet_temp[i].cod=a[i].cod;
		strcpy(vet_temp[i].nome,a[i].nome);
		strcpy(vet_temp[i].email,a[i].email);
		strcpy(vet_temp[i].senha,a[i].senha);
		
		vet_temp2[i].cod=a[i].cod;
		strcpy(vet_temp2[i].nome,a[i].nome);
		strcpy(vet_temp2[i].email,a[i].email);
		strcpy(vet_temp2[i].senha,a[i].senha);
	}
	printf("\nSaiu do for\n");
	//Ordenação
	t=clock();
	shell(vet_temp2,100000);
	printf("Saiu do shell\n");
	t=clock()-t;
	aux=((float)t)/CLOCKS_PER_SEC;
	
	int vez=1;
	int cont=0, y;
	//sequencial X binaria & BubbleSort
	while(tmili_seq<=tmili_bin){
		cont=0;
		//printf("Entrou no 1 while vez %d\t",vez);
		int chave[qtd];
		
		for(int i=0;i<qtd;i++){
			y=rand()%RAND_MAX*3;
			if(y>RAND_MAX&&y<100000){
				chave[i]=y;
			}else{
				chave[i]=rand()%RAND_MAX;
			}
		}
			
		for(cont;cont<qtd;cont++){
			//printf("Entrou no for das comparações vez %d",cont);
			//busca sequencial
			gettimeofday(&inicio,NULL);
			t=clock();
			achou=sequencial(vet_temp,cont,chave,qtd);
			gettimeofday(&fim,NULL);
			t=clock()-t;
			tmili_seq=(1000000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000000);
			tmili_seq2=((float)t)/CLOCKS_PER_SEC;
			
			
			//busca binaria
			gettimeofday(&inicio,NULL);
			t=clock();
			achou=binaria(vet_temp2,cont,chave,qtd);
			gettimeofday(&fim,NULL);
			t=clock()-t;
			tmili_bin+=(1000000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000000);
			tmili_bin2=((float)t)/CLOCKS_PER_SEC;
			if(achou)
				return 0;
		}
		//printf("\nSaiu do for das comparacoes\n");
		qtd+=1000;
		vez++;
		printf("QTD = %d\taux = %f\tSequencial = %lf\tBinaria = %lf\nQTD = %d\taux = %f\tSequencial = %lf\tBinaria = %lf\n\n",qtd, aux, tmili_seq, tmili_bin,qtd, aux, tmili_seq2, tmili_bin2);
	}
	*/
}






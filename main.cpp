
#include "Bibliotecas.h"
#include "Interfaces.h"

FILE *fp;
	

main(){
	
	//gera_dado(fp);
	
	abastecer(a,fp);
	
	iniciar();
	
	/*int chave;//=50325;
	qtd=3000;
	
	User *teste=(User*)malloc(sizeof(User)*qtd);
	
	for(int i=0;i<qtd;i++){
		teste[i].cod=a[i].cod;
		//printf("%d\t",teste[i].cod);
		if(i%2)
			chave=teste[i].cod;
	}
	
	struct timeval inicio, fim;
	double tmili_seq, tmili_bin;
	gettimeofday(&inicio,0);
	bool achou=sequencial(teste,chave,qtd);
	gettimeofday(&fim,0);
    tmili_seq=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
	
	printf("\n\n%d",achou);
	printf("\n%d\n",chave);
	
	gettimeofday(&inicio,0);
	bubble(teste,qtd);
	achou=binaria(teste,chave,qtd);
	gettimeofday(&fim,0);
    tmili_bin=(1000*(fim.tv_sec-inicio.tv_sec)+(fim.tv_usec-inicio.tv_usec)/1000);
	
	/*for(int i=0;i<qtd;i++)
		printf("%d\t",teste[i].cod);
	printf("\n");
	
	free(teste);
	
	
	free(a);
	printf("\n\n%d",achou);
	printf("\nTempo gasto sequencial=%lf",tmili_seq);
	printf("\nTempo gasto binaria=%lf",tmili_bin);
	
	time_t seconds;
	seconds=time(NULL);
	printf("\n%lf",seconds*1000.0/CLOCKS_PER_SEC);*/
	
}







#ifndef FormatarSaida
#define FormatarSaida

int verificaSequencia(FILE *a, int ord);


#endif


int verificaSequencia(FILE *a, int ord){
	a=fopen("sequencia.txt","w");
	if(a!=NULL)
		fprintf(a,"%d\t",ord);
	else
		printf("\nErro ao abrir o arquivo");
}

#include "CriarEntradas.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "SelectionSort.h"
#include "ShellSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "CriarVetor.h"
#include "Buscas.h"
#include "CompararBuscas.h"

#include "FormatarSaida.h"

FILE *fp;
//typedef struct texte{
//		long int cod;
//		char nome[50];
//		char email[50];
//		char senha[50];
//	}sos;
	

main(){
	
	gera_dado(fp);
	printf("saiu de gera_dado\n");
	
	/*abastecer(a,fp);
	printf("%d\t%s\t%s\t%s\n", a[0].cod,a[0].nome,a[0].email,a[0].senha);
	printf("%d\t%s\t%s\t%s\n", a[50000].cod, a[50000].nome, a[50000].email, a[50000].senha);
	printf("%d\t%s\t%s\t%s\n", a[99999].cod, a[99999].nome, a[99999].email, a[99999].senha);
	
	int v[50];
	
	for(int i=0;i<50;i++){
		v[i]=a[i].cod;
		printf("%d\t",v[i]);
	}
	
	quicksort(v,0,49);
	printf("\n\n");
	
	for(int i=0;i<50;i++){
		printf("%d\t",v[i]);
	}*/
	
	free(a);
	
}






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
	

main(){
	
	gera_dado(fp);
	
	abastecer(a,fp);
	
	
	free(a);
	
}






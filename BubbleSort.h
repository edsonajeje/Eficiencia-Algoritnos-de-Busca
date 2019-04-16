#include "ManipulaArquivos.h"
#include "CriarVetor.h"

#ifndef BubbleSort
#define BubbleSort

void bubble(User a[], int n);


#endif

void bubble(User a[], int n){
	int topo, bolha, aux;
	
	for(topo=0;topo<n;topo++){
		for(bolha=n-1;bolha>=topo;bolha--){
			if(a[bolha].cod<a[bolha-1].cod){
				aux=a[bolha].cod;
				a[bolha].cod=a[bolha-1].cod;
				a[bolha-1].cod=aux;
			}
		}
	}
}

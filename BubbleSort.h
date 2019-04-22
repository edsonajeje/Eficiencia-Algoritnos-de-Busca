#include "ManipulaArquivos.h"
#include "CriarVetor.h"

#ifndef BubbleSort
#define BubbleSort

void troca(User a[], User aux, int bolha);

void bubble(User a[], int n);


#endif

void troca(User a[], User aux, int bolha){
	aux.cod=a[bolha].cod;
	strcpy(aux.email,a[bolha].email);
	strcpy(aux.nome,a[bolha].nome);
	strcpy(aux.senha,a[bolha].senha);
	
	a[bolha].cod=a[bolha-1].cod;
	strcpy(a[bolha].email,a[bolha-1].email);
	strcpy(a[bolha].nome,a[bolha-1].nome);
	strcpy(a[bolha].senha,a[bolha-1].senha);
	
	a[bolha-1].cod=aux.cod;
	strcpy(a[bolha-1].email,aux.email);
	strcpy(a[bolha-1].nome,aux.nome);
	strcpy(a[bolha-1].senha,aux.senha);
}

void bubble(User a[], int n){
	int topo, bolha;
	User aux;
	
	for(topo=1;topo<n;topo++){
		for(bolha=n-1;bolha>=topo;bolha--){
			if(a[bolha].cod<a[bolha-1].cod){
				troca(a,aux,bolha);
			}
		}
	}
}

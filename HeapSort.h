#include "Bibliotecas.h"

#ifndef HeapSort
#define HeapSort

void trocaHeap(User a[], User aux, int i, int j, int t);
void criarHeap(User a[], int i, int f);
void heapSort(User a[], int n);

#endif

void trocaHeap(User a[], User aux, int i, int j, int t){
	if(j==-1&&t==0){
		aux.cod=a[i].cod;
		strcpy(aux.email,a[i].email);
		strcpy(aux.nome,a[i].nome);
		strcpy(aux.senha,a[i].senha);
	}else if(j==-1&&t==-1){
		a[i].cod=aux.cod;
		strcpy(a[i].email,aux.email);
		strcpy(a[i].nome,aux.nome);
		strcpy(a[i].senha,aux.senha);
	}else if(t==2){
		a[i].cod=a[j].cod;
		strcpy(a[i].email,a[j].email);
		strcpy(a[i].nome,a[j].nome);
		strcpy(a[i].senha,a[j].senha);
	}
}

void criarHeap(User a[], int i, int f){
	int j;
	User aux;
	trocaHeap(a,aux,i,-1,0);
	j=i*2+1;
	while(j<=f){
		if(j<f){
			if(a[j].cod<a[j+1].cod){
				j=j+1;
			}
		}
		if(aux.cod<a[j].cod){
			trocaHeap(a,aux,i,j,2);
			i=j;
			j=i*2+1;
		}else{
			j=f+1;
		}
	}
	trocaHeap(a,aux,i,j,2);
}

void heapSort(User a[], int n){
	User aux;
	for(int i=(n-1)/2;i>=0;i--){
		criarHeap(a,i,n-1);
	}
	for(int i=(n-1);i>=0;i--){
		trocaHeap(a,aux,0,-1,0);//aux<-vetor[0]
		trocaHeap(a,aux,0,i,2);//vetor[0]<-vetor[i]
		trocaHeap(a,aux,i,-1,-1);//vetor[i]<-aux
		criarHeap(a,0,i-1);
	}
}

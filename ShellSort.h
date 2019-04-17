#include "Bibliotecas.h"

#ifndef ShellSort
#define ShellSort

void shell(User a[], int n);


#endif

void shell(User a[], int n){
	int idChave, i, k=3, h=1;
	User chaveAtual;
	
	while(h<=n){
		h=k*h+1;
	}
	
	while(h!=1){
		h=h/k;
		for(idChave=h;idChave<=n-1;idChave++){
			chaveAtual=a[idChave];
			i=idChave-h;
			while(i>=0&&a[i].cod>chaveAtual.cod){
				a[i+h]=a[i];
				i=i-h;
			}
			a[i+h]=chaveAtual;
		}
	}
}

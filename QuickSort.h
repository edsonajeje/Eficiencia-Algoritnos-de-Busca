
#ifndef QuickSort
#define QuickSort

int particona(int a[], int p, int r);
void quicksort(int a[], int p, int r);

#endif

int particiona(int a[], int p, int r){
	int pivo, esq, dir, aux;
	esq=p; dir=r; pivo=a[p];
	
	while(esq<dir){
		while(a[esq]<=pivo){
			esq=esq+1;
		}
		while(a[dir]>pivo){
			dir=dir-1;
		}
		if(esq<dir){
			aux=a[esq];
			a[esq]=a[dir];
			a[dir]=aux;
		}
	}
	a[p]=a[dir];
	a[dir]=pivo;
	
	return dir;
}

void quicksort(int a[], int p, int r){
	int q;
	if(p<r){
		q=particiona(a,p,r);
		quicksort(a,p,q-1);
		quicksort(a,q+1,r);
	}
}




#ifndef QuickSort
#define QuickSort

int particona(User a[], int p, int r);
void quicksort(User a[], int p, int r);

#endif

int particiona(User a[], int p, int r){
	int pivo, esq, dir;
	User aux;
	esq=p; dir=r; pivo=a[p].cod;
	
	while(esq<dir){
		while(a[esq].cod<=pivo){
			esq=esq+1;
		}
		while(a[dir].cod>pivo){
			dir=dir-1;
		}
		if(esq<dir){
			aux=a[esq];
			a[esq]=a[dir];
			a[dir]=aux;
		}
	}
	a[p]=a[dir];
	a[dir].cod=pivo;
	
	return dir;
}

void quicksort(User a[], int p, int r){
	int q;
	if(p<r){
		q=particiona(a,p,r);
		quicksort(a,p,q-1);
		quicksort(a,q+1,r);
	}
}




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
			aux.cod=a[esq].cod;
			strcpy(aux.email,a[esq].email);
			strcpy(aux.nome,a[esq].nome);
			strcpy(aux.senha,a[esq].senha);
			
			a[esq].cod=a[dir].cod;
			strcpy(a[esq].email,a[dir].email);
			strcpy(a[esq].nome,a[dir].nome);
			strcpy(a[esq].senha,a[dir].senha);
			
			a[dir].cod=aux.cod;
			strcpy(a[dir].email,aux.email);
			strcpy(a[dir].nome,aux.nome);
			strcpy(a[dir].senha,aux.senha);
		}
	}
	a[p].cod=a[dir].cod;
	strcpy(a[p].email,a[dir].email);
	strcpy(a[p].nome,a[dir].nome);
	strcpy(a[p].senha,a[dir].senha);
	
	a[dir].cod=pivo;
	strcpy(a[dir].email,a[pivo].email);
	strcpy(a[dir].nome,a[pivo].nome);
	strcpy(a[dir].senha,a[pivo].senha);
	
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



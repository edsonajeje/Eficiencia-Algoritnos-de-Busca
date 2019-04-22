
#ifndef MergeSort
#define MergeSort

void merge(User a[], int p, int q, int r);
void mergeSort(User a[], int p, int r);


#endif

void merge(User a[], int p, int q, int r){
	int n1, n2, i, j, k;
	n1=q-p+1;
	n2=r-q;
	
	User *e=(User*)malloc((n1+1)*sizeof(User)); User *d=(User*)malloc(sizeof(User)*(n2+1));
	
	for(i=0;i<n1;i++){
		e[i].cod=a[p+i].cod;
		strcpy(e[i].email,a[p+i].email);
		strcpy(e[i].nome,a[p+i].nome);
		strcpy(e[i].senha,a[p+i].senha);
	}
	
	for(j=0;j<n2;j++){
		d[j].cod=a[q+1+j].cod;
		strcpy(d[j].email,a[q+1+j].email);
		strcpy(d[j].nome,a[q+1+j].nome);
		strcpy(d[j].senha,a[q+1+j].senha);
	}
	
	e[n1].cod=d[n2].cod=999999999;
	i=j=0;
	
	for(k=p;k<=r;k++){
		if(e[i].cod<=d[j].cod){
			a[k].cod=e[i].cod;
			strcpy(a[k].email,e[j].email);
			strcpy(a[k].nome,e[j].nome);
			strcpy(a[k].senha,e[j].senha);
			i++;
		}else{
			a[k].cod=d[j].cod;
			strcpy(a[k].email,d[j].email);
			strcpy(a[k].nome,d[j].nome);
			strcpy(a[k].senha,d[j].senha);
			j++;
		}
	}
}

void mergeSort(User a[], int p, int r){
	int q;
	if(p<r){
		q=(p+r)/2;
		mergeSort(a,p,q);
		mergeSort(a,(q+1),r);
		merge(a, p, q, r);
	}
}

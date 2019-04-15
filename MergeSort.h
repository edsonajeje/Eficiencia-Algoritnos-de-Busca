
#ifndef MergeSort
#define MergeSort

void merge(int a[], int p, int q, int r);
void mergeSort(int a[], int p, int r);


#endif

void merge(int a[], int p, int q, int r){
	int n1, n2, i, j, k;
	n1=q-p+1;
	n2=r-q;
	
	int e[n1+1], d[n2+1];
	
	for(i=0;i<n1;i++){
		e[i]=a[p+i];
	}
	
	for(j=0;j<n2;j++){
		d[j]=a[q+1+j];
	}
	
	e[n1]=d[n2]=999999999;
	i=j=0;
	
	for(k=p;k<=r;k++){
		if(e[i]<=d[j]){
			a[k]=e[i];
			i++;
		}else{
			a[k]=d[j];
			j++;
		}
	}
}

void mergeSort(int a[], int p, int r){
	int q;
	if(p<r){
		q=(p+r)/2;
		mergeSort(a,p,q);
		mergeSort(a,(q+1),r);
		merge(a, p, q, r);
	}
}

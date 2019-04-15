
#ifndef InsertionSort
#define InsertionSort

void insertion(int a[], int n);


#endif

void insertion(int a[], int n){
	int chaveAtual, idChave, i;
	
	for(idChave=0; idChave<=n-1; idChave++){
		chaveAtual=a[idChave];
		i=idChave-1;
		while(i>=0&&a[i]>chaveAtual){
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=chaveAtual;
	}
}


#ifndef InsertionSort
#define InsertionSort

void insertion(User a[], int n);


#endif

void insertion(User a[], int n){
	int idChave, i;
	User chaveAtual;
	
	for(idChave=0; idChave<=n-1; idChave++){
		chaveAtual=a[idChave];
		i=idChave-1;
		while(i>=0&&a[i].cod>chaveAtual.cod){
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=chaveAtual;
	}
}

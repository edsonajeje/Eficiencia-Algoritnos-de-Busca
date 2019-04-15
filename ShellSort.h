
#ifndef ShellSort
#define ShellSort

void shell(int a[], int n);


#endif

void shell(int a[], int n){
	int idChave, chaveAtual, i, k=3, h=1;
	
	while(h<=n){
		h=k*h+1;
	}
	
	while(h!=1){
		h=h/k;
		for(idChave=h;idChave<=n-1;idChave++){
			chaveAtual=a[idChave];
			i=idChave-h;
			while(i>=0&&a[i]>chaveAtual){
				a[i+h]=a[i];
				i=i-h;
			}
			a[i+h]=chaveAtual;
		}
	}
}

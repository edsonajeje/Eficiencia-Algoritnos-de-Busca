
#ifndef BubbleSort
#define BubbleSort

void bubble(int a[], int n);


#endif

void bubble(int a[], int n){
	int topo, bolha, aux;
	
	for(topo=0;topo<n;topo++){
		for(bolha=n-1;bolha>=topo;bolha--){
			if(a[bolha]<a[bolha-1]){
				aux=a[bolha];
				a[bolha]=a[bolha-1];
				a[bolha-1]=aux;
			}
		}
	}
}

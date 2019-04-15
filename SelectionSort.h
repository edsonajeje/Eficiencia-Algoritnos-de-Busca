
#ifndef SelectionSort
#define SelectionSort

void selection(int a[], int n);


#endif

void selection(int a[], int n){
	int idChave, menorChave, idMenor, idTemp, aux;
	
	for(idChave=0; idChave<=n-2; idChave++){
		menorChave=a[idChave];
		idMenor=idChave;
		for(idTemp=idChave+1;idTemp<=n-1;idTemp++){
			if(a[idTemp]<menorChave){
				menorChave=a[idTemp];
				idMenor=idTemp;
			}
		}
		aux=a[idChave];
		a[idChave]=a[idMenor];
		a[idMenor]=aux;
	}
}

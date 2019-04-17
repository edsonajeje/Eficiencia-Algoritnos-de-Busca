
#ifndef SelectionSort
#define SelectionSort

void selection(User a[], int n);


#endif

void selection(User a[], int n){
	int idChave, menorChave, idMenor, idTemp;
	User aux;
	
	for(idChave=0; idChave<=n-2; idChave++){
		menorChave=a[idChave].cod;
		idMenor=idChave;
		for(idTemp=idChave+1;idTemp<=n-1;idTemp++){
			if(a[idTemp].cod<menorChave){
				menorChave=a[idTemp].cod;
				idMenor=idTemp;
			}
		}
		aux=a[idChave];
		a[idChave]=a[idMenor];
		a[idMenor]=aux;
	}
}

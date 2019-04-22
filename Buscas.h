
#ifndef Buscas
#define Buscas

bool sequencial (User a[], int cont, int chave[], int n);
bool binaria (User a[], int cont, int chave[], int n);

#endif

bool sequencial(User a[], int cont, int chave[], int n){
	int pos=0;
	bool encontrado=false;
	while(a[pos].cod!=chave[cont]&&pos<n){
		//printf("entrou no while do sequencial vez %d\t",pos);
		pos++;
	}
	if(pos<n)
		encontrado=true;
	/*if(encontrado)
		printf("Encontrado\t");*/
	return encontrado;
	
}

bool binaria(User a[], int cont , int chave[], int n){
	int meio, dir=n-1, esq=0, x=0;
	bool encontrado=false;
	while(esq<=dir&&encontrado==false){
		//printf("entrou no while do binaria\t",x);
		meio=(esq+dir)/2;
		if(a[meio].cod==chave[cont]){
			encontrado=true;
		}else if(chave[cont]<a[meio].cod){
			dir=meio-1;
		}else{
			esq=meio+1;
		}
		x++;
	}
	/*if(encontrado)
		printf("Encontrado\t");*/
	return encontrado;
}

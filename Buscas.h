
#ifndef Buscas
#define Buscas

bool sequencial (long int a[], int chave, int n);
bool binaria (long int a[], int chave, int n);

#endif

bool sequencial(long int a[], int chave, int n){
	int pos=0;
	bool encontrado=false;
	while(a[pos]!=chave&&pos<n)
		pos++;
	if(pos<n)
		encontrado=true;
	return encontrado;
}

bool binaria(long int a[], int chave, int n){
	int meio, dir=n-1, esq=0;
	bool encontrado=false;
	while(esq<=dir&&encontrado==false){
		meio=(esq+dir)/2;
		if(a[meio]==chave){
			encontrado=true;
		}else if(chave<a[meio]){
			dir=meio-1;
		}else{
			esq=meio+1;
		}
	}
	return encontrado;
}

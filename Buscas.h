
#ifndef Buscas
#define Buscas

bool sequencial (User a[], int chave, int n);
bool binaria (User a[], int chave, int n);

#endif

bool sequencial(User a[], int chave, int n){
	int pos=0;
	bool encontrado=false;
	while(a[pos].cod!=chave&&pos<n)
		pos++;
	if(pos<n)
		encontrado=true;
	return encontrado;
}

bool binaria(User a[], int chave, int n){
	int meio, dir=n-1, esq=0;
	bool encontrado=false;
	while(esq<=dir&&encontrado==false){
		meio=(esq+dir)/2;
		if(a[meio].cod==chave){
			encontrado=true;
		}else if(chave<a[meio].cod){
			dir=meio-1;
		}else{
			esq=meio+1;
		}
	}
	return encontrado;
}

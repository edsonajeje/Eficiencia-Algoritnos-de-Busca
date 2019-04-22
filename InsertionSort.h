
#ifndef InsertionSort
#define InsertionSort

void insertion(User a[], int n);


#endif

void insertion(User a[], int n){
	int idChave, i;
	User chaveAtual;
	
	for(idChave=0; idChave<=n-1; idChave++){
		chaveAtual.cod=a[idChave].cod;
		strcpy(chaveAtual.email,a[idChave].email);
		strcpy(chaveAtual.nome,a[idChave].nome);
		strcpy(chaveAtual.senha,a[idChave].senha);
		i=idChave-1;
		while(i>=0&&a[i].cod>chaveAtual.cod){
			a[i+1].cod=a[i].cod;
			strcpy(a[i+1].email,a[i].email);
			strcpy(a[i+1].nome,a[i].nome);
			strcpy(a[i+1].senha,a[i].senha);
			i--;
		}
		a[i+1].cod=chaveAtual.cod;
		strcpy(a[i+1].email,chaveAtual.email);
		strcpy(a[i+1].nome,chaveAtual.nome);
		strcpy(a[i+1].senha,chaveAtual.senha);
	}
}

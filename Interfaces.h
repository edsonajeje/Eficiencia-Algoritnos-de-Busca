
#ifndef Interfaces
#define Interfaces

void iniciar();

#endif

void iniciar(){
	int escolha=-1;
	while(escolha!=0){
		printf("Digite a opção que deseja\n");
		printf("[1] Para testar Busca Sequencial x Binaria com BubbleSort\n");
		printf("[2] Para testar Busca Sequencial x Binaria com QuickSort\n");
		printf("[3] Para testar Busca Sequencial x Binaria com InsertionSort\n");
		printf("[4] Para testar Busca Sequencial x Binaria com SelectionSort\n");
		printf("[5] Para testar Busca Sequencial x Binaria com MergeSort\n");
		printf("[6] Para testar Busca Sequencial x Binaria com ShellSort\n");
		//printf("[1] Para testar Busca Sequencial x Binaria com QuickSort\n");
		scanf("%d",&escolha);
		switch (escolha){
			case 1:{
				break;
			}
			case 2:{
				break;
			}
			case 3:{
				
				break;
			}
			case 4:{
				break;
			}
			case 5:{
				break;
			}
			case 6:{
				
				break;
			}
			case 7:{
				
				break;
			}
			case 0:{
				break;
			}
			default: {
				printf("A opção digitada é Invalida\n");
				break;
			}
		}
	}
}

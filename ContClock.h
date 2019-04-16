#include <stdio.h>
#include <time.h>

#ifndef ContClock
#define ContClock

int main(void)
{
    clock_t Ticks[2];
    Ticks[0] = clock();
    //O código a ter seu tempo de execução medido ficaria neste ponto.
    /*
    Passar função como parâmetro
    //func é uma funão normal
	void func(int x) { ... }
	
	//func_ptr é um ponteiro para função void que aceita um int de parâmetro 
	void (*func_ptr)(int); 
	
	//func_ptr passa a apontar para func
	func_ptr = &func;
	
	//chama func, através do ponteiro
	func_ptr(42);
	*/
    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto: %g ms.", Tempo);
    getchar();
    return 0;
    
    /*Função para medir o tempo de execução
    QueryPerformanceCounter
    */
}

#endif



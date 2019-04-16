#include <stdio.h>
#include <time.h>

#ifndef ContClock
#define ContClock

int main(void)
{
    clock_t Ticks[2];
    Ticks[0] = clock();
    //O c�digo a ter seu tempo de execu��o medido ficaria neste ponto.
    /*
    Passar fun��o como par�metro
    //func � uma fun�o normal
	void func(int x) { ... }
	
	//func_ptr � um ponteiro para fun��o void que aceita um int de par�metro 
	void (*func_ptr)(int); 
	
	//func_ptr passa a apontar para func
	func_ptr = &func;
	
	//chama func, atrav�s do ponteiro
	func_ptr(42);
	*/
    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto: %g ms.", Tempo);
    getchar();
    return 0;
    
    /*Fun��o para medir o tempo de execu��o
    QueryPerformanceCounter
    */
}

#endif



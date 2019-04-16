#include<sys/time.h>

#ifndef CompararBuscas
#define CompararBuscas

clock_t medirTempo(clock_t x);

#endif

clock_t medirTempo(clock_t x){
	x=clock();
	return x;
}

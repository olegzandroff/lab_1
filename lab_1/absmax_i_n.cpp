#include "prototypes.h"
 

int sem_3_absmax_i_n(const array_elem_t* array, int length) 
{
	array_elem_t absmax = sem_3_absmax_v(array, length);
	int absmax_n = 0;
	for (int i = 0; i < length; i++)
		if (abs(array[i]) == absmax) absmax_n++;
	return absmax_n;
}
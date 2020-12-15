#include "prototypes.h"

array_elem_t sem_3_absmax_v(const array_elem_t* array, int length) 
{
	array_elem_t absmax = abs(array[0]);
	for (int i = 0; i < length; i++)
		if (abs(array[i]) > absmax) absmax = abs(array[i]);
	return absmax;
}
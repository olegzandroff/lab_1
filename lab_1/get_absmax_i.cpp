#include "prototypes.h"
#include "libraries.h"

int* sem_3_get_absmax_i(const array_elem_t* array, int length) 
{
	array_elem_t absmax_v = sem_3_absmax_v(array, length);
	int absmax_i_n = sem_3_absmax_i_n(array, length);
	int* absmax_i = new int[absmax_i_n];
	for (int i = 0, j = 0; i < length && j < absmax_i_n; i++)
		if (abs(array[i]) == absmax_v) {
			absmax_i[j] = i;
			j++;
		}
	return absmax_i;
}
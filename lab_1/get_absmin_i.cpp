#include "prototypes.h"
#include "libraries.h"

int* sem_3_get_absmin_i(const array_elem_t* array, int length) 
{
	array_elem_t absmin_v = sem_3_absmin_v(array, length);
	int absmin_i_n = sem_3_absmin_i_n(array, length);
	int* absmin_i = new int[absmin_i_n];
	for (int i = 0, j = 0; i < length && j < absmin_i_n; i++)
		if (abs(array[i]) == absmin_v) {
			absmin_i[j] = i;
			j++;
		}
	return absmin_i;
}
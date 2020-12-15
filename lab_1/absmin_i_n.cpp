#include "prototypes.h"
<<<<<<< HEAD
 
=======
>>>>>>> templates

int sem_3_absmin_i_n(const array_elem_t* array, int length) 
{
	array_elem_t absmin = sem_3_absmin_v(array, length);
	int absmin_n = 0;
	for (int i = 0; i < length; i++)
		if (abs(array[i]) == absmin) absmin_n++;
	return absmin_n;
}
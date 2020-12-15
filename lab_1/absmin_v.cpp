#include "prototypes.h"
<<<<<<< HEAD
 
=======
>>>>>>> templates

array_elem_t sem_3_absmin_v(const array_elem_t* array, int length)
{
	array_elem_t absmin = abs(array[0]);
	for (int i = 0; i < length; i++)
		if (abs(array[i]) < absmin) absmin = abs(array[i]);
	return absmin;
}
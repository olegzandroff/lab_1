#include "prototypes.h"
<<<<<<< HEAD
 
=======
>>>>>>> templates

array_elem_t sem_3_sum_of_positives(const array_elem_t* array, int length)
{
	array_elem_t result = 0;
	for (int i = 0; i < length; i++)
		if (array[i] > 0) result += array[i];
	return result;
};
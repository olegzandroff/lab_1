#include "prototypes.h"
#include "libraries.h"

array_elem_t sem_3_product_between(const array_elem_t* array, int length, int i_1, int i_2) 
{
	int left = (i_1 < i_2) ? i_1 : i_2;
	int right = (i_1 > i_2) ? i_1 : i_2;
	array_elem_t product = 1;
	for (int i = left + 1; i < right; i++)
		product = array[i] * product;
	return product;
}
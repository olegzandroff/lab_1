#include "prototypes.h"
 

int get_pos_i_n(const array_elem_t* array, int length)
{
	int pos_i_n = 0;
	for (int i = 0; i < length; i++)
		if (array[i] > 0) pos_i_n++;
	return pos_i_n;
}
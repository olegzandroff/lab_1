#include "prototypes.h" 

int* get_pos_i(const array_elem_t* array, int length)
{
	int* pos_i = new int[get_pos_i_n(array, length)];
	int j = 0;
	for (int i = 0; i < length; i++)
		if (array[i] > 0)
			pos_i[j++] = i;

	return pos_i;
}
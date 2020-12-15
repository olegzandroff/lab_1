#include "prototypes.h"

void interface_cout_array(const array_elem_t* array, int length)
{
	for (int i = 0; i < length; i++)
	{
		std::cout << array[i] << ((i == length - 1) ? "" : ", ");
	}
	std::cout << "\n\n";
};
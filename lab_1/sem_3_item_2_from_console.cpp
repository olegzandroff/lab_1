#include "prototypes.h"
 

array_elem_t* interface_sem_3_input_menu_item_2(int* length) {
	system("CLS");
	std::cout << "Input array size... ";

	*length = interface_read_positive_number();

	system("CLS");
	array_elem_t* array = new array_elem_t[*length];
	for (int i = 0; i < *length; i++)
	{
		std::cout << "#" << i + 1 << ". ";
		array[i] = static_cast<array_elem_t> (interface_read_number());
	}

	return array;
}
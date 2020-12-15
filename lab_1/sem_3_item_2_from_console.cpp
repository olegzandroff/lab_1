#include "libraries.h"
#include "prototypes.h"

array_elem_t* interface_sem_3_input_menu_item_2(int* length) {
	system("CLS");
	std::cout << "Input array size... ";

	*length = interface_read_positive_number();

	system("CLS");
	double* array = new double[*length];
	for (int i = 0; i < *length; i++)
	{
		std::cout << "#" << i + 1 << ". ";
		array[i] = interface_read_number();
	}

	return array;
}
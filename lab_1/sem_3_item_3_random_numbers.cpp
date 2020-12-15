#include "libraries.h"
#include "prototypes.h"

array_elem_t* interface_sem_3_input_menu_item_3(int* length) {
	system("CLS");
	std::cout << "Input array size... ";
	*length = interface_read_positive_number();

	array_elem_t* array = new array_elem_t[*length];
	srand(static_cast<unsigned int>(time(0)));
	for (int i = 0; i < *length; i++)
	{
		array[i] = rand() % 1000;
		array[i] *= (rand() % 2) ? -1 : 1;
	}
	return array;
}
#include "prototypes.h"
 

matrix_elem_t** interface_sem_4_input_menu_item_1(int* n, int* m)
{
	std::fstream file("default_inputs\\sem_4_input.txt");
	file >> *n;
	file >> *m;
	file.close();
	matrix_elem_t** array = interface_sem_4_input_from_file("default_inputs\\sem_4_input.txt", *n, *m);
	return array;
};
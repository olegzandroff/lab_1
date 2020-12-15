<<<<<<< HEAD
 
#include "prototypes.h"
=======
 #include "prototypes.h"
>>>>>>> templates

array_elem_t* interface_sem_3_input_menu_item_1(int* length) {
	std::ifstream file;
	file.open("default_inputs\\sem_3_input.txt");
	file >> *length;
	array_elem_t* array = new array_elem_t[*length];
	for (int i = 0; i < *length; i++)
		file >> array[i];
	file.close();
	return array;
}


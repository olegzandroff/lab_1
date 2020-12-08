#include "libraries.h"
#include "prototypes.h"

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

array_elem_t* interface_sem_3_input_menu_item_4(int* length) {
	return nullptr;
}
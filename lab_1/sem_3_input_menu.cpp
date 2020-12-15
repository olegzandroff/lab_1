#include "prototypes.h"
 

array_elem_t* interface_sem_3_input_menu(int* length) {
	array_elem_t* array = nullptr;
	const int n_1 = 4;

	char chars_1[n_1][100] = {
		"1 - Load an example.\n",
		"2 - Read from a console.\n",
		"3 - Fill with random numbers.\n",
		"4 - Go back.\n"
	};
	array_elem_t* (*actions_1[n_1])(int*) = {
		interface_sem_3_input_menu_item_1,
		interface_sem_3_input_menu_item_2,
		interface_sem_3_input_menu_item_3,
		interface_sem_3_input_menu_item_4
	};

	system("CLS");
	std::cout << "sem_3 input menu\n";
	return menu(chars_1, actions_1, n_1, length);
}
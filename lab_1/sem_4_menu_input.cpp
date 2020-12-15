#include "prototypes.h"

matrix_elem_t** interface_sem_4_input_menu(int* n, int* m)
{
	system("CLS");
	std::cout << "sem_4 input menu\n";
	std::cout << "How would you like to input?\n";

	const int fcn_number_1 = 4;
	char chars_1[fcn_number_1][100] = 
	{
		"1 - Load an example.\n",
		"2 - Read from a console.\n",
		"3 - Fill with random numbers\n",
		"4 - Go back.\n"
	};

	matrix_elem_t** (*actions_1[fcn_number_1])(int*, int*) = 
	{
		interface_sem_4_input_menu_item_1,
		interface_sem_4_input_menu_item_2,
		interface_sem_4_input_menu_item_3,
		interface_sem_4_input_menu_item_4

	};
	return menu(chars_1, actions_1, fcn_number_1, n, m);
};
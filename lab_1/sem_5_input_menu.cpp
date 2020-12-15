#include "libraries.h"
#include "prototypes.h"
char* interface_sem_5_input_menu() 
{
	system("CLS");
	std::cout << "sem_5 input menu\n";
	std::cout << "How would you like to input?\n";
	const int fcn_number_1 = 3;
	char menu_positions_1[fcn_number_1][100] = 
	{
		"1 - Load an example.\n",
		"2 - Read from a console.\n",
		"3 - Go back.\n"
	};
	char* (*actions_1[fcn_number_1])() = 
	{
		interface_sem_5_input_menu_item_1,
		interface_sem_5_input_menu_item_2,
		interface_sem_5_input_menu_item_3
	};
	return menu(menu_positions_1, actions_1, fcn_number_1);
};


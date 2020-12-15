#include "libraries.h"
#include "prototypes.h"

void interface_sem_3_tasks_menu_item_2(const array_elem_t* array, int length)
{
	std::cout << "{item_2}\n";
	const char* bad_scenario_message_1 =
		"\n\tYou have triggered bad scenario #1.\
		 \n\tThis means that total number of absmins and absmaxes is greater than 2.\n";
	int absmax_i_n = sem_3_absmax_i_n(array, length);
	int absmin_i_n = sem_3_absmin_i_n(array, length);
	int* absmax_i = sem_3_get_absmax_i(array, length);
	int* absmin_i = sem_3_get_absmin_i(array, length);
	int absmax_index = 0, absmin_index = 0;

	std::cout << "\n\tAbsmin: " << sem_3_absmin_v(array, length);
	std::cout << "\n\tAbsmin indexes:\n\t";
	for (int i = 0; i < absmin_i_n; i++)
		std::cout << absmin_i[i] << ((i < absmin_i_n - 1) ? ", " : "\n");
	std::cout << "\n\tAbsmax: " << sem_3_absmax_v(array, length);
	std::cout << "\n\tAbsmax indexes:\n\t";
	for (int i = 0; i < absmax_i_n; i++)
		std::cout << absmax_i[i] << ((i < absmax_i_n - 1) ? ", " : "\n");

	if (sem_3_bad_scenario_1(array, length)) 
	{
		std::cout << bad_scenario_message_1;
		std::cout << "\n\tEnter absmin index:\n\t";
		do {
			absmin_index = interface_read_number();
			if (sem_3_bad_scenario_3(absmin_i, absmin_i_n, absmin_index)) std::cout << "\n\tThere is no absmin with such index (" << absmin_index << ")\n\t";
		} while (sem_3_bad_scenario_3(absmin_i, absmin_i_n, absmin_index));

		std::cout << "\n\tEnter absmax index:\n\t";
		do 
		{
			absmax_index = interface_read_number();
			if (sem_3_bad_scenario_3(absmax_i, absmax_i_n, absmax_index)) 
			{ std::cout << "\n\tThere is no absmax with such index (" << absmax_index << ")\n\t"; }
		} while (sem_3_bad_scenario_3(absmax_i, absmax_i_n, absmax_index));
		std::cout << "\tProduct between absmin and absmax: " << sem_3_product_between(array, length, absmax_index, absmin_index) << "\n\n";

	} else {
		int* absmax_i = sem_3_get_absmax_i(array, length);
		int* absmin_i = sem_3_get_absmin_i(array, length);
		std::cout << "\tProduct between absmin and absmax: " << sem_3_product_between(array, length, absmax_i[0], absmin_i[0]) << "\n\n";
	}
	delete[] absmax_i;
	delete[] absmin_i;
}
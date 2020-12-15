<<<<<<< HEAD
=======
 
>>>>>>> templates
#include "prototypes.h"

void interface_sem_3_tasks_menu_item_1(const array_elem_t* array, int length) 
{
	std::cout << "{item_1}\n";
	std::cout << "\n\tSum of positives: " << sem_3_sum_of_positives(array, length) << "\n\n";
	int* positive_i = get_pos_i(array, length);
	std::cout << "\n\t Positive indexes:\n\t";
	for (int i = 0; i < get_pos_i_n(array, length); i++)
	{
		std::cout << positive_i[i];
		std::cout << ((i < get_pos_i_n(array, length) - 1) ? ", ": ".\n\n");
	}
	delete[] positive_i;
}

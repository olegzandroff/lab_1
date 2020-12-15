#include "prototypes.h"
 

void interface_sem_3_tasks_menu_item_3(const array_elem_t* array, int length)
{
	std::cout << "{item_3}\n";

	array_elem_t* sorted_array = sem_3_shell_sort(array, length);
	std::cout << "\tSorted array: \n\t";
	interface_cout_array(sorted_array, length);
	delete[] sorted_array;
}
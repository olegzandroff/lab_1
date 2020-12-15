#include "prototypes.h"
 

void interface_sem_4_tasks_menu_item_2(const matrix_elem_t* const* array, int n, int m) 
{
	std::cout << "{item_2}\n";
	std::cout << "\tSorted by characteristic:\n";
	matrix_elem_t** sorted_array = sem_4_sort(array, n, m);
	cout_matrix(sorted_array, n, m, true);
}
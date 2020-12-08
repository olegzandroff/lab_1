#include "libraries.h"
#include "prototypes.h"

void interface_sem_3_tasks_menu_item_3(const array_elem_t* array, int length)
{
	double* sorted_array = new double[length];
	for (int i = 0; i < length; i++)
		sorted_array[i] = array[i];

	sorted_array = sem_3_quick_sort(sorted_array, 0, length - 1);
	std::cout << "\tSorted array: \n\t";
	cout_array(sorted_array, length);

	delete[] sorted_array;
}


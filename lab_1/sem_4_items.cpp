#include "libraries.h"
#include "prototypes.h"


void interface_sem_4_tasks_menu_item_1(const matrix_elem_t* const* array, int n, int m) {
	if (sem_4_bad_scenario_1(array, n, m) == true) {
	};
	int number = sem_4_count_nonzero_columns(array, n, m);
	const char* verb = (number <=1) ? "is " : "are ";
	const char* noun = (number <= 1) ? " column " : " columns ";
	std::cout << "\tThere " << verb << number << noun <<"without any zero elements\n\n";
}

void interface_sem_4_tasks_menu_item_2(const matrix_elem_t* const* array, int n, int m) {
	std::cout << "\tSorted by characteristic:\n";
	matrix_elem_t** sorted_array = sem_4_sort(array, n, m);
	cout_matrix(sorted_array, n, m);
}

void interface_sem_4_tasks_menu_item_3(const matrix_elem_t* const* array, int n, int m) {
	interface_sem_4_tasks_menu_item_1(array, n, m);
	interface_sem_4_tasks_menu_item_2(array, n, m);
}

void interface_sem_4_tasks_menu_item_4(const matrix_elem_t* const* array, int n, int m) {
	for (int i = 0; i < n; i++)
	{
		delete[] array[i];
	}
	delete[] array;
}

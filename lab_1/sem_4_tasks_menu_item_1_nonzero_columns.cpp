<<<<<<< HEAD
 
#include "prototypes.h"
=======
 #include "prototypes.h"
>>>>>>> templates

int* sem_4_get_nonzero_column_i(const matrix_elem_t* const* array, int n, int m) 
{
	int* column_i = new int[sem_4_get_nonzero_column_i_n(array, n, m)];
	int k = 0;
	for (int j = 0; j < m; j++) 
	{
		bool zero = false;
		for (int i = 0; i < n; i++) 
			if (array[i][j] == 0)
				zero = true;
		if (!zero) column_i[k++] = j;
	}
	return column_i;
}

void interface_sem_4_tasks_menu_item_1(const matrix_elem_t* const* array, int n, int m)
{
	std::cout << "{item_1}\n";
	int number = sem_4_get_nonzero_column_i_n(array, n, m);
	const char* verb = (number <= 1) ? "is " : "are ";
	const char* noun = (number <= 1) ? " column " : " columns ";
	std::cout << "\tThere " << verb << number << noun << "without any zero elements\n\n";
	int* nonzero_i = sem_4_get_nonzero_column_i(array, n, m);
	
	for (int i = 0; i < sem_4_get_nonzero_column_i_n(array, n, m); i++)
	{
		std::cout << "\tColumn index: "<< nonzero_i[i] <<"\n";
		std::cout << "\tColumn elements: ";
		for (int j = 0; j < n; j++)
			std::cout << "\n\t" << array[j][nonzero_i[i]];
		std::cout << "\n";
		//std::cout << nonzero_i[i];
		//std::cout << ((i < sem_4_get_nonzero_column_i_n(array, n, m) - 1) ? ", " : ".\n\n");
		//for (int j = 0; j < sem_4_get_nonzero_column_i_n(array, n, m); j++)
		//{
		//	array[]
		//	nonzero_i[i]
		}
	}

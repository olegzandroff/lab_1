#include "libraries.h"
#include "prototypes.h"

void interface_sem_4_tasks_menu(matrix_elem_t** array, int n, int m) 
{
	const int fcn_number_2 = 4;
	char chars_2[fcn_number_2][100] = 
	{
		"1 - Find the number of columns without any zero elements.\n",
		"2 - Sort lines by characteristic (Insertion sort).\n",
		"3 - Execute every subtask. \n",
		"4 - Go back.\n"
	};

	void (*actions_2[fcn_number_2])(const matrix_elem_t* const*, int, int) = 
	{
		interface_sem_4_tasks_menu_item_1,
		interface_sem_4_tasks_menu_item_2,
		interface_sem_4_tasks_menu_item_3,
		interface_sem_4_tasks_menu_item_4
	};
	bool is_first_iter = true;
	do {
		if (is_first_iter) 
			is_first_iter = false;
		else 
		{
			std::cout << "Press ENTER to continue...";
			char a = getchar();
		}
		system("CLS");
		std::cout << "Size of a matrix: " << n << "x" << m << "\n";
		std::cout << "Elements: " << "\n";
		cout_matrix(array, n, m, false);
	} while (menu(chars_2, actions_2, fcn_number_2, array, n, m) != fcn_number_2);
};
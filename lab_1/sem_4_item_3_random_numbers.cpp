#include "prototypes.h"
 

matrix_elem_t** interface_sem_4_input_menu_item_3(int* n, int* m) 
{
	std::cout << "Input number of lines... ";
	*n = interface_read_positive_number();
	std::cout << "Input number of columns... ";
	*m = interface_read_positive_number();
	matrix_elem_t** array = new matrix_elem_t * [*n];
	srand(static_cast<unsigned int>(time(0)));
	for (int i = 0; i < *n; i++)
		array[i] = new matrix_elem_t[*m];
	for (int i = 0; i < *n; i++)
		for (int j = 0; j < *m; j++)
		{
			array[i][j] = (rand() % 1000);
			array[i][j] *= (rand() % 2 == 0 ? -1 : 1);
			array[i][j] *= (rand() % 10 == 0) ? 0 : 1;
		}
	return array;
};
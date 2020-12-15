#include "prototypes.h"
 

matrix_elem_t sem_4_get_line_characteristic(const matrix_elem_t* const* array, int i, int m) 
{
	matrix_elem_t line_characteristic = 0;
	for (int j = 0; j < m; j++)
		if (array[i][j] > 0 && array[i][j] % 2 == 0)
			line_characteristic += array[i][j];
	return line_characteristic;
}

matrix_elem_t* sem_4_get_all_characteristics(const matrix_elem_t* const* array, int n, int m) 
{
	matrix_elem_t* line_characteristic = new matrix_elem_t[n];
	for (int i = 0; i < n; i++)
		line_characteristic[i] = 0;

	for (int i = 0; i < n; i++)
		line_characteristic[i] = sem_4_get_line_characteristic(array, i, m);

	return line_characteristic;
};
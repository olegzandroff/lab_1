#include "prototypes.h"
<<<<<<< HEAD
 
=======
>>>>>>> templates

matrix_elem_t** sem_4_get_new_matrix(const matrix_elem_t* const* array, int n, int m) {
	matrix_elem_t** matrix = new matrix_elem_t* [n];
	for (int i = 0; i < n; i++)
		matrix[i] = new matrix_elem_t[m];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			matrix[i][j] = array[i][j];

	return matrix;
};
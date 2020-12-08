#include "prototypes.h"
#include "libraries.h"

matrix_elem_t** sem_4_sort(const matrix_elem_t* const * array, int n, int m) {
	matrix_elem_t* line_characteristic = new matrix_elem_t[n];
	matrix_elem_t** sorted_array = new matrix_elem_t * [n];
	for (int i = 0; i < n; i++)
		sorted_array[i] = new matrix_elem_t[m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			sorted_array[i][j] = array[i][j];

	for (int i = 0; i < n; i++)
	{
		line_characteristic[i] = 0;
	}

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (array[i][j] > 0 && array[i][j] % 2==0)
				line_characteristic[i] += array[i][j];

	for (int i = 1; i < n; i++) {
		for (int j = i; j > 0 && line_characteristic[j - 1] > line_characteristic[j]; j--) {
			matrix_elem_t* buff = new matrix_elem_t[m];
			for (int k = 0; k < m; k++)
				buff[k] = sorted_array[j][k];
			for (int k = 0; k < m; k++)
				sorted_array[j][k] = sorted_array[j - 1][k];
			for (int k = 0; k < m; k++)
				sorted_array[j - 1][k] = buff[k];
		}
	}

	return sorted_array;
};

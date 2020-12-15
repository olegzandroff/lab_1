#include "prototypes.h"
#include "libraries.h"

matrix_elem_t** sem_4_sort(const matrix_elem_t* const * array, int n, int m) {
	matrix_elem_t* line_characteristic = sem_4_get_all_characteristics(array, n, m);
	matrix_elem_t** sorted_array = sem_4_get_new_matrix(array, n, m);
		
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

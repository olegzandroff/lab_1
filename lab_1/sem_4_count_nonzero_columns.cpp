#include "prototypes.h"
#include "libraries.h"

int sem_4_count_nonzero_columns(const matrix_elem_t* const* array, int n, int m) {
	int counter = 0;
	for (int j = 0; j < m; j++) {
		bool zero = false;
		for (int i = 0; i < n; i++) {
			if (array[i][j] == 0) 
				zero = true;
		}
		if (!zero) counter++;
	}
	return counter;
};
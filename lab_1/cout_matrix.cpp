#include "libraries.h"
#include "prototypes.h"

void cout_matrix(const matrix_elem_t* const* array, int n, int m) {
	for (int i = 0; i < n; i++)
	{
		std::cout << "\t";
		for (int j = 0; j < m; j++)
		{
			std::cout << array[i][j] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
};
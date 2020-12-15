#include "prototypes.h"
 

void cout_matrix(const matrix_elem_t* const* array, int n, int m, bool charac = false) {

	for (int i = 0; i < n; i++)
	{
		std::cout << "\t";
		for (int j = 0; j < m; j++)
		{
			std::cout << std::setw(4) << array[i][j] << " ";
		}
		if (charac)
			std::cout << "Line characteristic: " << sem_4_get_line_characteristic(array, i, m);
		std::cout << "\n";
	}
	std::cout << "\n";
};
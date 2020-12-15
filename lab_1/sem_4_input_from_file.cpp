<<<<<<< HEAD
 
#include "prototypes.h"
=======
 #include "prototypes.h"
>>>>>>> templates

matrix_elem_t** interface_sem_4_input_from_file(const char* path, int n, int m) {
	std::ifstream file;
	file.open(path);
	file >> n >> m;
	matrix_elem_t** ptr = new matrix_elem_t *[n];
	for (int i = 0; i < n; i++)
	{
		ptr[i] = new matrix_elem_t[m];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			file >> ptr[i][j];
		}
	}
	file.close();
	return ptr;
};
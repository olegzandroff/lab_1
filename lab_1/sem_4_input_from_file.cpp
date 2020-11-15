#include "libraries.h"
#include "prototypes.h"


double** interface_sem_4_input_from_file(const char* path, int n, int m) {
	std::ifstream file;
	file.open(path);
	file >> n >> m;
	double** ptr = new double*[n];
	for (int i = 0; i < n; i++)
	{
		ptr[i] = new double[m];
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

#include "libraries.h"
#include "prototypes.h"


double* interface_sem_3_input_from_file (const char *path, int length) {
	std::ifstream file;
	file.open(path);
	int n;
	file >> n;
	double* ptr = new double[n];
	for (int i = 0; i < n; i++)
	{
		file >> ptr[i];
	}
	file.close();
	return ptr;
};

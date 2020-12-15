<<<<<<< HEAD
 
#include "prototypes.h"
=======
 #include "prototypes.h"
>>>>>>> templates

int interface_read_number_from_file(const char* path) 
{
	std::fstream file(path);
	int n;
	file >> n;
	file.close();
	return n;
};
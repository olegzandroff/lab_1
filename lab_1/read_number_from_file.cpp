#include "libraries.h"
#include "prototypes.h"

int interface::read_number_from_file(const char* path) {
	std::fstream file(path);
	int n;
	file >> n;
	file.close();
	return n;
};
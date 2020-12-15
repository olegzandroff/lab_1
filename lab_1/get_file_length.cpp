 
#include "prototypes.h"

long get_file_length_in_chars(const char* path)
{
	std::fstream file;
	file.open(path);
	char k;
	long length = 0;
	while (file.get(k)) {
		length++;
	}
	file.close();
	return length+1;
}
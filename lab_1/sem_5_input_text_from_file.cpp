#include "prototypes.h"
 

char* interface_sem_5_input_text_from_file(const char* path) {
	int length = get_file_length_in_chars(path);
	char* ptr = new char[length];
	std::ifstream f(path);
	f.getline(ptr, length);
	f.close();
	return ptr;
};
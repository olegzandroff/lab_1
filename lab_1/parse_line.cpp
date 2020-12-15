 
#include "prototypes.h"

matrix_elem_t* parse_line(char* buffer, int m)
{
	matrix_elem_t* line = new matrix_elem_t[m];
	char* pch = NULL;
	char* next_token = NULL;
	pch = strtok_s(buffer, " ", &next_token);
	for (int i = 0; i < m; i++)
		if (pch != NULL)
		{
			line[i] = std::atoi(pch);
			pch = strtok_s(NULL, " ", &next_token);
		}
	return line;
};
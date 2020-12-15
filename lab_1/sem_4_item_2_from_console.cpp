#include "prototypes.h"
 

matrix_elem_t** interface_sem_4_input_menu_item_2(int* n, int* m) 
{
	std::cout << "Input number of lines... ";
	*n = interface_read_positive_number();
	std::cout << "Input number of columns... ";
	*m = interface_read_positive_number();
	matrix_elem_t** array = new matrix_elem_t*[*n];
	for (int i = 0; i < *n; i++)
		array[i] = new matrix_elem_t[*m];

	std::cout << "Enter integer numbers in lines (separate numbers with a space)\n";
	char* buffer = new char[10000];
	for (int i = 0; i < *n; i++)
	{
		start:
		std::cout << "#" << i + 1 << " line: ";
		gets_s(buffer, 10000);
		bool parsable = true;
		int space_counter = 0;
		for (size_t i = 0; i < strlen(buffer); i++)
		{
			if ((buffer[i] < '0' || buffer[i] > '9') && buffer[i] != '-' && buffer[i] != ' ') 
			{
				parsable = false;
				break;
			}
			if (buffer[i] == ' ') space_counter++;
		}

		if (space_counter != *m - 1) 
			parsable = false;

		if (parsable)
			array[i] = parse_line(buffer, *m);
		else 
		{
			goto start;
		}
	}
	return array;
};
#include "libraries.h"
#include "prototypes.h"

void interface_sem_4_menu() {

	double** array;
	array = new double* [5];
	for (int i = 0; i < 5; i++)
		array[i] = new double[5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			array[i][j] = 0;
		}
	}
	int n = 1, m = 1;
	system("CLS");
	std::cout << "sem_4 input menu\n";

	std::cout << "How would you like to input?\n"
			  << "1 - Load example.\n"
			  << "2 - input from a console.\n"
			  << "3 - input from a file.\n"
			  << "4 - Go back.\n";
	switch (interface_read_number())
	{
	case 1: {
		std::fstream file("default_inputs\\sem_4_input.txt");
		file >> n;
		file >> m;
		file.close();
		array = interface_sem_4_input_from_file("default_inputs\\sem_4_input.txt", n, m);
		break;
	}
	case 2:
		std::cout << "Input number of lines... ";
		n = interface_read_number();
		std::cout << "Input number of columns... ";
		m = interface_read_number();
		array = new double*[n];
		for (int i = 0; i < n; i++)
			array[i] = new double[m];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				std::cin >> array[i][j];
			}
		}
		break;

	case 3:
		break;

	default:
		main_menu();
		break;

	}

	system("CLS");
	std::cout << "Size of a matrix: " << n << "x"<< m << "\n";
	std::cout << "Elements: " << "\n";
	for (int i = 0; i < n; i++)
	{
		
		for (int j = 0; j < m; j++)
		{
			std::cout << array[i][j] << " ";
		}
		std::cout << "\n";
	}
	
	const int fcn_number = 4;
	char chars[fcn_number][100] = {
		"1 - Find the number of columns without any zero elements.\n",
		"2 - Sort lines by characteristic.\n(Line characteristic is a quantity of positive even elements)\n",
		"3 - Execute every subtask. \n",
		"4 - Go back.\n"
	};

	void (*actions[fcn_number])(double** array, int n, int m) = {
		interface_sem_4_menu_item_1,
		interface_sem_4_menu_item_2,
		interface_sem_4_menu_item_3,
		interface_sem_4_menu_item_4
	};

	while (true) {
		if (menu(chars, actions, fcn_number, array, n, m) == 4) break;
	};
};
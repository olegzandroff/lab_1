#include "libraries.h"
#include "prototypes.h"

void interface_sem_3_menu() {
	
	int length = 10;
	double* array = new double[10];
	for (int i = 0; i < 10; i++)
	{
		array[i] = i;
	}
	system("CLS");
	std::cout << "sem_3 input menu\n";

	std::cout << "How would you like to input?\n"
			  << "1 - Load example.\n"
			  << "2 - input from a console.\n"
			  << "3 - Go back.\n";

	switch (interface_read_number())
	{
	case 1:
		length = interface_read_number_from_file("default_inputs\\sem_3_input.txt");
		array = interface_sem_3_input_from_file("default_inputs\\sem_3_input.txt", length);
		break;
	case 2: {
		system("CLS");
		std::cout << "Input array size... ";
		length = interface_read_number();
		system("CLS");
		array = new double[length];
		for (int i = 0; i < length; i++)
		{
			std::cout << i + 1 << " ";
			std::cin >> array[i];
		}
		break;
	}
	default:
		main_menu();
		break;
	}

	system("CLS");
	std::cout <<"Array's length: " <<"\n" << length << "\n";
	std::cout << "Elements: " << "\n";
	for (int i = 0; i < length; i++)
	{
		std::cout << array[i] << ((i == length-1) ? "" : ", ");
	}
	std::cout << "\n\n";

	const int n = 5;
	char chars[n][100] = {
		"1 - Find the sum of positive elements.\n",
		"2 - Find the product between absmin and absmax.\n",
		"3 - Sort the array.\n",
		"4 - Execute every subtask.\n",
		"5 - Go back.\n"
	};
	void (*actions[n])(double*, int) = {
		interface_sem_3_menu_item_1,
		interface_sem_3_menu_item_2,
		interface_sem_3_menu_item_3,
		interface_sem_3_menu_item_4,
		interface_sem_3_menu_item_5
	};
	while (true) {
		if (menu(chars, actions, n, array, length) == 5) break;
	};
}
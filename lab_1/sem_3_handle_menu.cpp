#include "libraries.h"
#include "prototypes.h"


using namespace interface::sem_3;

void interface::sem_3::handle_menu() {
	//Select a subtask:
	int length;
	double* array;
	bool input_empty = true;
	//1 - Input.
	system("CLS");
	std::cout << "How would you like to input?\n";
	std::cout << "1 - Default input (load default example).\n";
	std::cout << "2 - input yourself.\n";
	std::cout << "3 - input from file.\n";
	std::cout << "4 - Go back.\n";
	switch (interface::read_number())
	{
	case 1:
		show_menu();
		length = interface::read_number_from_file("default_inputs\\sem_3_input.txt");
		array = input_from_file("default_inputs\\sem_3_input.txt");
		input_empty = false;
		if (!input_empty)
		{
			std::cout << "You have inputted data!\n";
			for (int i = 0; i < length; i++)
			{
				std::cout << array[i] << " ";
			}
			std::cout << "\n";
		}
		break;
	case 2:
		input_yourself();
		std::cout << "Input array size:";
		interface::read_number();
		break;
	case 3:
		break;
	case 4:
		break;
	}
	switch (interface::read_number()) {

	case 1:
		//1 - Find the sum of positive elements.
		//subtask_1(*array, length);
		break;

	case 2:
		//2 - Find the product of positive elements.
		//subtask_2(*array, length);
		break;

	case 3:
		//3 - Sort the array.
		//subtask_3(*array, length);
		break;

	case 4:
		//4 - Execute every subtask.
		//subtask_1(*array, length);
		//subtask_2(*array, length);
		//subtask_3(*array, length);
		break;

	case 5: {
		//5 - Go back.
		break;
	}
	default: {
		break;
	}
	}
}

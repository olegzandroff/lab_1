#include "libraries.h"
#include "prototypes.h"

using namespace interface::sem_4;

void interface::sem_4::handle_menu() {
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

	show_menu();

	//	"Select a subtask"
	switch (interface::read_number()) {
	case 1:
		// "1 - input"

	case 2:
		// "2 - Find the number of columns without any zero elements."
		subtask_1();
		break;
	case 3:
		// "3 - Sort the array lines by their characteristic. 
		//		Let's call line's characteristic a number of it's positive even elements"
		subtask_2();
		break;
	case 4:
		// "4 - Execute every subtask."
		subtask_1();
		subtask_2();
		break;
	case 5:
		// "5 - Go back."
		break;
	}
}



	//int x = interface::read_number();
//int y = interface::read_number();
//double** array = new double* [x];
//for (int i = 0; i < x; i++)
//{
//	array[i] = new double[y];
//}
//interface::read_numbers(**array, x, y);
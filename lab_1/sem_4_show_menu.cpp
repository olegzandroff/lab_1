#include "libraries.h"
#include "prototypes.h"
void interface::sem_4::show_menu() {
	system("CLS");
	std::cout << "Select a subtask:\n";

	std::cout << "1 - Input. " <<"Empty:" << "\n";
	std::cout << "2 - Find the number of columns without any zero elements.\n";
	std::cout << "3 - Sort the array lines by their characteristic. \nLet's call line's characteristic a number of it's positive even elements\n";
	std::cout << "4 - Execute every subtask.\n";
	std::cout << "5 - Go back.\n";

};
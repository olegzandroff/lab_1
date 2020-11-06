#include "libraries.h"
#include "prototypes.h"

void interface::sem_3::show_menu() {
	system("CLS");
	std::cout << "Select a subtask:\n";
	std::cout << "1 - Find the sum of positive elements.\n";
	std::cout << "2 - Find the product of positive elements.\n";
	std::cout << "3 - Sort the array.\n";
	std::cout << "4 - Execute every subtask.\n";
	std::cout << "5 - Go back.\n";
};				 
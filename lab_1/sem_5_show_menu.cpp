#include "libraries.h"
#include "prototypes.h"

using namespace interface::sem_5;

void interface::sem_5::show_menu() {
	system("CLS");
	std::cout << "Select a subtask:\n";
	std::cout << "1 - Input.\n";
	std::cout << "2 - Find the sum of positive elements.\n";
	std::cout << "3 - Find the product of positive elements.\n";
	std::cout << "4 - Sort the array.\n";
	std::cout << "5 - Execute every subtask.\n";
	std::cout << "6 - Go back.\n";
};
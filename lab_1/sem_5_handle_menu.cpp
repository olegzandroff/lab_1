#include "libraries.h"
#include "prototypes.h"

using namespace interface::sem_5;

void interface::sem_5::handle_menu() {
	//Select a subtask:
	switch (interface::read_number()) {
	case 1:
	{
		//1 - Input.
		break;
	}

	case 2:
		//2 - Find the sum of positive elements.
		break;

	case 3:
		//3 - Find the product of positive elements.
		break;

	case 4:
		//4 - Sort the array.
		break;

	case 5:
		//5 - Execute every subtask.
		break;

	case 6:
		//6 - Go back.
		break;

	}
};
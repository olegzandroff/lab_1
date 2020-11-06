#include "prototypes.h"
#include "libraries.h"

bool interface::main::handle_menu() {
	switch (interface::read_number()) {
	case 1:
		interface::sem_3::menu();
		break;
	case 2:
		interface::sem_4::menu();
		break;
	case 3:
		interface::sem_5::menu();
		break;
	default:
		return false;
	}
	return true;

}
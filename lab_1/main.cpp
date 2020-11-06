#include "libraries.h"
#include "prototypes.h"

int main()
{	
	setlocale(LC_ALL, "Russian");
	bool run_flag = true;
	while (run_flag) {
		interface::main::show_menu();
		run_flag = interface::main::handle_menu();
	}
}
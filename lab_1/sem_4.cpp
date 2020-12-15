<<<<<<< HEAD
 
#include "prototypes.h"
=======
 #include "prototypes.h"
>>>>>>> templates

void interface_sem_4() 
{
	matrix_elem_t ** array = nullptr;
	int n = 0, m = 0;
	array = interface_sem_4_input_menu(&n, &m);
	if (array == nullptr) return;
	interface_sem_4_tasks_menu(array, n, m);
};
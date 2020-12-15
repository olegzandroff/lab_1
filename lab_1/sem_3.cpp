#include "prototypes.h"
 

void interface_sem_3() 
{
	int length = 0;
	array_elem_t* array = interface_sem_3_input_menu(&length);
	if (array == nullptr) 
		return;
	interface_sem_3_tasks_menu(array, length);
}
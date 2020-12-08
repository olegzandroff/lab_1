#include "libraries.h"
#include "prototypes.h"

void interface_sem_3_tasks_menu_item_1(const array_elem_t* array, int length) {
	std::cout << "\n\tSum of positives: " << sem_3_sum_of_positives(array, length) << "\n\n";
}

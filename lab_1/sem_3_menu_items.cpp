#include "libraries.h"
#include "prototypes.h"

void interface_sem_3_menu_item_1(double* array, int length) {
	std::cout<<"	Sum of positives: " <<sem_3_sum_of_positives(array, length) << "\n\n";
}

void interface_sem_3_menu_item_2(double* array, int length)
{
	std::cout << "	Product between absmin and absmax: " << sem_3_product_between_absmin_absmax(array, length) << "\n\n";
}

void interface_sem_3_menu_item_3(double* array, int length)
{	
	double* sorted_array = new double[length];
	for (int i = 0; i < length; i++)
		sorted_array[i] = array[i];

	sorted_array = sem_3_quick_sort(sorted_array, 0, length - 1);
	std::cout << "	Sorted array: \n";
	std::cout << "	";
	for (int i = 0; i < length; i++)
	{
		std::cout << sorted_array[i] << " ";
	}
	std::cout << "\n\n";
	delete[] sorted_array;
}

void interface_sem_3_menu_item_4(double* array, int length) {
	interface_sem_3_menu_item_1(array, length);
	interface_sem_3_menu_item_2(array, length);
	interface_sem_3_menu_item_3(array, length);
}

void interface_sem_3_menu_item_5(double* array, int length) {
	delete[] array;
	main_menu();
}
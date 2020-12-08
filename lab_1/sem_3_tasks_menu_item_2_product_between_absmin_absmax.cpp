#include "libraries.h"
#include "prototypes.h"

array_elem_t sem_3_absmax_v(const array_elem_t* array, int length) {
	array_elem_t absmax = array[0];
	for (int i = 0; i < length; i++)
		if (abs(array[i]) > absmax) absmax = abs(array[i]);
	return absmax;
}

array_elem_t sem_3_absmin_v(const array_elem_t* array, int length) {
	array_elem_t absmin = array[0];
	for (int i = 0; i < length; i++)
		if (abs(array[i]) < absmin) absmin = abs(array[i]);
	return absmin;
}

int sem_3_absmax_i_n(const array_elem_t* array, int length) {
	array_elem_t absmax = sem_3_absmax_v(array, length);
	int absmax_n = 0;
	for (int i = 0; i < length; i++)
		if (array[i] == absmax) absmax_n++;
	return absmax_n;
}

int sem_3_absmin_i_n(const array_elem_t* array, int length) {
	array_elem_t absmin = sem_3_absmin_v(array, length);
	int absmin_n = 0;
	for (int i = 0; i < length; i++)
		if (array[i] == absmin) absmin_n++;
	return absmin_n;
}

int* sem_3_get_absmax_i(const array_elem_t* array, int length) {
	array_elem_t absmax_v = sem_3_absmax_v(array, length);
	int absmax_i_n = sem_3_absmax_i_n(array, length);
	int* absmax_i = new int[absmax_i_n];
	for (int i = 0, j = 0; i < length && j < absmax_i_n; i++)
		if (array[i] == absmax_v) {
			absmax_i[j] = i;
			j++;
		}
	return absmax_i;
}

int* sem_3_get_absmin_i(const array_elem_t* array, int length) {
	array_elem_t absmin_v = sem_3_absmin_v(array, length);
	int absmin_i_n = sem_3_absmin_i_n(array, length);
	int* absmin_i = new int[absmin_i_n];
	for (int i = 0, j = 0; i < length && j < absmin_i_n; i++)
		if (array[i] == absmin_v) {
			absmin_i[j] = i;
			j++;
		}
	return absmin_i;
}

array_elem_t product_between(const array_elem_t* array, int length, int i_1, int i_2) {
	int left = std::min(i_1, i_2);
	int right = std::max(i_1, i_2);
	array_elem_t product = 1;
	for (int i = left + 1; i < right; i++)
	{
		product *= array[i];
	}
	return product;
}

void interface_sem_3_tasks_menu_item_2(const array_elem_t* array, int length)
{
	const char* bad_scenario_message_1 =
		"\n\tYou have triggered bad scenario #2.\
		 \n\tThis means that total number of absmins and absmaxes is greater than 2.\n";
	const char* bad_scenario_message_2 =
		"\n\tYou have triggered bad scenario #3.\
		 \n\tTotal number of elements between absmin and absmax should be greater or equal to 2.\n";

	if (sem_3_bad_scenario_1(array, length)) {
		std::cout << bad_scenario_message_1;
		int absmax_i_n = sem_3_absmax_i_n(array, length);
		int absmin_i_n = sem_3_absmin_i_n(array, length);
		int* absmax_i = sem_3_get_absmax_i(array, length);
		int* absmin_i = sem_3_get_absmin_i(array, length);
		int absmax_index, absmin_index;

		std::cout << "\n\tAbsmin: " << sem_3_absmin_v(array, length);
		std::cout << "\n\tAbsmin indexes:\n\t";
		for (int i = 0; i < absmin_i_n; i++)
			std::cout << absmin_i[i] << ((i < absmin_i_n - 1) ? ", " : "\n");
		std::cout << "\n\tAbsmax: " << sem_3_absmax_v(array, length);
		std::cout << "\n\tAbsmax indexes:\n\t";
		for (int i = 0; i < absmax_i_n; i++)
			std::cout << absmax_i[i] << ((i < absmax_i_n - 1) ? ", " : "\n");

		do {
			std::cout << "\n\tEnter absmin index:\n\t";
			bool flag = true;
			while (flag) {
				absmin_index = interface_read_number();
				for (int i = 0; i < absmin_i_n; i++)
					if (absmin_i[i] == absmin_index) flag = false;
				if (flag) std::cout << "\n\tThere is no absmin with index (" << absmin_index << ")\n\t";
			}
			flag = true;
			std::cout << "\n\tEnter absmax index:\n\t";
			while (flag) {
				absmax_index = interface_read_number();
				for (int i = 0; i < absmax_i_n; i++)
					if (absmax_i[i] == absmax_index) flag = false;

				if (flag) { std::cout << "\n\tThere is no absmax with such index (" << absmax_index << ")\n\t"; }
			}

			if (sem_3_bad_scenario_2(array, length, absmax_index, absmin_index))
				std::cout << bad_scenario_message_2;
		} while (sem_3_bad_scenario_2(array, length, absmax_index, absmin_index));
		delete[] absmax_i;
		delete[] absmin_i;
		std::cout << "\tProduct between absmin and absmax: " << product_between(array, length, absmax_index, absmin_index) << "\n\n";

	}
	else {
		std::cout << "\tProduct between absmin and absmax: " << sem_3_product_between_absmin_absmax(array, length) << "\n\n";
	}
}
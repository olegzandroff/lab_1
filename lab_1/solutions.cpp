#include "prototypes.h"
#include "libraries.h"

array_elem_t sem_3_product_between_absmin_absmax(const array_elem_t* array, int length) {
	array_elem_t absmin = array[0], absmax = array[0];
	int absmin_index = 0, absmax_index = 0;
	for (int i = 0; i < length; i++)
	{
		if (abs(array[i]) > absmax) {
			absmax = abs(array[i]);
			absmax_index = i;
		}
		if (abs(array[i]) < absmin) {
			absmin = abs(array[i]);
			absmin_index = i;
		}
	}
	int left = std::min(absmin_index, absmax_index);
	int right = std::max(absmin_index, absmax_index);
	array_elem_t product = 1;
	for (int i = left + 1; i < right; i++)
	{
		product *= array[i];
	}
	return product;
};


array_elem_t* sem_3_quick_sort(array_elem_t* array, int first, int last)
{
	int i = first, j = last;
	array_elem_t x = array[(first + last) / 2];
	do {
		while (array[i] < x) i++;
		while (array[j] > x) j--;
		if (i <= j) {
			if (i < j) {
				array_elem_t buff = array[j];
				array[j] = array[i];
				array[i] = buff;
			};
			i++;
			j--;
		}
	} while (i <= j);

	if (i < last)
		sem_3_quick_sort(array, i, last);
	if (first < j)
		sem_3_quick_sort(array, first, j);
	return array;
}

double sem_3_sum_of_positives(const array_elem_t* array, int length)
{
	array_elem_t result = 0;
	for (int i = 0; i < length; i++)
		if (array[i] > 0) result += array[i];
	return result;
};
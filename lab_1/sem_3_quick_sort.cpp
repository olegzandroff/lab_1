#include "prototypes.h"
#include "libraries.h"

double* sem_3_quick_sort(double* array, int first, int last)
{
	int i = first, j = last;
	int x = array[(first + last) / 2];
	do {
		while (array[i] < x) i++;
		while (array[j] > x) j--;
		if (i <= j) {
			if (i < j) {
				double buff = array[j];
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
#include "prototypes.h"
#include "libraries.h"

double sem_3_product_between_absmin_absmax(double* array, int length) {
	double absmin = array[0], absmax = array[0];
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
	double left = std::min(absmin_index, absmax_index);
	double right = std::max(absmin_index, absmax_index);
	double product = 1;
	for (int i = left + 1; i < right; i++)
	{
		product *= array[i];
	}
	return product;
};
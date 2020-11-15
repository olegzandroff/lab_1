#include "prototypes.h"
#include "libraries.h"

double sem_3_sum_of_positives(double* array, int length) 
{
	double result = 0;
	for (int i = 0; i < length; i++)
		if (array[i]) result += array[i];
	return result;
};
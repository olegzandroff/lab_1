#include "libraries.h"
#include "prototypes.h"

//bool sem_3_bad_scenario_1(const array_elem_t* array, int length) {
	//int positive_count = 0;
	//for (int i = 0; i < length; i++)
	//	if (array[i] > 0) positive_count ++;
	//return positive_count<2;
//}		 
		 
bool sem_3_bad_scenario_1(const array_elem_t* array, int length) {
	array_elem_t absmax = array[0], absmin = array[0];
	for (int i = 0; i < length; i++)
	{
		if (abs(array[i]) > absmax) absmax = abs(array[i]);
		if (abs(array[i]) < absmin) absmin = abs(array[i]);
	}
	int count = 0;
	for (int i = 0; i < length; i++)
		if (abs(array[i]) == absmax || abs(array[i]) == absmin) count++;
	return count > 2;
}		 
		 
bool sem_3_bad_scenario_2(const array_elem_t* array, int length, int absmax_i, int absmin_i) {
	return absmax_i == absmin_i;
}

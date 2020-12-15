<<<<<<< HEAD
 
#include "prototypes.h"
=======
 #include "prototypes.h"
>>>>>>> templates

bool sem_3_bad_scenario_1(const array_elem_t* array, int length) 
{
	array_elem_t absmax = sem_3_absmax_v(array, length), absmin = sem_3_absmin_v(array, length);
	int count = 0;
	for (int i = 0; i < length; i++)
		if (abs(array[i]) == absmax || abs(array[i]) == absmin) count++;
	if (absmax == absmin)
		return count > absmax;
	else return count > 2;
}		 
		 
bool sem_3_bad_scenario_2(const int* absmin_i, int absmin_i_n, int absmin_index) 
{
	int flag = true;
	for (int i = 0; i < absmin_i_n; i++)
		if (absmin_i[i] == absmin_index) flag = false;
	return flag;
}

bool sem_3_bad_scenario_3(const int* absmax_i, int absmax_i_n, int absmax_index) 
{
	int flag = true;
	for (int i = 0; i < absmax_i_n; i++)
		if (absmax_i[i] == absmax_index) flag = false;
	return flag;
}

#include "prototypes.h"

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
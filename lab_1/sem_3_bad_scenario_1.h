template <typename T>
bool sem_3_bad_scenario_1(const T* array, int length)
{
	T absmax = sem_3_absmax_v(array, length);
	T absmin = sem_3_absmin_v(array, length);
	int count = 0;
	for (int i = 0; i < length; i++)
		if (abs(array[i]) == absmax || abs(array[i]) == absmin) count++;
	if (absmax == absmin)
		return count > absmax;
	else return count > 2;
}



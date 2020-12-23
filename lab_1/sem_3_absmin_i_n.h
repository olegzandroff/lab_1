template <typename T>
int sem_3_absmin_i_n(const T* array, int length)
{
	T absmin = sem_3_absmin_v(array, length);
	int absmin_n = 0;
	for (int i = 0; i < length; i++)
		if (abs(array[i]) == absmin) absmin_n++;
	return absmin_n;
}
template <typename T>
int sem_3_absmax_i_n(const T* array, int length)
{
	T absmax = sem_3_absmax_v(array, length);
	int absmax_n = 0;
	for (int i = 0; i < length; i++)
		if (abs(array[i]) == absmax) absmax_n++;
	return absmax_n;
}

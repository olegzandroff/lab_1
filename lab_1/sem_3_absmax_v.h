template <typename T>
T sem_3_absmax_v(const T* array, int length)
{
	T absmax = abs(array[0]);
	for (int i = 0; i < length; i++)
		if (abs(array[i]) > absmax) absmax = abs(array[i]);
	return absmax;
}

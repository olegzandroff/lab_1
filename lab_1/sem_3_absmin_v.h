template <typename T>
T sem_3_absmin_v(const T* array, int length)
{
	T absmin = abs(array[0]);
	for (int i = 0; i < length; i++)
		if (abs(array[i]) < absmin) absmin = abs(array[i]);
	return absmin;
}

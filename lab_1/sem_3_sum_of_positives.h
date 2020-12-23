template <typename T>
T sem_3_sum_of_positives(const T* array, int length)
{
	T result = 0;
	for (int i = 0; i < length; i++)
		if (array[i] > 0) result += array[i];
	return result;
};

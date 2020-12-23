template<typename T>
T* sem_3_shell_sort(const T* array, int n)
{
    T* sorted_array = new T[n];
    for (int i = 0; i < n; i++)
        sorted_array[i] = array[i];
    int gap, i, j;

    for (gap = n / 2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j = i - gap; j >= 0 && array[j] > array[j + gap]; j -= gap)
            {
                T buff = sorted_array[j];
                sorted_array[j] = sorted_array[j + gap];
                sorted_array[j + gap] = buff;
            }
	return sorted_array;
}
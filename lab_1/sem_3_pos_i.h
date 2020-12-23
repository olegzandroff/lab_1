template <typename T>
int* sem_3_pos_i(const T* array, int length)
{
	int* pos_i = new int[sem_3_pos_i_n(array, length)];
	int j = 0;
	for (int i = 0; i < length; i++)
		if (array[i] > 0)
			pos_i[j++] = i;

	return pos_i;
}

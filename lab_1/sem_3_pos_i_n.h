template <typename T>
int sem_3_pos_i_n(const T* array, int length)
{
	int pos_i_n = 0;
	for (int i = 0; i < length; i++)
		if (array[i] > 0) pos_i_n++;
	return pos_i_n;
}

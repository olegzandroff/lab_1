template <typename T>
T sem_3_product_between(const T* array, int length, int i_1, int i_2)
{
	int left = (i_1 < i_2) ? i_1 : i_2;
	int right = (i_1 > i_2) ? i_1 : i_2;
	T product = 1;
	for (int i = left + 1; i < right; i++)
		product = array[i] * product;
	return product;
}

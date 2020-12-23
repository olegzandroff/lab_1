template <typename T>
T* sem_4_all_characteristics(const T* const* matrix, int n, int m)
{
	T* line_characteristic = new T[n];
	for (int i = 0; i < n; i++)
		line_characteristic[i] = 0;

	for (int i = 0; i < n; i++)
		line_characteristic[i] = sem_4_line_characteristic(matrix, i, m);

	return line_characteristic;
};
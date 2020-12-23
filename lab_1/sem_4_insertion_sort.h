template <typename T>
T** sem_4_sort(const T* const * array, int n, int m) {
	T* line_characteristic = sem_4_all_characteristics(array, n, m);
	T** sorted_array = sem_4_new_matrix(array, n, m);
		
	for (int i = 1; i < n; i++) {
		for (int j = i; j > 0 && line_characteristic[j - 1] > line_characteristic[j]; j--) {
			T* buff = new T[m];
			for (int k = 0; k < m; k++)
				buff[k] = sorted_array[j][k];
			for (int k = 0; k < m; k++)
				sorted_array[j][k] = sorted_array[j - 1][k];
			for (int k = 0; k < m; k++)
				sorted_array[j - 1][k] = buff[k];
		}
	}
	return sorted_array;
};

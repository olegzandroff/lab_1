template <typename T>
T** sem_4_new_matrix(const T* const* matrix, int n, int m) {
	T** duplicated_matrix = new T* [n];
	for (int i = 0; i < n; i++)
		duplicated_matrix[i] = new T[m];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			duplicated_matrix[i][j] = matrix[i][j];

	return duplicated_matrix;
};
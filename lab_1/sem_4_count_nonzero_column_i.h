template <typename T>
int sem_4_nonzero_column_i_n(const T* const* matrix, int n, int m) 
{
	int counter = 0;
	for (int j = 0; j < m; j++) {
		bool zero = false;
		for (int i = 0; i < n; i++) {
			if (matrix[i][j] == 0) 
				zero = true;
		}
		if (!zero) counter++;
	}
	return counter;
};
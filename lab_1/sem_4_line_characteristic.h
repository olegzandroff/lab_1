template <typename T>
T sem_4_line_characteristic(const T* const* matrix, int i, int m) 
{
	T line_characteristic = 0;
	for (int j = 0; j < m; j++)
		if (matrix[i][j] > 0 && static_cast<int>(matrix[i][j]) % 2 == 0)
			line_characteristic += matrix[i][j];
	return line_characteristic;
}


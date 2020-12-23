#include "prototypes.h"
 
void interface_sem_4() 
{
	matrix_elem_t ** array = nullptr;
	int n = 0, m = 0;
	array = interface_sem_4_input_menu(&n, &m);

	if (array == nullptr) return;


	system("CLS");
	std::cout << "choose the type: \n";
	char strings[4][100] =
	{
		"1 - double\n",
		"2 - float\n",
		"3 - long\n",
		"4 - int\n"
	};
	for (int i = 0; i < 4; i++)
		std::cout << strings[i];

	int event = interface_read_number();
	while (event > 4 && event <= 0) event = interface_read_number();

	switch (event)
	{
		case 1:
		{
			interface_sem_4_tasks_menu(array, n, m);
			break;
		}
		case 2:
		{
			float** array_new = new float* [n];
			for (int i = 0; i < n; i++)
				array_new[i] = new float[m];
			for (int i = 0; i < n; i++)
				for (int j = 0; j < m; j++)
					array_new[i][j] = static_cast<float>(array[i][j]);
			interface_sem_4_tasks_menu<float>(array_new, n, m);
			break;
		}
		case 3:
		{
			long** array_new = new long* [n];
			for (int i = 0; i < n; i++)
				array_new[i] = new long[m];
			for (int i = 0; i < n; i++)
				for (int j = 0; j < m; j++)
					array_new[i][j] = static_cast<long>(array[i][j]);
		
			interface_sem_4_tasks_menu<long>(array_new, n, m);
			break;
		}
		case 4:
		{
			int** array_new = new int*[n];
			for (int i = 0; i < n; i++)
				array_new[i] = new int[m];
			for (int i = 0; i < n; i++)
				for (int j = 0; j < m; j++)
					array_new[i][j] = static_cast<int>(array[i][j]);
			interface_sem_4_tasks_menu<int>(array_new, n, m);
			break;
		}
	}
	for (int i = 0; i < n; i++)
		delete[] array[i];
	delete[] array;
};
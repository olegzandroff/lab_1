#include "prototypes.h"
 
void interface_sem_3() 
{
	int length = 0;
	array_elem_t* array = interface_sem_3_input_menu(&length);

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

	if (array == nullptr)
		return;

	switch (event)
	{
		case 1: 
		{
			interface_sem_3_tasks_menu<double>(array, length);
			break;
		}
		case 2:
		{
			float* array_new = new float[length];
			for (int i = 0; i < length; i++)
				array_new[i] = static_cast<float> (array[i]);

			interface_sem_3_tasks_menu<float>(array_new, length);
			break;
		}
		case 3:
		{
			long* array_new = new long[length];
			for (int i = 0; i < length; i++)
				array_new[i] = static_cast<long> (array[i]);

			interface_sem_3_tasks_menu<long>(array_new, length);
			break;
		}
		case 4:
		{
			int* array_new = new int[length];
			for (int i = 0; i < length; i++)
				array_new[i] = static_cast<int> (array[i]);

			interface_sem_3_tasks_menu<int>(array_new, length);
			break;
		}
		delete[] array;
	}
	
}
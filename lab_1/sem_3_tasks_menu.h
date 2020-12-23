template <typename T>
void interface_sem_3_tasks_menu(T* array, int length) 
{
	const int n_2 = 5;
	char chars_2[n_2][100] = 
	{
		"1 - Find the sum of positive elements.\n",
		"2 - Find the product between absmin and absmax.\n",
		"3 - Sort the array(quick sort).\n",
		"4 - Execute every subtask.\n",
		"5 - Go back.\n"
	};
	void (*actions_2[n_2])(const T*, int) = 
	{
		interface_sem_3_tasks_menu_item_1,
		interface_sem_3_tasks_menu_item_2,
		interface_sem_3_tasks_menu_item_3,
		interface_sem_3_tasks_menu_item_4,
		interface_sem_3_tasks_menu_item_5
	};

	bool is_first_iter = true;
	do {
		if (is_first_iter) 
			is_first_iter = false; 
		else 
		{
			std::cout << "Press ENTER to continue...";
			char a = getchar();
		}
		system("CLS");
		std::cout << "Array's length: " << "\n" << length << "\n";
		std::cout << "Elements: " << "\n";
		interface_cout_array(array, length);
		std::cout << "Type: " << typeid(T).name() << "\n";
	} while (menu(chars_2, actions_2, n_2, array, length) != n_2);
}
template <typename T>
void interface_sem_3_tasks_menu_item_1(const T* array, int length)
{
	std::cout << "{item_1}\n";
	std::cout << "\n\tSum of positives: " << sem_3_sum_of_positives(array, length) << "\n\n";
	int* positive_i = sem_3_pos_i(array, length);
	std::cout << "\n\t Positive indexes:\n\t";
	for (int i = 0; i < sem_3_pos_i_n(array, length); i++)
	{
		std::cout << positive_i[i];
		std::cout << ((i < sem_3_pos_i_n(array, length) - 1) ? ", " : ".\n\n");
	}
	delete[] positive_i;
}

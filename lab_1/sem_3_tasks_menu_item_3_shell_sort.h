template <typename T>
void interface_sem_3_tasks_menu_item_3(const T* array, int length)
{
	std::cout << "{item_3}\n";
	T* sorted_array = sem_3_shell_sort(array, length);
	std::cout << "\tSorted array: \n\t";
	interface_cout_array(sorted_array, length);
	delete[] sorted_array;
}

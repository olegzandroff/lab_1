template <typename T>
void interface_sem_4_tasks_menu_item_2(const T* const* array, int n, int m) 
{
	std::cout << "{item_2}\n";
	std::cout << "\tSorted by characteristic (insertion sort):\n";
	T** sorted_array = sem_4_sort(array, n, m);
	cout_matrix(sorted_array, n, m, true);
}
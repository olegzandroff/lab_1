template <typename T>
void interface_sem_4_tasks_menu_item_4(const T* const* array, int n, int m) 
{
	for (int i = 0; i < n; i++)
		delete[] array[i];
	delete[] array;
}

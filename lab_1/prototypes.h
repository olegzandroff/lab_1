#pragma once
	int interface_read_number();
	int interface_read_number_from_file (const char* path);

	int menu(char(*a)[100], void (*fcn_ptrs[])(), int);
	int menu(char(*a)[100], void (*fcn_ptrs[])(double*, int), int fcn_number, double* array, int length);
	int menu(char(*a)[100], void (*fcn_ptrs[])(double**, int, int), int fcn_number, double** array, int n, int m);
	int menu(char(*a)[100], void (*fcnPtr[])(char* string, int length), int fcn_number, char* string, int length);


	void main_menu();
	void exit();
	//double* read_numbers(double& arr, int n);
	//double** read_numbers(double** arr, int x, int y);
	void interface_sem_3_menu_item_1(double* array, int length);
	void interface_sem_3_menu_item_2(double* array, int length);
	void interface_sem_3_menu_item_3(double* array, int length);
	void interface_sem_3_menu_item_4(double* array, int length);
	void interface_sem_3_menu_item_5(double* array, int length);
	double* interface_sem_3_input_from_file(const char* path, int length);
	void interface_sem_3_menu();

	double** interface_sem_4_input_from_file(const char* path, int n, int m);
	void interface_sem_4_menu();

	void interface_sem_4_menu_item_1(double** array, int n, int m);
	void interface_sem_4_menu_item_2(double** array, int n, int m);
	void interface_sem_4_menu_item_3(double** array, int n, int m);
	void interface_sem_4_menu_item_4(double** array, int n, int m);

	void interface_sem_5_menu();
	void interface_sem_5_menu_item_1(char* string, int length);

	double* sem_3_input_check(double* array, int n);
	double sem_3_sum_of_positives(double* array, int length);
	double sem_3_product_between_absmin_absmax(double* array, int length);
	double* sem_3_quick_sort(double* array, int first, int last);

	double* sem_3_offer_to_choose_min_max(double* array, int n);

	double* sem_4_input_check(double** arr, int n);
	double* sem_4_sort(double** arr, int n);
	double* sem_4_sum_of_even_positives(double** arr, int n);
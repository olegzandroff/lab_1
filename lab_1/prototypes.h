#pragma once
#include "libraries.h"
	long get_file_length_in_chars(const char* path);
	//Обработка ввода чисел
	int interface_read_number();
	int interface_read_positive_number();
	//объявление типов для массива и матрицы
	typedef int matrix_elem_t;
	typedef double array_elem_t;

	//общая часть для всех реализаций функции menu
	int interface_menu_cout_and_choose(char(*a)[100], int n);

	//функции вывода и обработки меню

	//main_menu
	int menu(char(*a)[100], void (*fcn_ptrs[])(), int);

	//sem_3_tasks_menu
	int menu(char(*a)[100], void (*fcn_ptrs[])(const array_elem_t*, int), int, const array_elem_t*, int);

	//sem_3_input_menu
	array_elem_t* menu(char(*a)[100], array_elem_t* (*fcn_ptrs[])(int*), int, int*);

	//sem_4_tasks_menu
	int menu(char(*a)[100], void (*fcn_ptrs[])(const matrix_elem_t* const *, int, int), int, const matrix_elem_t* const *, int n, int m);

	//sem_4_input_menu
	matrix_elem_t** menu(char(*a)[100], matrix_elem_t** (*fcn_ptrs[])(int*, int*), int, int*, int*);

	//sem_5_tasks_menu
	int menu(char(*a)[100], void (*fcn_ptrs[])(const char*, const char*), int, const char*, const char*);

	//sem_5_input_menu
	char* menu(char(*a)[100], char* (*fcn_ptrs[])(), int);

	//main_menu
	void interface_main_menu();
	
	void interface_exit();

	//sem_3

	//Функция вывода и обработки меню
	int interface_read_number_from_file(const char* path);
	//Функция, вызывающая меню ввода и меню решения задачи для sem_3
	void interface_sem_3();
	//Выводит переданный на вход массив
	void interface_cout_array(const array_elem_t*, int);
	//функция меню ввода
	array_elem_t* interface_sem_3_input_menu(int*);
	//Позиции меню ввода

	//Ввод примера из файла
	array_elem_t* interface_sem_3_input_menu_item_1(int*);
	//Ввод с консоли
	array_elem_t* interface_sem_3_input_menu_item_2(int*);
	//Заполнение случайными числами (по модулю меньше 1000)
	array_elem_t* interface_sem_3_input_menu_item_3(int*);
	//Выход из меню ввода
	array_elem_t* interface_sem_3_input_menu_item_4(int*);

	//Меню решения задачи
	void interface_sem_3_tasks_menu(array_elem_t*, int);
	//Позиции меню решения задачи
	//Сумма положительных элементов
	void interface_sem_3_tasks_menu_item_1(const array_elem_t*, int);
	//Произведение между максимальным и минимальным по модулю элементами
	void interface_sem_3_tasks_menu_item_2(const array_elem_t*, int);
	//Сортировать массив
	void interface_sem_3_tasks_menu_item_3(const array_elem_t*, int);
	//Выполнить всё предыдущее
	void interface_sem_3_tasks_menu_item_4(const array_elem_t*, int);
	//Очистка памяти и выход
	void interface_sem_3_tasks_menu_item_5(const array_elem_t*, int);
	
	//Неуспешный сценарий 3.1. 
	//Возможно существование нескольких минимальных и максимальных по модулю значений. 
	//Если их больше чем два, то нужно предоставить пользователю выбор.
	//Возвращает true, если в массиве суммарное количество повторяющихся absмаксимумов и количество повторяющихся absминимумов больше 2
	//Возвращает false, если в массиве только один absминимум и только один absмаксимум
	bool sem_3_bad_scenario_1(const array_elem_t*, int);
	//Неуспешный сценарий 3.2. 
	//для минимума
	bool sem_3_bad_scenario_2(const int*, int, int);
	//Неуспешный сценарий 3.2. 
	//для максимума
	bool sem_3_bad_scenario_3(const int*, int, int);

	//Возвращает сумму положительных элементов в массиве
	array_elem_t sem_3_sum_of_positives(const array_elem_t*, int);
	array_elem_t* sem_3_shell_sort(const array_elem_t*, int);
	int* get_pos_i(const array_elem_t*, int);
	int get_pos_i_n(const array_elem_t*, int);
	array_elem_t sem_3_absmin_v(const array_elem_t*, int);
	array_elem_t sem_3_absmax_v(const array_elem_t*, int);
	int sem_3_absmin_i_n(const array_elem_t*, int);
	int sem_3_absmax_i_n(const array_elem_t*, int);
	int* sem_3_get_absmin_i(const array_elem_t*, int);
	int* sem_3_get_absmax_i(const array_elem_t*, int);

	array_elem_t sem_3_product_between(const array_elem_t*, int, int, int);

	//sem_4
	//Функция, вызывающая меню ввода и меню решения задачи для sem_4
	void interface_sem_4();

	//функция меню ввода
	matrix_elem_t** interface_sem_4_input_menu(int*, int*);

	//Позиции меню ввода

	//1. Ввод из файла
	matrix_elem_t** interface_sem_4_input_menu_item_1(int*, int*);
		matrix_elem_t** interface_sem_4_input_from_file(const char*, int, int);
	//2. Ввод с консоли
	matrix_elem_t* parse_line(char*, int);
	matrix_elem_t** interface_sem_4_input_menu_item_2(int*, int*);
	//3. Заполнить случайными числами
	matrix_elem_t** interface_sem_4_input_menu_item_3(int*, int*);
	//4. Выход
	matrix_elem_t** interface_sem_4_input_menu_item_4(int*, int*);

	//Меню решения задачи
	void interface_sem_4_tasks_menu(matrix_elem_t**, int, int);
	//Позиции меню решения задачи:
	//Количество ненулевых столбцов
	void interface_sem_4_tasks_menu_item_1(const matrix_elem_t* const *, int, int);
	//Сортировка строк матрцы по линейной характеристике (сумме положительных чётных элементов)
	void interface_sem_4_tasks_menu_item_2(const matrix_elem_t* const *, int, int);
	//Выполнить и то и другое
	void interface_sem_4_tasks_menu_item_3(const matrix_elem_t* const *, int, int);
	//Очистка памяти и выход
	void interface_sem_4_tasks_menu_item_4(const matrix_elem_t* const *, int, int);

	//функции, выполняющие задание
	void cout_matrix(const matrix_elem_t* const*, int, int, bool);

	int sem_4_get_nonzero_column_i_n(const matrix_elem_t* const *, int, int);
	matrix_elem_t** sem_4_sort(const matrix_elem_t* const*, int, int);
	matrix_elem_t sem_4_get_line_characteristic(const matrix_elem_t* const* array, int i, int m);
	matrix_elem_t* sem_4_get_all_characteristics(const matrix_elem_t* const*, int, int);
	matrix_elem_t** sem_4_get_new_matrix(const matrix_elem_t* const* array, int, int);
	//sem_5

	//Функция вызыващая меню ввода и меню решения задачи
	void interface_sem_5();
	//Меню ввода
	char* interface_sem_5_input_menu();
	//Позиции меню ввода

	//1. Ввод текста из файла
	char* interface_sem_5_input_menu_item_1();
	char* interface_sem_5_input_text_from_file(const char* path);

	//2. Ввод текста с консоли
	char* interface_sem_5_input_menu_item_2();
	//3. Выход
	char* interface_sem_5_input_menu_item_3();

	//Меню решения задачи
	void interface_sem_5_tasks_menu(char*, char*);

	//Позиции меню решения задачи

	//Регистронезависимый поиск
	void interface_sem_5_tasks_menu_item_1(const char*, const char*);
	//Регистрозависимый поиск
	void interface_sem_5_tasks_menu_item_2(const char*, const char*);
	//Выход
	void interface_sem_5_tasks_menu_item_3(const char*, const char*);
	
	//Неуспешные сценарии

	//Неуспешный сценарий 5.1. 
	//не введено никаких предложений
	bool sem_5_bad_scenario_1(const char*);
	//Неуспешный сценарий 5.2. 
	//Слово нулевой длины.
	bool sem_5_bad_scenario_2(const char*);
	//Неуспешный сценарий 5.3. 
	//Слово, содержит что-нибудь кроме букв
	bool sem_5_bad_scenario_3(const char*);
	//Неуспешный сценарий 5.4. 
	//встретилось троеточие
	bool sem_5_bad_scenario_4(char, char, char);

	char** sem_5_get_array_of_sentences(char*, size_t*);

	//Функции для работы со строками
	char* to_lower(const char*);
	char* stringcat(char* dest, const char* src);
	void cout_text_and_word(const char*, const char*);
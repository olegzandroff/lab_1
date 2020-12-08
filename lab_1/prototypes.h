#pragma once

long get_file_length_in_chars(const char* path);
	//��������� ����� �����
	int interface_read_number();
	int interface_read_positive_number();
	//���������� ����� ��� ������� � �������
	typedef long matrix_elem_t;
	typedef double array_elem_t;

	//����� ����� ��� ���� ���������� ������� menu
	int interface_menu_cout_and_choose(char(*a)[100], int n);

	//������� ������ � ��������� ����

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

		//������� ������ � ��������� ����
		int interface_read_number_from_file(const char* path);
		//�������, ���������� ���� ����� � ���� ������� ������ ��� sem_3
		void interface_sem_3();
		//������� ���������� �� ���� ������
		void cout_array(const array_elem_t*, int);
		//������� ���� �����
		array_elem_t* interface_sem_3_input_menu(int*);
		//������� ���� �����

		//���� ������� �� �����
		array_elem_t* interface_sem_3_input_menu_item_1(int*);
		//���� � �������
		array_elem_t* interface_sem_3_input_menu_item_2(int*);
		//���������� ���������� ������� (�� ������ ������ 1000)
		array_elem_t* interface_sem_3_input_menu_item_3(int*);
		//����� �� ���� �����
		array_elem_t* interface_sem_3_input_menu_item_4(int*);

		//���� ������� ������
		void interface_sem_3_tasks_menu(array_elem_t*, int);
		//������� ���� ������� ������
		//����� ������������� ���������
		void interface_sem_3_tasks_menu_item_1(const array_elem_t*, int);
		//������������ ����� ������������ � ����������� �� ������ ����������
		void interface_sem_3_tasks_menu_item_2(const array_elem_t*, int);
		//����������� ������
		void interface_sem_3_tasks_menu_item_3(const array_elem_t*, int);
		//��������� �� ����������
		void interface_sem_3_tasks_menu_item_4(const array_elem_t*, int);
		//������� ������ � �����
		void interface_sem_3_tasks_menu_item_5(const array_elem_t*, int);
	
		//���������� �������� 3.1. 
		//�������� ������������� ���������� ����������� � ������������ �� ������ ��������. 
		//���� �� ������ ��� ���, �� ����� ������������ ������������ �����.
		//���������� true, ���� � ������� ��������� ���������� ������������� abs���������� � ���������� ������������� abs��������� ������ 2
		//���������� false, ���� � ������� ������ ���� abs������� � ������ ���� abs��������
		bool sem_3_bad_scenario_1(const array_elem_t*, int);
		//���������� �������� 3.2. 
		//���� abs������� � abs�������� ���������� ����������, 
		//�� ��� ������������� ������������ ���������, ����� ����� ���� ���� >=2 ���������
		bool sem_3_bad_scenario_2(const array_elem_t* array, int length, int absmax_i, int absmin_i);
		//���������� ����� ������������� ��������� � �������
		array_elem_t sem_3_sum_of_positives(const array_elem_t*, int);
		//���������� ����� ������������� ��������� � �������
		array_elem_t sem_3_product_between_absmin_absmax(const array_elem_t*, int);
		//������� ����������
		array_elem_t* sem_3_quick_sort(array_elem_t*, int, int);


	//sem_4
		//�������, ���������� ���� ����� � ���� ������� ������ ��� sem_3
		void interface_sem_4();

		//������� ���� �����
		matrix_elem_t** interface_sem_4_input_menu(int*, int*);

		//������� ���� �����

		//1. ���� �� �����
		matrix_elem_t** interface_sem_4_input_menu_item_1(int*, int*);
			matrix_elem_t** interface_sem_4_input_from_file(const char*, int, int);
		//2. ���� � �������
		matrix_elem_t** interface_sem_4_input_menu_item_2(int*, int*);
		//3. ��������� ���������� �������
		matrix_elem_t** interface_sem_4_input_menu_item_3(int*, int*);
		//4. �����
		matrix_elem_t** interface_sem_4_input_menu_item_4(int*, int*);

		//���� ������� ������
		void interface_sem_4_tasks_menu(matrix_elem_t**, int, int);
		//������� ���� ������� ������:
		//���������� ��������� ��������
		void interface_sem_4_tasks_menu_item_1(const matrix_elem_t* const *, int, int);
		//���������� ����� ������ �� �������� �������������� (����� ������������� ������ ���������)
		void interface_sem_4_tasks_menu_item_2(const matrix_elem_t* const *, int, int);
		//��������� � �� � ������
		void interface_sem_4_tasks_menu_item_3(const matrix_elem_t* const *, int, int);
		//������� ������ � �����
		void interface_sem_4_tasks_menu_item_4(const matrix_elem_t* const *, int, int);
	
	
		//���������� ��������

		//���������� �������� 4.1. 
		bool sem_4_bad_scenario_1(const matrix_elem_t* const *, int, int);
		bool sem_4_bad_scenario_2(const matrix_elem_t* const *, int, int);
		bool sem_4_bad_scenario_3(const matrix_elem_t* const *, int, int);

		//�������, ����������� �������
		void cout_matrix(const matrix_elem_t* const*, int, int);

		int sem_4_count_nonzero_columns(const matrix_elem_t* const *, int, int);
		matrix_elem_t** sem_4_sort(const matrix_elem_t* const*, int, int);

	//sem_5

		//������� ��������� ���� ����� � ���� ������� ������
		void interface_sem_5();
		//���� �����
		char* interface_sem_5_input_menu();
		//������� ���� �����

		//1. ���� ������ �� �����
		char* interface_sem_5_input_menu_item_1();
		char* interface_sem_5_input_text_from_file(const char* path);

		//2. ���� ������ � �������
		char* interface_sem_5_input_menu_item_2();
		//3. �����
		char* interface_sem_5_input_menu_item_3();

		//���� ������� ������
		void interface_sem_5_tasks_menu(char*, char*);

		//������� ���� ������� ������

		//������������������� �����
		void interface_sem_5_tasks_menu_item_1(const char*, const char*);
		//����������������� �����
		void interface_sem_5_tasks_menu_item_2(const char*, const char*);
		//�����
		void interface_sem_5_tasks_menu_item_3(const char*, const char*);
	
		//���������� ��������
		bool sem_5_bad_scenario_1(const char*, const char*);
		bool sem_5_bad_scenario_2(const char*, const char*);
		bool sem_5_bad_scenario_3(const char*, const char*);
		//�������
		char** sem_5_get_array_of_sentences(char*, size_t*);

		//������� ��� ������ �� ��������
		//� ������ �������
		char* to_lower(const char*);
		//����
		char* stringcat(char* dest, const char* src);
		void cout_text_and_word(const char*, const char*);
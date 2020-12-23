#pragma once
#include "libraries.h"
int main();
long get_file_length_in_chars(const char* path);
int interface_read_number();
int interface_read_positive_number();
typedef double matrix_elem_t;
typedef double array_elem_t;

int interface_menu_cout_and_choose(char(*a)[100], int n);

//main_menu
int menu(char(*a)[100], void (*fcn_ptrs[])(), int);
array_elem_t* menu(char(*a)[100], array_elem_t* (*fcn_ptrs[])(int*), int, int*);
matrix_elem_t** menu(char(*a)[100], matrix_elem_t** (*fcn_ptrs[])(int*, int*), int, int*, int*);
int menu(char(*a)[100], void (*fcn_ptrs[])(const char*, const char*), int, const char*, const char*);
char* menu(char(*a)[100], char* (*fcn_ptrs[])(), int);
void interface_main_menu();
void interface_exit();

//sem_3
int interface_read_number_from_file(const char* path);
void interface_sem_3();
array_elem_t* interface_sem_3_input_menu(int*);
array_elem_t* interface_sem_3_input_menu_item_1(int*);
array_elem_t* interface_sem_3_input_menu_item_2(int*);
array_elem_t* interface_sem_3_input_menu_item_3(int*);
array_elem_t* interface_sem_3_input_menu_item_4(int*);
bool sem_3_bad_scenario_2(const int*, int, int);
bool sem_3_bad_scenario_3(const int* absmax_i, int absmax_i_n, int absmax_index);

//sem_4
void interface_sem_4();
matrix_elem_t** interface_sem_4_input_menu(int*, int*);
matrix_elem_t** interface_sem_4_input_menu_item_1(int*, int*);
matrix_elem_t** interface_sem_4_input_from_file(const char*, int, int);
matrix_elem_t* parse_line(char*, int);
matrix_elem_t** interface_sem_4_input_menu_item_2(int*, int*);
matrix_elem_t** interface_sem_4_input_menu_item_3(int*, int*);
matrix_elem_t** interface_sem_4_input_menu_item_4(int*, int*);
//sem_5
void interface_sem_5();
char* interface_sem_5_input_menu();
char* interface_sem_5_input_menu_item_1();
char* interface_sem_5_input_text_from_file(const char* path);
char* interface_sem_5_input_menu_item_2();
char* interface_sem_5_input_menu_item_3();
void interface_sem_5_tasks_menu(char*, char*);
void interface_sem_5_tasks_menu_item_1(const char*, const char*);
void interface_sem_5_tasks_menu_item_2(const char*, const char*);
void interface_sem_5_tasks_menu_item_3(const char*, const char*);
bool sem_5_bad_scenario_1(const char*);
bool sem_5_bad_scenario_2(const char*);
bool sem_5_bad_scenario_3(const char*);
bool sem_5_bad_scenario_4(char, char, char);
char** sem_5_get_array_of_sentences(char*, size_t*);
char* to_lower(const char*);
char* stringcat(char* dest, const char* src);
void cout_text_and_word(const char*, const char*);
//sem_3
template <typename T>
int menu(char(*a)[100], void (*fcn_ptrs[])(const T*, int), int fcn_number,
    const T* array, int length)
{
    int k = interface_menu_cout_and_choose(a, fcn_number);
    fcn_ptrs[k - 1](array, length);
    return k;
}
#include "sem_3_pos_i_n.h"
#include "sem_3_pos_i.h"
#include "sem_3_sum_of_positives.h"
#include "sem_3_absmax_v.h"
#include "sem_3_absmin_v.h"
#include "sem_3_bad_scenario_1.h"
#include "sem_3_absmax_i_n.h"
#include "sem_3_absmin_i_n.h"
#include "sem_3_absmax_i.h"
#include "sem_3_absmin_i.h"
#include "sem_3_product_between.h"
#include "sem_3_shell_sort.h"
#include "cout_array.h"
#include "sem_3_tasks_menu_item_1_sum_of_positives.h"
#include "sem_3_tasks_menu_item_2_product_between_absmin_absmax.h"
#include "sem_3_tasks_menu_item_3_shell_sort.h"
#include "sem_3_tasks_menu_item_4_everything.h"
#include "sem_3_tasks_menu_item_5_exit.h"
#include "sem_3_tasks_menu.h"


//sem_4
template <typename T>
int menu(char(*a)[100], void (*fcn_ptrs[])(const T* const*, int, int),
    int fcn_number, const T* const* array,
    int n, int m)
{
    int k = interface_menu_cout_and_choose(a, fcn_number);
    fcn_ptrs[k - 1](array, n, m);
    return k;
}
#include "sem_4_line_characteristic.h"
#include "cout_matrix.h"
#include "sem_4_count_nonzero_column_i.h"
#include "sem_4_tasks_menu_item_1_nonzero_columns.h"
#include "sem_4_new_matrix.h"
#include "sem_4_all_characteristics.h"
#include "sem_4_insertion_sort.h"
#include "sem_4_tasks_menu_item_2_sort_by_characterisctic.h"
#include "sem_4_tasks_menu_item_3_everything.h"
#include "sem_4_tasks_menu_item_4_exit.h"
#include "sem_4_tasks_menu.h"
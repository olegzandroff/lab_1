 
#include "prototypes.h"
//int b[6][3][8];
//int(*p2)[3][8] = b; // pointer to the first element b[0] of the array b,
                     // which is an array of 3 arrays of 8 ints

//общая часть для всех функций menu
int interface_menu_cout_and_choose(char(*a)[100], int n) 
{
    for (int i = 0; i < n; ++i)
        std::cout << a[i];
    int k = interface_read_number();
    while (k <= 0 || k > n) k = interface_read_number();
    return k;
}

//main
int menu(char(*a)[100], void (*fcn_ptrs[])(), int fcn_number) 
{
    int k = interface_menu_cout_and_choose(a, fcn_number);
    fcn_ptrs[k - 1]();
    return k;
}

//sem_3
int menu(char(*a)[100], void (*fcn_ptrs[])(const array_elem_t*, int), int fcn_number, 
            const array_elem_t* array, int length) 
{
    int k = interface_menu_cout_and_choose(a, fcn_number);
    fcn_ptrs[k - 1](array, length);
    return k;
}
array_elem_t* menu(char(*a)[100], array_elem_t* (*fcn_ptrs[])(int*), int fcn_number, int* length) 
{
    int k = interface_menu_cout_and_choose(a, fcn_number);
    return fcn_ptrs[k - 1](length);
}

//sem_4
int menu(char(*a)[100], void (*fcn_ptrs[])(const matrix_elem_t* const*, int, int), 
         int fcn_number, const matrix_elem_t* const* array, 
         int n, int m)
{
    int k = interface_menu_cout_and_choose(a, fcn_number);
    fcn_ptrs[k - 1](array, n, m);
    return k;
}

matrix_elem_t** menu(char(*a)[100], matrix_elem_t** (*fcn_ptrs[])(int*, int*), 
                     int fcn_number, int* n, int* m)
{
    int k = interface_menu_cout_and_choose(a, fcn_number);
    return fcn_ptrs[k - 1](n, m);
}

//sem_5
int menu(char(*a)[100], void (*fcn_ptrs[])(const char*, const char*), 
         int fcn_number, const char* text, const char* word) 
{
    int k = interface_menu_cout_and_choose(a, fcn_number);
    fcn_ptrs[k - 1](text, word);
    return k;
}

char* menu(char(*a)[100], char* (*fcn_ptrs[])(), int fcn_number) 
{
    int k = interface_menu_cout_and_choose(a, fcn_number);
    return fcn_ptrs[k - 1]();
};




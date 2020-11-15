#include "libraries.h"
#include "prototypes.h"

int menu(char(*a)[100], void (*fcnPtr[])(), int fcn_number) {
    for (int i = 0; i < fcn_number; ++i)
        std::cout << a[i];
    int k = interface_read_number();
    if (k <= fcn_number)
        fcnPtr[k - 1]();
    return k;
}

int menu(char(*a)[100], void (*fcnPtr[])(double*, int), int fcn_number, double* array, int length) {
    for (int i = 0; i < fcn_number; ++i)
        std::cout << a[i];
    int k = interface_read_number();
    if (k <= fcn_number)
        fcnPtr[k - 1](array, length);
    return k;
}

int menu(char(*a)[100], void (*fcnPtr[])(double**, int, int), int fcn_number, double** array, int n, int m) {
    for (int i = 0; i < fcn_number; ++i)
        std::cout << a[i];
    int k = interface_read_number();
    if (k <= fcn_number)
        fcnPtr[k - 1](array, n, m);
    return k;
}

int menu(char(*a)[100], void (*fcnPtr[])(char* string, int length), int fcn_number, char* string, int length) {
    for (int i = 0; i < fcn_number; ++i)
        std::cout << a[i];
    int k = interface_read_number();
    if (k <= fcn_number)
        fcnPtr[k - 1](string, length);
    return k;
}
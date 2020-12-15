#include "prototypes.h"
<<<<<<< HEAD
 
=======
>>>>>>> templates

array_elem_t* sem_3_shell_sort(const array_elem_t* array, int n)
{
    array_elem_t* sorted_array = new array_elem_t[n];
    for (int i = 0; i < n; i++)
        sorted_array[i] = array[i];
    int gap, i, j;

    for (gap = n / 2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j = i - gap; j >= 0 && array[j] > array[j + gap]; j -= gap)
            {
                array_elem_t buff = sorted_array[j];
                sorted_array[j] = sorted_array[j + gap];
                sorted_array[j + gap] = buff;
            }
	return sorted_array;
}